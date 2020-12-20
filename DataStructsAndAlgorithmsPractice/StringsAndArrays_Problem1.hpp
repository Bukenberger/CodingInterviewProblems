/*
 *	@file		StringsAndArrays_Problem1.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 * 
 *  @brief		Implement an algorithm to determine if a string has all unique characters.
 * 
 *				Extra: What if you cannot use additional data structures?
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_1_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_1_HPP__

/* Include any other headers you may wish to use */
#include <string>
using namespace std;

/* Comment this out to change the algorithm version */
#define __ADDITIONAL_STRUCTURE__

/* Algorithm solution using an additional data structure */
#ifdef __ADDITIONAL_STRUCTURE__
/*
	Function Name:	is_unique
	Purpose:		Checks if all characters in a string are unique
	Accepts:		const string&
	Returns:		string

	Time complexity:	O(n)
	Space complexity:	O(n)
*/
bool is_unique( const string& str ) {
	// An empty string can be considered unique
	if (str.empty())
		return true;

	// Exceeds number characters in the ASCII table, therefore 
	// the string is not a duplicate
	if (str.size() > 128)
		return false;

	// Holds boolean values for 128 ASCII character map
	bool char_set[128] = { false }; // All 128 values initialized to false

	for (string::const_iterator it = str.begin(); it != str.end(); ++it) {
		// Integer holding the current character's ASCII code
		int val = *it;
		// Check ASCII code against the character map
		if (char_set[val])	// If true, this value already exists in the map 
			return false;
		// Mark this ASCII character as found
		char_set[val] = true;
	}
	return true;
}

#endif // __ADDITIONAL_STRUCTURE__

/* Algorithm solution without using an additional data structure */
#ifndef __ADDITIONAL_STRUCTURE__
/*	
	Function Name:	is_unique
	Purpose:		Checks if all characters in a string are unique
	Accepts:		const string&
	Returns:		string

	Time complexity:	O(n^2)
	Space complexity:	O(1)
*/
bool is_unique( const string& str ) {
	// An empty string can be considered unique
	if (str.empty())
		return true;

	// Exceeds number characters in the ASCII table, therefore 
	// the string is not a duplicate
	if (str.size() > 128)
		return false;

	// Outer loop iterates through each character ones
	for (string::const_iterator it_i = str.begin(); it_i != str.end(); ++it_i) {
		// Inner loop starts at it_i + 1 and compares the remaining values
		for (string::const_iterator it_j = it_i + 1; it_j != str.end(); ++it_j) {
			if (*it_i == *it_j)
				return false;
		}
	}

	return true;
}
#endif // !__ADDITIONAL_STRUCTURE__

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_1_HPP__