/*
 *	@file		BoostTestCaseMacros.hpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Comment/Uncomment macros to switch specific tests on/off.
 */

#ifndef __BOOST_TEST_CASE_MACROS__	// Header guard. DO NOT REMOVE
#define __BOOST_TEST_CASE_MACROS__

/* Strings and Arrays Problem Switches */

#define __STRINGS_AND_ARRAYS_SWITCH__	// Switch for Strings and Arrays category

#ifdef __STRINGS_AND_ARRAYS_SWITCH__
/* Problem Switches */

#define __STRINGS_AND_ARRAYS_PROBLEM_1__	// On
#define __STRINGS_AND_ARRAYS_PROBLEM_2__	// On
//#define __STRINGS_AND_ARRAYS_PROBLEM_3__	// Off...
//#define __STRINGS_AND_ARRAYS_PROBLEM_4__
//#define __STRINGS_AND_ARRAYS_PROBLEM_5__
//#define __STRINGS_AND_ARRAYS_PROBLEM_6__
//#define __STRINGS_AND_ARRAYS_PROBLEM_7__
//#define __STRINGS_AND_ARRAYS_PROBLEM_8__
//#define __STRINGS_AND_ARRAYS_PROBLEM_9__

#endif // __STRINGS_AND_ARRAYS_SWITCH__

#endif // !__BOOST_TEST_CASE_MACROS__
