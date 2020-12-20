/*
 *	@file		ProblemSets.cpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Central header file with all of the problem set includes.
 *				Each header is contained within its own guard, to reduce build times
 *				if not all problems are switched on.
 */

#ifndef __PROBLEM_SETS__
#define __PROBLEM_SETS__

#include "BoostTestCaseMacros.hpp"	// Contains switches for each problem category

/* String and Array Problems */

#ifdef __STRINGS_AND_ARRAYS_SWITCH__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_1__
#include "StringsAndArrays_Problem1.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_1__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_2__
#include "StringsAndArrays_Problem2.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_3__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_3__
#include "StringsAndArrays_Problem3.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_3__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_4__
#include "StringsAndArrays_Problem4.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_4__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_5__
#include "StringsAndArrays_Problem5.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_5__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_6__
#include "StringsAndArrays_Problem6.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_6__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_7__
#include "StringsAndArrays_Problem7.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_7__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_8__
#include "StringsAndArrays_Problem8.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_8__

#ifdef __STRINGS_AND_ARRAYS_PROBLEM_9__
#include "StringsAndArrays_Problem9.hpp"
#endif // __STRINGS_AND_ARRAYS_PROBLEM_9__

#endif // __STRINGS_AND_ARRAYS_SWITCH__

/* Linked List Problems */

/* Stack and Queue Problems */

/* Tree and Graph Problems */

/* Bit Manipulation Problems */

/* Math and Logic Problems */

/* Object-Oriented Design Problems */

/* Recursion and Dynamic Programming Problems */

/* Sorting and Searching Problems */

/* C and C++ Problems */

#endif // !__PROBLEM_SETS__