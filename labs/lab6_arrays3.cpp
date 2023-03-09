#include <iostream>                                             // Header file to take input with cin and output with cout
using namespace std;                                            // It gives you names for objects and variables from the standard library

long int array[3][4], sum{0}, a{0};                             // initialising the variables
int main(int argc, char const *argv[]) {
  for (int i = 0; i < 3; i++) {                                 // indexing into the row of the array
    for (int j = 0; j < 4; j++) {                               // indexing into the colomns of an array
      /*Taking inputs from user and assingning them to elements of array*/
      cout << "Type a value for row "<<i<<" column "<<j<<" ";
      cin >> a;
      array[i][j] = a;
    }
  }

  /*Finding the sum of all the elements*/
  for (int k = 0; k < 3; k++) {
    for (int l = 0; l < 4; l++) {
      sum += array[k][l];
    }
  }
  cout<< "\nSUM is " <<sum<<endl;                               // Print the sum
  return 0;                                                     // Return 0 to the function to say all is ok
}
