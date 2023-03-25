//Complete scientific calculator

#include <iostream>
#include <stdlib.h>
using namespace std;

class Calculate{
	private:
		int num1;
		int num2;
		char sign;
	public:
		Calculate(){num1 = 0; num2 = 0, sign = ' ';};
		Calculate(int firstNum, int secondNum, char numSign){num1 = firstNum; num2 = secondNum, sign = numSign;};
		void calculated(){
			if(sign == '+'){cout<<"Answer: "<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 + num2;}
			else if(sign == '-'){cout<<"Answer: "<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 - num2;}
			else if(sign == '*' || sign == 'x'){cout<<"Answer: "<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 * num2;}
			else if(sign == '/'){cout<<"Answer: "<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 / num2;}
			else {cout<<"Invalid Sign";}
		}
};

int main(){
	int num1, num2;
	char sign, flag = 'y';
	
	while(flag == 'y' || flag == 'Y'){
		cout<<"Enter First number: ";
		cin>>num1;
		cout<<"Enter Second number: ";
		cin>>num2;
		cout<<"Calculate (+, -, *, /): ";
		cin>>sign;
		cout<<endl;
		
		Calculate fNum(num1, num2, sign);
		fNum.calculated();
		cout<<endl<<endl;
		
		int innerFlag = 1;
		while(innerFlag == 1){
			cout<<"Do you want to Calculate more (Y/N): ";
			cin>>flag;
			if(flag == 'y' || flag == 'Y'){flag = 'y'; innerFlag = 0; system("CLS");}
			else if(flag == 'n' || flag == 'N'){flag = 'n'; innerFlag = 0;}
			else {cout<<"Invalid!"<<endl; flag = 'y'; innerFlag = 1;}
		}
	}
	
	
}
