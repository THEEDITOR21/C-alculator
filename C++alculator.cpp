#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
		system("color 1");
		cout<<"_____________________________________"<<endl;
		cout<<"|            Calculator             |"<<endl;
		cout<<"| Made by TheEditor and [REDACTED]  |"<<endl;
		cout<<"|   ENJOY (Or be put to sleep...)   |"<<endl;
		cout<<"-------------------------------------"<<endl;
		double num1;
		double num2;
		char op;
		system("color 1");
		while(true){
			system("color 1");
		cin >> num1;
		cin >> op;
		cin >> num2;
		if(op=='+') {
		cout << num1+num2 <<endl;
		};
		if(op=='-'){
		cout << num1-num2 <<endl;
		};
		if(op=='/'){
		cout << num1/num2 <<endl;
		};
		if(op=='*'){
		cout << num1*num2 <<endl;
	};
	}
}
