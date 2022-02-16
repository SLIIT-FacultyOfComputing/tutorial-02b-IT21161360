
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

#include<iostream>
using namespace std;

//main function begins for execution
int main (void)
{

  //decalaring variables
	float cm,inches;
 
  //Enter the centimeters
	cout<<"Enter a length in cm :"<<flush;
	cin>>cm;

  //calculates the inches
	inches=cm/2.54;
  
  //display the inches
	cout<<"The length is :"<<inches<<endl;

  //return type value
	return 0;
}