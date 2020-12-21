/*
 *	@file		StringsAndArrays_Test_Module.cpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Boost Test module for Strings and Arrays unit tests
 */

#include "ProblemSets.hpp"			// Contains all of the includes for each problem set
#include "Utilities.hpp"

#include <boost/test/unit_test.hpp>	// Differs from "boost/test/included/unit_test.hpp" which is used in main.cpp
#include <boost/test/output_test_stream.hpp>
using boost::test_tools::output_test_stream;

#include <string>
using namespace std;

// All test cases for Strings and Arrays
#ifdef __STRINGS_AND_ARRAYS_SWITCH__
BOOST_AUTO_TEST_SUITE( strings_and_arrays_suite )

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_1__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_1 ) {

	/*	
		ASCII string

		By the pidgeon-hole principle, if the length is greater than 128, this exceeds
		the number of ASCII characters, meaning there are duplicates

	*/
	// Initialize string with a set size
	string test_str;
	// Adds all 128 ASCII characters
	for (int i = 0; i <= 127; ++i)
		test_str.push_back( i );
	// adds another ASCII character
	test_str.push_back( 'a' );
	BOOST_TEST( !is_unique( test_str ) );

	/* empty string should be unique */
	BOOST_TEST( is_unique( "" ) );

	/* even-numbered size, non-unique */
	BOOST_TEST( !is_unique( "abbc" ) );

	/* even-numbered size, unique */
	BOOST_TEST( is_unique( "abcd" ) );

	/* odd-numbered size, non-unique */
	BOOST_TEST( !is_unique( "abcce" ) );

	/* odd_numbered size, unique */
	BOOST_TEST( is_unique( "abcde" ) );

	/* even-numbered size, non-unique with spaces */
	BOOST_TEST( !is_unique( "abbc v p" ) );

	/* odd-numbered size, unique with spaces */
	BOOST_TEST( is_unique( "abcd vz" ) );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_1__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_2__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_2 ) {
	/* empty string is permutation of non-empty string */
	BOOST_TEST( !check_permutation( "", "abc" ) );

	/* non-empty string is permutation of empty string */
	BOOST_TEST( !check_permutation( "abc", "" ) );

	/* empty string is permutation of empty string */
	BOOST_TEST( check_permutation( "", "" ) );

	BOOST_TEST( check_permutation( "abc", "cba" ) );

	BOOST_TEST( !check_permutation( "abc", "abc " ) );

	BOOST_TEST( check_permutation( " abc", "abc " ) );

	BOOST_TEST( !check_permutation( "abc", " abc " ) );

	BOOST_TEST( !check_permutation( "abc", "                 abc" ) );

	BOOST_TEST( check_permutation( "abc       ", "       abc" ) );

	BOOST_TEST( !check_permutation( "aabc", "abc" ) );

	BOOST_TEST( !check_permutation( "abc", "cbad" ) );

	BOOST_TEST( check_permutation( "dabc", "cbad" ) );

	BOOST_TEST( check_permutation( "taco cat", "tac ocat" ) );

	BOOST_TEST( check_permutation( "bumbus cat", "bum catbus" ) );

	BOOST_TEST( check_permutation( "school master", "the classroom" ) );

	BOOST_TEST( check_permutation( "a gentleman", "elegant man" ) );

	BOOST_TEST( !check_permutation( "Dormitory ", "Dirty Room" ) );

	BOOST_TEST( !check_permutation( "Listen", "Silent" ) );

	BOOST_TEST( check_permutation( "The eyes", "They see" ) );

	BOOST_TEST( !check_permutation( "Conversation", "Voices rant on" ) );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_2__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_3__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_3 ) {
	/* empty string */
	BOOST_TEST( URLify( "", 0 ) == "" );

	BOOST_TEST( URLify( "         ", 0 ) != "%20%20%20" );

	/* short string */
	BOOST_TEST( URLify( "p q  ", 3 ) == "p%20q" );

	/* no spaces between characters or words, proper length */
	BOOST_TEST( URLify( "pq   ", 2 ) != "pq%20" );

	/* average length words, one space between */
	BOOST_TEST( URLify( "Hello, World!  ", 13 ) == "Hello,%20World!" );

	/* more than 2 words */
	BOOST_TEST( URLify( "Mr John Smith    ", 13 ) == "Mr%20John%20Smith" );

	/* many spaces and characters */
	BOOST_TEST( URLify( 
		"a b c d e f g h i j k l m n o p q r s t u v w x y z                                                  ", 51 ) 
		== "a%20b%20c%20d%20e%20f%20g%20h%20i%20j%20k%20l%20m%20n%20o%20p%20q%20r%20s%20t%20u%20v%20w%20x%20y%20z" );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_3__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_4__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_4 ) {
	/* empty string */
	BOOST_TEST( palindrome_permutation( "" ) );

	/* one-character string */
	BOOST_TEST( palindrome_permutation( "a" ) );

	/* palindrome with space */
	BOOST_TEST( palindrome_permutation( "taco cat" ) );

	/* palindrome with space and upper-case */
	BOOST_TEST( palindrome_permutation( "Taco cat" ) );

	/* every other character is upper-case */
	BOOST_TEST( palindrome_permutation( "tAcO cAt" ) );

	/* test words with one number */
	BOOST_TEST( palindrome_permutation( "test1test" ) );

	/* test only odd number of digits */
	BOOST_TEST( palindrome_permutation( "121" ) );

	/* test only even number of digits */
	BOOST_TEST( palindrome_permutation( "1221" ) );

	BOOST_TEST( palindrome_permutation( "aba" ) );

	BOOST_TEST( palindrome_permutation( "abba" ) );

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_4__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_5__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_5 ) {
	/* empty string */
	BOOST_TEST( one_away( "", "" ) );

	/* 2 edits away */
	BOOST_TEST( !one_away( "", "ab" ) );

	BOOST_TEST( one_away( "ab", "abc" ) );

	BOOST_TEST( !one_away( "ab", "abcd" ) );

	BOOST_TEST( one_away( "abc", "abd" ) );

	BOOST_TEST( one_away( "12", "123" ) );

	BOOST_TEST( one_away( "adc", "abc" ) );

	BOOST_TEST( one_away( "abc", "abc" ) );

	BOOST_TEST( one_away( "", " " ) );

	BOOST_TEST( one_away( "  ", " " ) );

	BOOST_TEST( one_away( "12345", "12346" ) );

	BOOST_TEST( !one_away( "abcdefghijklmnopqrstuvwxyz", "abcdefghijk1mn0pqrstuvwxyz" ) );

	BOOST_TEST( !one_away( "abcdefghijklmnopqrstuvwxyz", "abcdefghijk1mnopqrs7uvwxyz" ) );

	BOOST_TEST( one_away( "abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz " ) );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_5__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_6__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_6 ) {
	BOOST_TEST( string_compression( "aabcccccaaa" ) == "a2b1c5a3" );

	BOOST_TEST( string_compression( "" ) == "" );

	BOOST_TEST( string_compression( "aaAAbc" ) == "aaAAbc" );

	BOOST_TEST( string_compression( "a" ) == "a" );

	BOOST_TEST( string_compression( "aaa" ) == "a3" );

	BOOST_TEST( string_compression( "abcdefghijklmnopqrstuvwxyz" ) == "abcdefghijklmnopqrstuvwxyz" );

	BOOST_TEST( 
		string_compression( "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ) 
		== "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" 
	);

	BOOST_TEST( string_compression( "BBa" ) == "BBa" );

	BOOST_TEST( string_compression( "abbaaaabb" ) == "a1b2a4b2" );

	BOOST_TEST( string_compression( "test" ) == "test" );

	BOOST_TEST( string_compression( "TEST" ) == "TEST" );

	BOOST_TEST( string_compression( "tEsT" ) == "tEsT" );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_6__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_7__

BOOST_AUTO_TEST_CASE( strings_and_arrays_test_7 ) {

	Matrix emptyMat;
	BOOST_CHECK_THROW( rotate_matrix( emptyMat ), invalid_argument );

	Matrix mat1x1;
	Matrix resultMat1x1;
	generate_linear_matrices( mat1x1, resultMat1x1, 1 );
	BOOST_TEST( check_matrices( rotate_matrix( mat1x1 ), resultMat1x1 ) );

	Matrix mat2x2;
	Matrix resultMat2x2;
	generate_linear_matrices( mat2x2, resultMat2x2, 2 );
	BOOST_TEST( check_matrices( rotate_matrix( mat2x2 ), resultMat2x2 ) );

	Matrix mat4x4 = {
		{ 1, 2, 3, 4 },
		{ 2, 3, 2, 3 },
		{ 3, 2, 3, 2 },
		{ 4, 3, 2, 1 }
	};

	Matrix resultMat1x1 = {
		{ 4, 3, 2, 1 },
		{ 3, 2, 3, 2 },
		{ 2, 3, 2, 3 },
		{ 1, 2, 3, 4 }
	};

	BOOST_TEST( check_matrices( rotate_matrix( mat4x4 ), resultMat1x1 ) );

	Matrix identityMat = {
		{ 1, 0, 0, 0, 0 },
		{ 0, 1, 0, 0, 0 },
		{ 0, 0, 1, 0, 0 },
		{ 0, 0, 0, 1, 0 },
		{ 0, 0, 0, 0, 1 },
	};

	Matrix resultIdentityMat = {
		{ 0, 0, 0, 0, 1 },
		{ 0, 0, 0, 1, 0 },
		{ 0, 0, 1, 0, 0 },
		{ 0, 1, 0, 0, 0 },
		{ 1, 0, 0, 0, 0 },
	};

	BOOST_TEST( check_matrices( rotate_matrix( identityMat ), resultIdentityMat ) );

	Matrix mat100x100;
	Matrix resultMat100x100;
	generate_linear_matrices( mat100x100, resultMat100x100, 100 );
	BOOST_TEST( check_matrices( rotate_matrix( mat100x100 ), resultMat100x100 ) );

	Matrix mat1000x1000;
	Matrix resultMat1000x1000;
	generate_linear_matrices( mat1000x1000, resultMat1000x1000, 1000 );
	BOOST_TEST( check_matrices( rotate_matrix( mat1000x1000 ), resultMat1000x1000 ) );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_7__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_8__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_8 ) {

	Matrix emptyMat;
	BOOST_CHECK_THROW( zero_matrix( emptyMat ), invalid_argument );

	Matrix mat1x1 = {
		{ 0 }
	};

	Matrix resultMat1x1 = {
		{ 0 }
	};

	BOOST_TEST( check_matrices( zero_matrix( mat1x1 ), resultMat1x1 ) );

	mat1x1 = {
		{ 1 }
	};

	resultMat1x1 = {
		{ 1 }
	};

	BOOST_TEST( check_matrices( zero_matrix( mat1x1 ), resultMat1x1 ) );

	Matrix mat2x2 = {
		{ 0, 1 },
		{ 2, 3 }
	};

	Matrix resultMat2x2 = {
		{ 0, 0 },
		{ 0, 3 }
	};

	BOOST_TEST( check_matrices( zero_matrix( mat2x2 ), resultMat2x2 ) );

	mat2x2 = {
		{ 0, 1 },
		{ 2, 0 }
	};

	resultMat2x2 = {
		{ 0, 0 },
		{ 0, 0 }
	};

	BOOST_TEST( check_matrices( zero_matrix( mat2x2 ), resultMat2x2 ) );

	Matrix mat5x5 = {
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 0, 5, 5 },
		{ 5, 5, 5, 5, 5 },
		{ 5, 5, 5, 5, 5 },
	};

	Matrix resultMat5x5 = {
		{ 5, 5, 0, 5, 5 },
		{ 5, 5, 0, 5, 5 },
		{ 0, 0, 0, 0, 0 },
		{ 5, 5, 0, 5, 5 },
		{ 5, 5, 0, 5, 5 },
	};

	BOOST_TEST( check_matrices( zero_matrix( mat5x5 ), resultMat5x5 ) );

	mat5x5 = {
		{ 5, 5, 5, 5, 5 },
		{ 5, 0, 5, 0, 5 },
		{ 5, 5, 0, 5, 5 },
		{ 5, 0, 5, 0, 5 },
		{ 5, 5, 5, 5, 5 },
	};

	resultMat5x5 = {
		{ 5, 0, 0, 0, 5 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 5, 0, 0, 0, 5 },
	};

	BOOST_TEST( check_matrices( zero_matrix( mat5x5 ), resultMat5x5 ) );

	Matrix mat4x4 = {
		{ 0, 4, 4, 4 },
		{ 4, 4, 4, 4 },
		{ 4, 4, 4, 4 },
		{ 4, 4, 4, 0 },
	};

	Matrix resultMat4x4 = {
		{ 0, 0, 0, 0 },
		{ 0, 4, 4, 0 },
		{ 0, 4, 4, 0 },
		{ 0, 0, 0, 0 },
	};

	BOOST_TEST( check_matrices( zero_matrix( mat4x4 ), resultMat4x4 ) );

	Matrix mat6x6 = {
		{ 6, 6, 6, 6, 6, 6 },
		{ 6, 6, 6, 6, 6, 6 },
		{ 6, 6, 6, 6, 6, 6 },
		{ 6, 6, 6, 6, 6, 6 },
		{ 6, 0, 6, 6, 6, 6 },
		{ 6, 6, 6, 6, 6, 6 }
	};

	Matrix resultMat6x6 = {
		{ 6, 0, 6, 6, 6, 6 },
		{ 6, 0, 6, 6, 6, 6 },
		{ 6, 0, 6, 6, 6, 6 },
		{ 6, 0, 6, 6, 6, 6 },
		{ 0, 0, 0, 0, 0, 0 },
		{ 6, 0, 6, 6, 6, 6 }
	};

	BOOST_TEST( check_matrices( zero_matrix( mat6x6 ), resultMat6x6 ) );
}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_8__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_9__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_9 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_9__

BOOST_AUTO_TEST_SUITE_END() // end test Strings and Arrays suite

#endif // __STRINGS_AND_ARRAYS_SWITCH__
