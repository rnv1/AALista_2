/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rodri
 *
 * Created on 13 July 2017, 22:05
 */

// permutations of any string inputted by user //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define display(X) printf( "\n%s", X );
static int counter = 1 ;
/**
 * This function is used to remove the trailing new line which is normally present at the end of the string accepted from the user
 * using fgets( ). This function is very important since without this the newline character at the end of the input will be considered
 * while drawing out permutations of the string which we dont want.
 *
 * @author ~s.o.s~
 * @param input C style string from which the trailing newline has to be removed.
 */
void remove_newline( char* input )
{
    char* p = 0 ;
    if( p = strrchr( input, '\n' ) )
        *p = '\0' ;
}
/**
 * This function is used to swap the two characters in the string array under consideration.
 *
 * @author ~s.o.s~
 * @param a - character pointer pointing at the character to be swapped.
 * @param b - character pointer pointing at the character to be swapped with.
 */
void swapPlaces (char* a, char* b)
{
 	char temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * The algorithm used for permutations of the string is an adaptation of the "Countdown Quickperm algorithm"
 * by Mr. Phillip Paul Fuchs. The credit for this algo goes to him.
 *
 * @author ~s.o.s~
 * @param input which is the old C style string holding the string which has to be permuted
 */
void wordPermutation (const char* input)
{
    int string_length = strlen( input ) ;
	if ( string_length == 0)		// guard against no input
		return ;
    int* p = (int*) malloc( string_length + 1 ) ;
    // start of naked block meant for initializing array P
    {
        int j ;
        for( j = 0; j <= string_length; ++j )
            p[j] = j ;
    }
    // end of naked block
    char* tempBuffer = (char*) malloc( string_length + 1 ); // dont affect the original string, create temporary string.
	strcpy (tempBuffer, input);
    printf( "\n%s", tempBuffer ) ;
    /// core algorithm begins
	int i = 1, j = 0;
	while(i < string_length)
	{
	    p[i]--;
	    j = i % 2 * p[i];
	    swapPlaces( &tempBuffer[i], &tempBuffer[j] ) ;
	    counter++ ;
	    display(tempBuffer);
	    i = 1;
	    while (!p[i])
	    {
	        p[i] = i;
	        i++;
        }
   }
   /// core algorithm ends
   free( tempBuffer ) ;
   free( p ) ;
   printf( "\n\nThe number of permutations is %d\n\n", counter ) ;
}
int main ( )
{
    char buffer[BUFSIZ] = {'\0'} ;
	printf ("\nEnter the string whose permutation u want: ");
	fgets (buffer, BUFSIZ, stdin);
	remove_newline (buffer);
	wordPermutation (buffer);
	return 0;
}