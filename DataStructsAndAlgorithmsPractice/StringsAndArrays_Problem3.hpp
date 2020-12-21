/*
 *	@file		StringsAndArrays_Problem3.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Contains function prototypes for the third problem of the Strings and Arrays category
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_3_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_3_HPP__

#include <string>

/*	
	Function Name:	URLify
	Purpose:		Replaces all spaces in a string with '%20'
	Accepts:		const string&
	Returns:		const string&
*/
std::string URLify( const std::string& str, const int& len );

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_3_HPP__
