/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rodri
 *
 * Created on 10 July 2017, 16:06
 */


#include <stdio.h>
#include <string.h>
 

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 

void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s \n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); 
       }
   }
}
 

int main()
{
    char str[] = "345";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
