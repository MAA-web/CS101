#include <iostream>
#include <math.h>
using namespace std;
int a{10} ,b{17}, row{40}, col{40}, h{15}, k{20};
double equation(double, double);
double equation_neg(double, double);

int main() {
    float arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
		double v = equation((double)i,(double)j);
		double v1 = equation_neg((double)i,(double)j);
		arr[i][j] = 0.0;
		//cout<<i<<" ";
		//cout<<(int)v<<" "<<v1<<endl;
		if(v == v){// && v <= a){
		    arr[i][(int)v] = v;
		}
		if(v1 == v1){
		    arr[i][(int)v1] = v1;
		}
		else {
		    //arr[i][(int)v] = 0.0;
		}
	}
	//std::cout<<std::endl;
    }
    cout<<endl;
    for(int i = 0; i < row ; i++){
    	for(int j = 0 ; j < col ; j++){
		if(arr[i][j] != 0){// && (int)arr[i][j] <= (a + h)){
	    	    cout<<(int)arr[i][j]<<" ";
		}
		else{cout<<" ";}
	}
	cout<<endl;
    }
    return 0;
}

double equation(double x, double y) {
   double result = 0.0;
   result = (b*sqrt(1 -(((((x-h)*(x-h))/(a*a)))))) + k;
   return result;
}
double equation_neg(double x , double y){
   double result1 = 0.0;
   result1 = (-1 * (b*sqrt(1 - ((x-h)*(x-h))/(a*a))))+k;
   return result1;
}
