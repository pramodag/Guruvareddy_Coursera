/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief headder file for containing function decelerations for printing stastics of an array
 *
 * 
 *
 * @author Pramod Guruvareddy
 * @date 15-02-2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints stastitics of the passed array
 *
 * Prints  minimum, maximum, mean, and median
 *
 * @param array char*
 * @param length int
 *
 * @return nothing
 */
void print_statistics(char *array, int length);

/**
 * @brief Prints array to stdout
 *
 * 
 *
 * @param array char*
 * @param length int
 * 
 * @return nothing
 */

void print_array(char *array, int length);

/**
 * @brief  returns median of an array
 *Returns median value of the passed array
 * 
 *
 * @param array char*
 * @param length int
 * 
 * @return returns median of the array
 */
char find_median(char *array, int length);

/**
 * @brief returns mean of the array
 *
 * 
 *
 * @param array char*
 * @param length int
 * 
 * @return mean of the passed array
 */
char find_mean(char *array,int length);
/**
 * @brief returns maximum element of that array
 *
 * @param array char* 
 * @param length int
 * 
 * @return maximum value
 */
char find_maximum(char *array, int length);
/**
 * @brief returns minimum element of that array
 *
 * 
 *
 * @param array char*
 * @param length int
 * 
 * @return minimum element of the array
 */
char find_minimum(char *array, int length);

/**
 * @brief Sorts the passed array in decending order
 *
 * 
 *
 * @param array char*
 * @param length int
 * 
 * @return void
 */
void sort_array(char *array, int length);

#endif /* __STATS_H__ */
