/*
 *	@file		Utilities.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Utility functions which are used in test cases and some problems
 */

#ifndef __UTILITIES_HPP__
#define __UTILITIES_HPP__

#include <string>
#include <vector>

 /*
	 Function Name:	is_sub_string
	 Purpose:		Checks if one string is a substring of another
	 Accepts:		const string&, const string&
	 Returns:		bool
 */
inline bool is_sub_string( const std::string& str1, const std::string& str2 ) {
	return (str1.find( str2 ) != std::string::npos ? true : false);
}

/*
	Function Name:	check_matrices
	Purpose:		Checks if two matrices are equal
	Accepts:		vector<vector<int>>&, vector<vector<int>>&
	Returns:		bool
*/
inline bool check_matrices( std::vector<std::vector<int>>& mat1, std::vector<std::vector<int>>& mat2 ) {
	if (mat1.size() != mat2.size())
		return false;

	if (mat1[0].size() != mat2[0].size())
		return false;

	for (int row = 0; row < mat1.size(); ++row)
		for (int col = 0; col < mat1.size(); ++col)
			if (mat1[row][col] != mat2[row][col])
				return false;
	return true;
}

/*
	Function Name:	generate_linear_matrices
	Purpose:		Generates a linear matrix of size NxN, as well as its 90-degree rotated counterpart
	Accepts:		vector<vector<int>>&, vector<vector<int>>&
	Returns:		bool
*/
inline void generate_linear_matrices( std::vector<std::vector<int>>& mat1, std::vector<std::vector<int>>& mat2, int n ) {
	int value = 0;
	for (int row = 0; row < n; ++row) {
		// push back empty vector of size n
		std::vector<int> v( n );
		mat1.push_back( v );
		for (int col = 0; col < n; ++col) {
			mat1[row][col] = value++;
		}
	}

	// generate a rotated version of mat1 by 90 degrees
	for (int row = 0; row < n; ++row) {
		value = mat1[mat1.size() - 1][0] + row;
		// push back empty vector of size n
		std::vector<int> v( n );
		mat2.push_back( v );
		for (int col = 0; col < n; ++col) {
			mat2[row][col] = value;
			value -= n;
		}
	}
}

#endif // !__UTILITIES_HPP__