/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main(void)
{
 int no;
 long fac;
 std::cout<<"Enter a Number : ";
 std::cin>>no;
 fac = 1;
 for (int r=no; r >= 1; r--) {
 fac = fac * r;
 }
 std::cout<<"Factorial of ";
 std::cout<<no;
 std::cout <<" is ";
 std::cout<<fac;
}