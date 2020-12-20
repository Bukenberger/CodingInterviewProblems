/*
 *	@file		StringsAndArrays_Problem9.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Assume you have a function is_sub_string() which checks if one word
 *				is a substring of another. Given two strings, str1 and str2, write code
 *				to check if str2 is a rotation of str1 using only one call to is_sub_string().
 *				(i.e., "waterbottle" is a rotation of "erbottlewat").
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_9_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_9_HPP__

 /* Include any headers you wish to use */
#include <string>

#include "Utilities.hpp"	// Contains the is_sub_string() function
using namespace std;

bool is_sub_string( const string& str1, const string& str2 );

/*
	Function Name:	string_rotation
	Purpose:		Check is a string is a rotation of another
	Accepts:		const string&, const string&
	Returns:		bool

	Time complexity:	O(...)
	Space complexity:	O(...)
*/
bool string_rotation( const string& str1, const string& str2 ) {
	
	// TODO...

	return true;
}

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_9_HPP__