#include <iostream>                                   // Header file to take input with cin and give output with cout
using namespace std;                                  // using std to use names for objects and variables from the standard library

long int array[10], a{0}, larger{0}, smaller{0};      // initialising variables to 0

int main(int argc, char const *argv[]) {              // The code goes here to be executed
  for(int counter = 0; counter<10; counter++)         // for loop for indexing into rows
  {
    cout << "Enter the integer: ";                    /*Taking inputs and adding them into the array*/
    cin >> a;
    array[counter] = a;
  }
  larger = array[0];                                  /*finding the largest number*/
  for (int i = 0; i < 10; i++) {                      // indexing over every element of the array

    if (array[i]>larger) {                            // Finding the largest number
      larger = array[i];
    }
  }
  smaller = array[0];
  for (int i = 0; i < 10; i++) {                      // indexing over every element of the array
    if (array[i]<smaller) {                           // Finding the smallest number
      smaller = array[i];
    }
  }
  cout <<""<<endl;
  cout<<"Maximum number: "<<larger<<endl;             // print the maximum and minimum number
  cout << "Minimum number: " <<smaller<<endl;

  return 0;                                           // return the main function 0 to tell it that everything is ok
}
