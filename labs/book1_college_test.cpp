#include<iostream>
using namespace std;

int main() {
	int counter{1}, a{0}, counter1{0}, counter2{0};
	while(counter <= 10){
		cout<<"Type the grade of the student: ";
		cin>>a;
		if (a == 1) {
			counter++;
			counter1++;
		}
		else if (a == 2){
			counter++;
			counter2++;
		}
		else{
			cout<<"Try again.";
		}
	}
	if (counter1 >= 8){
		cout<<"Bonus to instructor.";
	}
	else{
		cout<<"The instructor should be changed.";
	}
}
