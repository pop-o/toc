#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
string keywords[32]={
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef"
    };
    
int main(){
	printf("HEllo");
	string input_str,state;
	int i,len,a=0;
	cout<<"Enter a string: ";
	cin>>input_str;
	/*check for keyword*/
	for(i=0;i<62;i++){
		if(keywords[i]==input_str){
		
		a=1;
		}
	}
	
	if(a==1)goto check;
	/*check for identifier*/
	len=input_str.length();
	i=0;
	while(i<=len){
		q0:
			if(i>=len)break;
		if((input_str[i]=='_') || (input_str[i]>='a'&&input_str[i]<='z') || (input_str[i]>='A' && input_str[i]<='Z')){
			state="q1";
			i++;
			goto q1;
			}
		else{
			state="q2";
			i++;
			goto q2;
		}
		q1:
			if(i>=len)break;
			if((input_str[i]=='_') || (input_str[i]>='a'&&input_str[i]<='z') || (input_str[i]>='A' && input_str[i]<='Z') || (input_str[i]>='0' && input_str[i]<='9')){
				state="q1";
				i++;
				goto q1;
			}else{
				state="q2";
				i++;
				goto q2;
			}
		q2:
			break;
			
		}
		if(state=="q1"){//q1 is final state in this DFA
			a=2;
		}
		else{
			a=3;
		}
		check:
		if(a==1){
			cout<<"It is a keyword.\n";
		}else if(a==2){
			cout<<"It is an identifier.\n";
		}else{
			cout<<"It is neither a keyword nor an identifier.\n";
		}
		return 0;		
	}
	

