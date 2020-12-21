/*
 *	@file		StringsAndArrays_Problem3.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Write a method to replace all spaces in a string with '%20'. You may assume that
 *				that the string has sufficient space at the end to hold additional characters,
 *				and that you are given the 'true' length of the string.
 *
 *				EXAMPLE:
 *
 *				Input:	"Mr John Smith    ", 13
 *				Output:	"Mr%20John%20Smith"
 */

#include "StringsAndArrays_Problem3.hpp"

 /* Include any other headers you may wish to use */
#include <stdexcept>	// invalid_argument exception

std::string URLify( const std::string& str, const int& len ) {
	// no spaces to replace
	if (str.empty())
		return "";

	// string with spaces to replace
	std::string newStr = str;

	// size of the entire string, 0-indexed
	int index = str.size() - 1;
	// Start from the end of the 'real length' check for spaces
	// while moving to the start
	for (int i = len - 1; i >=0; --i) {
		// if we're at a space, replace the current index with '%20' and move the
		// index 3 elements to the left
		if (newStr[i] == ' ') {
			newStr[index] = '0';
			newStr[index - 1] = '2';
			newStr[index - 2] = '%';
			index -= 3;
		}
		else {
			// no space found, check next
			newStr[index] = newStr[i];
			--index;
		}
	}

	return newStr;
}