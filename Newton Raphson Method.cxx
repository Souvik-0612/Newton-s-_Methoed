#include <iostream>
#include <iomanip>  
using namespace std;

// Functions prototype
float f(float x);
float d(float x);

int main(){
	float x0, x1;
	int n;
	cout << "Hello, you have entered into Newton Raphson methoed. This program was created by Souvik on 13/05/2022. \n" << endl;
	cout << "Enter an initial guess " ;
	cin >> x0;
	cout << "\n";
	cout << "Enter the number of iteration ";
	cin >> n;
	cout << "\n";
	for(int i = 1; i <= n; i += 1){
		x1 = x0 - (f(x0)/d(x0));
		if ( f(x1) != 0){
			x0 = x1;
		}
		cout << i <<")\tThe root is\t " << fixed << setprecision(4)<< x1 << endl;
	}
	return 0;
}

//Functions defination
float f(float x){
	return x*exp(x) - 1;
}
float d(float x){
	return (1+x)*exp(x);
}