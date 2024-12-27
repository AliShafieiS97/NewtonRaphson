#include <iostream>
#include <cmath>
using namespace std; 

double Func1(double x){
	
	return x-cos(x);	
}

double Func2(double x){
	
	return 1+sin(x);	
}


void Func3 (double Guess, double Tol, int Maxiter){
	
	double x1;
	x1 = Guess; 
	int i;
	i = 0;
	
	while (i<Maxiter){
		
		double fx; 
		fx = Func1(x1);
		double fpx;
		fpx= Func2(x1);
		
		if(fpx==0){
			cout<<"The derivative of function is equal to Zero!"<<endl<<"Error!";
			return;
		}
		
		double x2;
		x2 = x1 - (fx/fpx);
		
		double e;
		e = fabs(x2-x1);
		
		if (e<Tol){
			cout<<"Root is equal to: "<<x2;
			return;
		}
		
		x1 = x2; 
		i++;
	}
	
	cout<<"The root is not found!"<<endl<<"Error!";
	
}

int main (){
	double Tol, Guess; 
	int Maxiter; 
	
	cout <<"Enter Initial Guess: ";
	cin>>Guess;
	
	cout <<"Enter Tolerance: ";
	cin>>Tol;
	
	cout <<"Enter Maximum Iterations: ";
	cin>>Maxiter;
	
	Func3(Guess, Tol, Maxiter);
	return 0;
}



