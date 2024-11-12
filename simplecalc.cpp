#include<iostream>
using namespace std;

void add(double a, double b) {
	cout<<"Result: "<<a+b<<endl;
}
void subtract(double a, double b) {
	cout<<"Result: "<<a-b<<endl;
}
void multiply(double a, double b) {
	cout<<"Result: "<<a*b<<endl;
}
void divide(double a, double b) {
	if(b!=0) 
	 cout<<"Result: "<<a/b<<endl;
	else
	 cout<<"Error: Division by zero"<< endl;
}
int main() {
 char op;
 double x, y;
 
 cout<<"-----------------Simple Calculator------------------"<<endl;
 cout<<"Enter operation (+,-,*,/): ";
 cin >> op;
 cout<<"Enter two numbers :"<<endl; 
 cin >> x >> y;

 switch(op) {
	case '+':
		add(x,y);
		break;
	case '-':
		subtract(x,y);
		break;
	case '*':
		multiply(x,y);
		break;
	case '/':
		divide(x,y);
		break;
	default:
		cout<< "Invalid Operation!"<<endl;
		break;
}

 return 0;
}