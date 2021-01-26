#include<iostream>
using namespace std;
int main(){
	int numOne,numTwo,opt,result,z,element,Felement=0;
	do{
		cout<<"Select an option:-"<<endl;
		cout<<" 1.Addition(+)"<<endl;
		cout<<" 2.Subtraction(-)"<<endl;
		cout<<" 3.Multiplication(*)"<<endl;
		cout<<" 4.Division(/)"<<endl;
		cout<<" 5.Modulus(%)"<<endl;
		cout<<" 6.Percentage(%)"<<endl;
		cout<<" 7.Average(x¯)"<<endl;
		cout<<" 8.-Exit-"<<endl<<endl;
		cin>>opt;
		if((opt>=1)&&(opt<=6))
		{
			cout<<"Enter two numbers:-"<<endl<<endl;
			cout<<"     Enter first number:";
			cin>>numOne;cout<<endl;
			cout<<"     Enter second number:";
			cin>>numTwo;cout<<endl;
		}
		switch(opt)
		{
			case 1:
				result=numOne+numTwo;
				cout<<"Addition="<<result<<endl;
				break;
			case 2:
				result=numOne-numTwo;
				cout<<"Subtraction="<<result<<endl;
				break;
			case 3:
				result=numOne*numTwo;
				cout<<"Multiplication="<<result<<endl;
				break;
			case 4:
				result=numOne/numTwo;
				cout<<"Division="<<result<<endl;
				break;
			case 5:
				result=numOne%numTwo;
				cout<<"Modulus="<<result<<endl;
				break;
			case 6:
				result=(numOne/numTwo)*100;
				cout<<"Modulus="<<result<<endl;
				break;
			case 7:
				cout<<endl<<"How many number you want average of?"<<endl;
				cin>>z;cout<<endl;
				cout<<"Enter numbers:";
				while(z>0)
				    {
					cin>>element;
				    Felement+=element;
				    result=element/z;
				    z--;
					}
					
				cout<<"Average="<<result<<endl;
				break;
			case 8:
				return 0;
			default:
				cout<<"Wrong choice!"<<endl;
				break;				
		}
	}
	while(opt!=8);
	cout<<endl;
	return 0;
}
