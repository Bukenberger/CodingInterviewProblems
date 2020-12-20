/*
 *	@file		main.cpp
 *  @date		2020-12-19
 *	@author		Teran Bukenberger
 *
 *  @brief		Uses Boost Unit Testing to test the implementations of algorithms.
 * 
 *				This file does not contain a main() function. Instead, the main() function within the Boost
 *				library is used.
 * 
 *				All test suites are maintained within their own files, with the naming convention *_Test_Module.cpp
 * 
 *				Problem sets taken from the book "CRACKING the CODING INTERVIEW" by Gayle Laakmann McDowell.
 *				Website: https://www.crackingthecodinginterview.com/
 */

#define BOOST_TEST_MODULE "C++ Unit Tests"
#include <boost/test/included/unit_test.hpp> // Boost Unit Testing library. This include should only be in main.cpp