#include<iostream>
using namespace std;
int main(){
	int num,rev,x;
	cout<<"enter a number:";
	cin>>num;
	cout<<"reversed number is:";
    while (num>0){
    rev=num%10;
	x=rev;
	num=num/10;	
	cout<<rev;
	}
}
