/*
 *	@file		StringsAndArrays_Problem7.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Contains function prototypes for the seventh problem of the Strings and Arrays category
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_7_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_7_HPP__

#include <vector>
using Matrix = std::vector<std::vector<int>>;

/*
	Function Name:	rotate_matrix
	Purpose:		Rotates an NxN matrix representing pixels in an image by 90 degrees
	Accepts:		vector<vector<int>>
	Returns:		vector<vector<int>>
*/
Matrix& rotate_matrix( Matrix& mat );


#endif // !__STRINGS_AND_ARRAYS_PROBLEM_7_HPP__
