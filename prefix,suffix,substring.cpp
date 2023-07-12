#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int i,j,len;
	string input_str;
	cout<<"Enter a string:";
	cin>>input_str;
	len=input_str.length();
	/*Prefix of the string*/
	cout<<"Prefix of string:::"<<endl;
	for(j=len;j!=0;j--){
		for(i=0;i<j;i++){	
			cout<<input_str[i];
		}
		cout<<"\n";
	}
	/*Suffix of the string*/
	cout<<"Suffix of string:::"<<endl;;
	for(j=0;j!=len;j++){
		for(int m=0;m<j;m++)cout<<" ";//empty space in front of the sring
		for(i=j;i<len;i++){	
			cout<<input_str[i];
		}
		cout<<"\n";
	}
	/*Substring of string*/
	int x,y;
	do{
	cout<<"Enter the beginning and ending positions of the substring:";
	cin>>x>>y;
	}while(x>y || x<0 || y>len);
	cout<<"The subtring is: "<<endl;
	for(i=x-1;i<=y-1;i++){
		cout<<input_str[i];
	}
	return 0;
}
