//Complete scientific calculator

//Basic Calculator (+ - * /)								Done
//Add tregnomatric signs (sin, cos, tan, etc)				
//write like a normal calculator (cin one after another)	


#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Calculator Class
class Calculate{
	private:
		int num1;
	public:
		Calculate(){num1 = 0;};
		Calculate(int firstNum){num1 = firstNum;};
		
		Calculate operator +(const Calculate & num);
		Calculate operator -(const Calculate & num);
		Calculate operator *(const Calculate & num);
		Calculate operator /(const Calculate & num);
		friend Calculate operator <<(ostream & os, const Calculate & num);
		friend Calculate operator >>(istream & is, const Calculate & num);
};

Calculate Calculate::operator +(const Calculate & num){
	Calculate t;
	t.num1 = num1 + num.num1;
	return t;
}
Calculate Calculate::operator -(const Calculate & num){
	Calculate t;
	t.num1 = num1 - num.num1;
	return t;
}
Calculate Calculate::operator *(const Calculate & num){
	Calculate t;
	t.num1 = num1 * num.num1;
	return t;
}
Calculate Calculate::operator /(const Calculate & num){
	Calculate t;
	t.num1 = num1 / num.num1;
	return t;
}
Calculate operator <<(ostream & os, const Calculate & num){
	os<<num.num1;
}

Calculate operator >>(istream & is, const Calculate & num){
	is>>num.num1;
}

// Display what you wrote to calculate
string display;

void ConcatinateDisplay(string num){
	string temp = num;
	display = display + " " + temp;
	cout<<display<<endl<<endl;
}
void ConcatinateDisplay(){
	cout<<display<<endl<<endl;
}

int main(){
	int num1, num2;
	char sign, flag = 'y';
	
	Calculate numb1(45), numb2(1);
	cout.setf(ios::right, ios::adjustfield);
	cout<<setw(30)<<numb1 + numb2;
	cout<<endl;
	cout<<setw(30)<<numb1 + numb2<<numb1;
	
	
//	while(flag == 'y' || flag == 'Y'){
//		cout<<"Enter First number: ";
//		cin>>num1;
//		cout<<"Enter Second number: ";
//		cin>>num2;
//		cout<<"Calculate (+, -, *, /): ";
//		cin>>sign;
//		cout<<endl;
//		
//		Calculate fNum(num1, num2, sign);
//		fNum.calculated();
//		cout<<endl<<endl;
//		
//		int innerFlag = 1;
//		while(innerFlag == 1){
//			cout<<"Do you want to Calculate more (Y/N): ";
//			cin>>flag;
//			if(flag == 'y' || flag == 'Y'){flag = 'y'; innerFlag = 0; system("CLS");}
//			else if(flag == 'n' || flag == 'N'){flag = 'n'; innerFlag = 0;}
//			else {cout<<"Invalid!"<<endl; flag = 'y'; innerFlag = 1;}
//		}
//	}
	
	
}
