#include <stdio.h>

/* 
Name: 
*/

/* PROJECT 2 */

/* In this assignment you will examine a program consisting of a number of functions - labelled ques_badger.c to ques_shrew.c -- each of which tests your knowledge of bitwise C operations. Your goal is to determine what each function does and if there
is a simpler way to implement the function. There are two parts to the requirements.  */

/* Assume 32 bit integers */


/*
 Collaboration: You can discuss the project with your instruction team. You CANNOT discuss
 the project with any of your classmates and you cannot 
 refer to online sources to get help; you can refer to the C syntax documentations. 
 */
 
 
/* EXAMPLE
 this function is similar to examples in the inclass exercises */
/*  function ques0 returns 1 if x=y and returns 0 if x is not equal to y */
/* the function ans0 does the same in two C statements */

int ques0(int x, int y){
    int temp, temp1, temp2;
    temp = ~y;
    temp1 = temp +1;
    temp2 = temp1 + x;
    return !(temp2);
}
/* A sample answer for PART A: The function ques0 returns 1 if x=y else returns 0, i.e.,
/* it checks if x=y. By definition of 2's complement representation, temp1 = -y. temp2 is
/* therefore temp2= x-y; If x=y then temp2=0 and !(0)=1 and hence the function returns 1 if
/* x=y.
/* Answer to PART B: */
int ans0(int x, int y){
    int z=0;
    if (x==y)  z= 1;
    else z= 0;

    return z;
}

/* QUESTIONS */

int ques_highland_cow(int x) {
  int m8 = 0x55;
  int m16 = m8 | m8 << 8;
  int m32 = m16 | m16 <<16;
  int z  = x | m32;
  return !(~z);
}

int ques_iguana(int x) {
  int m8 = 0x55;
  int m16 = m8 | m8 << 8;
  int m32 = m16 | m16 <<16;
  int z = x & m32;
  return !!z;
}

int ques_ferret(int x) {
    return ((~x)>>31) & 0x1;
}

int ques_shrew(int x) {
    int mask = x>>31;
    int y= (x ^ mask);
    int z = (~mask + 1);

    return (y+z);
}


int ques_pony(int x){
    int y = !x;
    int z = x >> 31;
    z = z | y;

    return !z;
}

int ques_whale(int x) {
    int result = (x<<31);
    result = (result >> 31);

    return result;

}

int ques_chinchilla(int x) {

    return x & (~x+1);
}

int ques_porcupine(int x, int m, int n) {
    int a = ~m+1;
    int b = ~x +1;
    a = x + a;
    b = b + n;

    return !((a|b) >> 31);
}

int ques_porpoise(int x, int n) {
    /* assume x and n are not a negative integer  */

    int temp = (1 << n);
    int z = temp + ~0;

    return (z & x);
}

/* Start your answers, i.e., functions ans_highland_cow etc. below this line */

int ans_highland_cow(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}
int ans_iguana(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_ferret(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_shrew(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_pony(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_whale(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_chinchilla(int x) {
  int i; 
  /* Fill in your code here */
  return i;
}

int ans_porcupine(int x, int m, int n) {
int i; 
  /* Fill in your code here */
  return i;
}

int ans_porpoise(int x, int n) {
int i; 
  /* Fill in your code here */
  return i;
}
