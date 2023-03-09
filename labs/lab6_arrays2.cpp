#include <iostream>                                                 // Header file to take input with cin and give output with cout
using namespace std;                                                // It gives you names for objects and variables from the standard library

int a{0}, age{0}, counter{0};                                       // initialising the variables

int main(int argc, char const *argv[]) {                            // Main program where the code is to be written for execution
  cout<<"Type the number of inputs you want to put into the program."<<endl;
  cin >> a;                                                         /*Asking the user for values and assigning the values to the array*/
  int age_array[a];

  for (int i = 0; i < a; i++) {                                     // for loop to run a times
    cout << "Type the age number "<<i<<": ";
    cin >> age;
    if (age > 100 || age <= 0) {                                    // checking for unresonable age
      cout << "Type a resonable age." <<endl;
      i -= 1;
      continue;                                                     // continuing to start
    }
    age_array[i] = age;                                             // Assing an array element a value
  }

  /*counting the umber of people in age group 20-35*/
  for (int i = 0; i < a; i++) {
    if (age_array[i] >= 20 && age_array[i] <= 35) {
      counter++;
    }
  }
  cout << "Number of people in age group 20-35: " <<counter<<endl;  // The number of people in 20-35 age group
  return 0;
}
