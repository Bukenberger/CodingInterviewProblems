/*
 *	@file		StringsAndArrays_Problem7.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Given an image represented by an NxN matrix, where each pixel
 *				in the image is 4 bytes, write a method to rotate the image
 *				by 90 degrees.
 * 
 *				Extra: Can you do this in place?
 */

#ifndef __STRINGS_AND_ARRAYS_PROBLEM_7_HPP__
#define __STRINGS_AND_ARRAYS_PROBLEM_7_HPP__

 /* Comment/uncomment this to change the algorithm version */
//#define __IN_PLACE__

 /* Include any headers you wish to use */
//using namespace std;

/* Algorithm solution which does not rotate the matrix in place */
#ifndef __IN_PLACE__
/*
	Function Name:	rotate_matrix
	Purpose:		Rotates an NxN matrix representing pixels in an image by 90 degrees
	Accepts:		const int** (const int[][])
	Returns:		const int** (const int[][])

	Time complexity:	O(...)
	Space complexity:	O(...)
*/
const int** rotate_matrix( const int** mat ) {
	// NOTE: A pointer to a pointer (int**) is the same as a 2-D array (int[][])
	// TODO...

	return mat;
}
#endif // __IN_PLACE__

/* Algorithm solution which rotates the matrix in place */
#ifdef __IN_PLACE__
/*
	Function Name:	rotate_matrix
	Purpose:		Rotates an NxN matrix representing pixels in an image by 90 degrees
	Accepts:		int** (int[][])
	Returns:		int** (int[][])

	Time complexity:	O(...)
	Space complexity:	O(...)
*/
int** rotate_matrix( int** mat ) {
	// NOTE: A pointer to a pointer (int**) is the same as a 2-D array (int[][])
	// TODO...

	return mat;
}
#endif // __IN_PLACE__

#endif // !__STRINGS_AND_ARRAYS_PROBLEM_7_HPP__
