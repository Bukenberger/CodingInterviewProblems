/*
 *	@file		Utilities.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Utility functions which can be used in some problems
 */

#ifndef __UTILITIES_HPP__
#define __UTILITIES_HPP__

#include <string>

/*
	Function Name:	is_sub_string
	Purpose:		Checks if one string is a substring of another
	Accepts:		const string&, const string&
	Returns:		bool
*/
bool is_sub_string( const std::string& str1, const std::string& str2 ) {
	return (str1.find( str2 ) != std::string::npos ? true : false);
}

#endif // !__UTILITIES_HPP__