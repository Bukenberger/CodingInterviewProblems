/*
 *	@file		StringsAndArrays_Problem6.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Implement a method to perform basic string compression using
 *				the counts of repeated characters. For example, the string 
 *				"aabcccccaaa" would become a2b1c5a3. If the 'compressed' string
 *				would not become smaller than the original string, your function
 *				should return the original string. You can assume the string has
 *				only uppercase (A-Z) and lowercase (a-z) letters.
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_6_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_6_HPP__

 /* Include any other headers you may wish to use */
#include <string>
using namespace std;

/*
	Function Name:	string_compression
	Purpose:		Performs basic string compression, returning a string in 
					the format "(char_1)[n_1](char_2)[n_2]...(char_n-1)(n-1)"
	Accepts:		const string&
	Returns:		const string&

	Time complexity:	O(...)
	Space complexity:	O(...)
*/
const string& string_compression( const string& str ) {

	// TODO...

	return str;
}

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_6_HPP__
