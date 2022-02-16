/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;

//main function begins for execution
int main (void)
{

//declaring variables
 double salary, netSalary;
 int etype, otHrs, otRate;

 //Enter the employee type
 cout<<"Enter Employee Type : ";
 cin>>etype;

 //Enter the salary
 cout<<"Enter Salary : ";
 cin>>salary;

 //Enter the OThours
 cout<<"Enter OtHrs : ";
 cin>>otHrs;
 
 //Using switch case
 switch (etype)
{
 //case 1
 case 1 :
 otRate = 1000;
 break;

 //case 2
 case 2 :
 otRate = 1500;
 break;
 
 //default
 default :
 otRate = 1700;
 break;
 }

 //Calculates Netsalary
 netSalary = salary + otHrs* otRate;

 //Display The net Salary
 cout<<"Net Salary is: "<<netSalary<<endl;

//return type value
 return 0;
}
