/*
 *	@file		StringsAndArrays_Test_Module.cpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Boost Test module for Strings and Arrays unit tests
 */

#include "ProblemSets.hpp"			// Contains all of the includes for each problem set
#include "BoostTestCaseMacros.hpp"	// Switch tests cases on/off

#include <boost/test/unit_test.hpp>	// Differs from "boost/test/included/unit_test.hpp" which is used in main.cpp

// All test cases for Strings and Arrays
#ifdef __STRINGS_AND_ARRAYS_SWITCH__
BOOST_AUTO_TEST_SUITE( strings_and_arrays_suite )

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_1__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_1 ) {

	/*	ASCII string

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

	/* empty string */
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
	BOOST_TEST( !check_permutation( "", "" ) );

	BOOST_TEST( check_permutation( "abc", "cba" ) );

	BOOST_TEST( !check_permutation( "abc", "cbad" ) );

	BOOST_TEST( check_permutation( "dabc", "cbad" ) );

	BOOST_TEST( check_permutation( "taco cat", "tac ocat" ) );

	BOOST_TEST( check_permutation( "school master", "the classroom" ) );

	BOOST_TEST( check_permutation( "a gentleman", "elegant man" ) );

	BOOST_TEST( check_permutation( "Dormitory", "Dirty room" ) );

	BOOST_TEST( !check_permutation( "Listen", "Silent" ) );

	BOOST_TEST( check_permutation( "The eyes", "They see" ) );

	BOOST_TEST( !check_permutation( "Conversation", "Voices rant on" ) );
}
#endif // __PROBLEM_2__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_3__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_3 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_3__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_4__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_4 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_4__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_5__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_5 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_5__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_6__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_6 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_6__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_7__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_7 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_7__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_8__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_8 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_8__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_9__
BOOST_AUTO_TEST_CASE( strings_and_arrays_test_9 ) {

}
#endif // __STRINGS_AND_ARRAYS_PROBLEM_9__

BOOST_AUTO_TEST_SUITE_END() // end test Strings and Arrays suite

#endif // __STRINGS_AND_ARRAYS_SWITCH__
