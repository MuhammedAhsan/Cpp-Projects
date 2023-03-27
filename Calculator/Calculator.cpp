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
	
	Calculate numb1(45), numb2(1), numb3;
	cout.setf(ios::right, ios::adjustfield);
	cout<<setw(30)<<numb3;
	cout<<endl;
//	cout<<setw(30)<<numb1 + numb2<<numb1;
	
	cout.setf(ios::left|ios::right, ios::adjustfield);
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(3)<<"e"<<setw(3)<<"|"<<setw(4)<<"e^x"<<setw(2)<<"|"<<setw(3)<<"PI"<<setw(3)<<"|"<<setw(3)<<"x!"<<setw(3)<<"|"<<setw(4)<<"MOD"<<setw(2)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(4)<<"SIN"<<setw(2)<<"|"<<setw(4)<<"COS"<<setw(2)<<"|"<<setw(4)<<"TAN"<<setw(2)<<"|"<<setw(4)<<"LOG"<<setw(2)<<"|"<<setw(3)<<"ln"<<setw(3)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(4)<<"SQRT"<<setw(2)<<"|"<<setw(4)<<"CUBE"<<setw(2)<<"|"<<setw(4)<<"POW"<<setw(2)<<"|"<<setw(3)<<"("<<setw(3)<<"|"<<setw(3)<<")"<<setw(3)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(3)<<"7"<<setw(3)<<"|"<<setw(3)<<"8"<<setw(3)<<"|"<<setw(3)<<"9"<<setw(3)<<"|"<<setw(3)<<"AC"<<setw(3)<<"|"<<setw(3)<<"%"<<setw(3)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(3)<<"4"<<setw(3)<<"|"<<setw(3)<<"5"<<setw(3)<<"|"<<setw(3)<<"6"<<setw(3)<<"|"<<setw(3)<<"x"<<setw(3)<<"|"<<setw(3)<<"/"<<setw(3)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(3)<<"1"<<setw(3)<<"|"<<setw(3)<<"2"<<setw(3)<<"|"<<setw(3)<<"3"<<setw(3)<<"|"<<setw(3)<<"+"<<setw(3)<<"|"<<setw(3)<<"-"<<setw(3)<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<setw(3)<<"0"<<setw(3)<<"|"<<setw(3)<<"."<<setw(3)<<"|"<<setw(3)<<"BACK"<<setw(2)<<"|"<<setw(6)<<"="<<setw(6)<<"|"<<endl;
	cout<<"-------------------------------"<<endl<<endl;
	
	cout<<"Enter Value: ";
	
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
