#include <iostream>				//headerfile to take input with cin and output with cout
#include <string>				//headerfile to use strings
using namespace std;			//to use names of objects and variables from standard library

float marks;					//initialising float variable
string grader(float);			//prototyping a function with string return type
int main()						//main function where all the code is to be written
{								//start bracket
	while (true){				//while loop to check for correct number
	cout<<"Enter your marks: ";				//printing input prompt
	cin>>marks;								//assigning variable a number
	if (marks >= 0 && marks <= 100){		//If statement for checking number between 0 and 100
	cout<<"Your grade is: "<<grader(marks);	//printing the grade by calling the grade function
	break;									//break if grade is correct
	}
	else{cout<<"Type marks between 0 and 100\n";continue;}							//else continue
	}
	return 0;								//returning the main function 0
}

string grader(float marks)					//writing the function
{
	if (marks >= 80){return "A\n";}			//if statement for A grade and returning it
	else if(marks < 80 && marks >= 60){return "B\n";}//else if statement for B grade
	else if(marks < 60 && marks >= 40){return "C\n";}//else if statement for C grade
	else{return "F\n";}							   //else for F
}
