/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rodri
 *
 * Created on 13 July 2017, 21:59
 */

#include <stdio.h>

int fib(int n){
int fibminus2=0;
int fibminus1=1;
int fib=0;
int i;
 
if (n==0 || n==1)
    return n;
for(i=2;i<=n;i++){
fib=fibminus1+fibminus2;
fibminus2=fibminus1;
fibminus1=fib;
}
 
return fib;
}
 
int main()
{

    int result;
    int number;

     
    printf("Enter and integer: ");
        scanf("%d", &number);
    result = fib(number);

    printf("fib(%d)=(%d)", number, result);
    return 0;
}


