/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/


#include<iostream>
using namespace std;

//Main Function begins for execution
int main (void)
{

   //decalring varibales
	 int no;
   long fac;

   //Enter the number
   cout<<"Enter a Number : ";
   cin>>no;
   fac = 1;

   //using for loop
   for (int r=no; r >= 1; r--) 
	 {
   fac = fac*r;
   }
   
   //display the factorial value
   cout<<"Factorial of "<<no<<" is :"<<fac<<endl;

   //return type value
   return 0;
}