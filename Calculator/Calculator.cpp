//Complete scientific calculator

#include <iostream>
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
	char sign;
	
	cout<<"Enter First number: ";
	cin>>num1;
	cout<<"Enter Second number: ";
	cin>>num2;
	cout<<"Calculate (+, -, *, /): ";
	cin>>sign;
	
	Calculate fNum(num1, num2, sign);
	fNum.calculated();
	
	
	
}
