#include <iostream>                                             // Header file is used to take input with cin and give output with cout
using namespace std;                                            // It gives you names for objects and variables from the standard library

int a{0};                                                       // initialising variable
int main(int argc, char const *argv[]) {                        // The main function in which the code is written
  while(true)
  {
    cout<<"type a number(type a negative number to quit): ";    // Asking the user to type a number and assigning it a value
    cin >> a;
    if (a < 0)break;                                            // If it is a negative number then break the loop
  }
  return 0;                                                     // Returns the main function 0 to tell that every thing is ok
}
