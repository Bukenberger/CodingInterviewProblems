/*
 *	@file		StringsAndArrays_Problem6.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Contains function prototypes for the sixth problem of the Strings and Arrays category
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_6_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_6_HPP__

#include <string>

/*
	Function Name:	string_compression
	Purpose:		Performs basic string compression, returning a string in 
					the format "(char_1)[n_1](char_2)[n_2]...(char_n-1)(n-1)"
	Accepts:		const string&
	Returns:		const string&
*/
std::string string_compression( const std::string& str );

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_6_HPP__
