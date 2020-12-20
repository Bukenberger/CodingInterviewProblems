/*
 *	@file		StringsAndArrays_Problem2.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Given two strings, write a function to decide if one is a permutation of the other.
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_2_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_2_HPP__

#include <string>
using namespace std;

/*	
	Function Name:	check_permutation
	Purpose:		Checks if one string is a permutation of another
	Accepts:		const string&, const string&
	Returns:		bool

	Time complexity:	O(...)
	Space complexity:	O(...)
*/
bool check_permutation( const string& str1, const string& str2 ) {
	if (str1.empty() && !str2.empty())
		return false;

	if (!str1.empty() && str2.empty())
		return false;

	// TODO...

	return true;
}

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_2_HPP__