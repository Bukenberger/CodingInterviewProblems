/*
 *	@file		StringsAndArrays_Problem8.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Contains function prototypes for the eighth problem of the Strings and Arrays category
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_8_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_8_HPP__

#include <vector>
using Matrix = std::vector<std::vector<int>>;

/*
	Function Name:	zero_matrix
	Purpose:		If an element in a matrix is 0, all values in its row 
					and column are all set to 0
	Accepts:		vector<vector<int>>
	Returns:		vector<vector<int>>
*/
Matrix& zero_matrix( Matrix mat );

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_8_HPP__