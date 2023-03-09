#include<iostream>                              // Header file is used to take input with cin and give output with cout
using namespace std;                            // It gives you names for objects and variables from the standard library

int main()                                      // main function in which everything should be written
{                                               // start bracket
    /* initialise variables to zero*/
    float first_score, second_score, third_score, average = 0;

    cout<<"enter first test score: ";           // displayes statement for first input
    cin>>first_score;                           // inputs first score

    cout<<"enter second test score: ";          // displayes statement for second input
    cin>>second_score;                          // inputs second score

    cout<<"enter third test score: ";           // displayes statement for third input
    cin>>third_score;                           // inputs third score

    average = (first_score + second_score + third_score)/3;     // does the calculation for finding the average
    cout<<"The average of the three scores is "<<average;       // display the average

    return 0;                                                   // return main function
}                                               // end bracket

/*
A) x += 6                                       // adds 6 to x
B) amount -= 4                                  // subtract 4 from amount
C) y *= 4                                       // multiply y by 4
D) total /= 27                                  // divide total by 27
E) x %= 7                                       // store in x the remainder of x divided by 7
F) x += y * 5                                   // add y * 5 to x
G) total -= discount * 4                        // subtract discount times 4 from total
H) increase *= salesRep * 5                     // multiply increase by salesRep times 5
I) profits /= share - 1000                      // divide profit by shares minus 1000
*/