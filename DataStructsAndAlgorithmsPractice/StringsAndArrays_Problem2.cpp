/*
 *	@file		StringsAndArrays_Problem2.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Given two strings, write a function to decide if one is a permutation of the other.
 */

#include "StringsAndArrays_Problem2.hpp"

 /* Include any other headers you may wish to use */
#include <map>

bool check_permutation( const std::string& str1, const std::string& str2 ) {
	if (str1 == str2)
		return true;

	if (str1.empty() || str2.empty())
		return false;

	if (str1.size() != str2.size())
		return false;

	std::map<char, int> m;
	// the strings are guaranteed to be the same length
	for (int i = 0; i < str1.size(); ++i) {
		m[str1[i]]++;
		m[str2[i]]++;
	}

	for (auto& p : m) {
		// If there is not an even number of occurrences, it is not a permutation
		if (p.second % 2 != 0)
			return false;
	}

	return true;
}