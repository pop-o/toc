#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string state, input;
	int i,len,k;
	loop:
	cout<<"Enter your string with alphabets {a,b}: ";
	cin>>input;
	len=input.length();
	for(k=0;input[k]!='\0';k++){
		if(input[k]!='a'&&input[k]!='b'){
			cout<<"Invalid alphabet!! "<<endl;
			goto loop;
		}
	}

	while(i<=len){
		q0:
			if(i>=len)break;
		if(input[i]=='a'){
			state="q1";
			i++;
			goto q1;
			}
		else{
			state="q0";
			i++;
			goto q0;
		}
		q1:
			if(i>=len)break;
			if(input[i]=='a'){
				state="q1";
				i++;
				goto q0;
			}else{
				state="q2";
				i++;
				goto q2;
			}
		q2:
			if(i>=len)break;
			if(input[i]=='a'){
				state="q3";
				i++;
				goto q3;
			}else{
				state="q0";
				i++;
				goto q0;
			}
		}
		q4:
			if(i>=len)break;
			if(input[i]=='a' || input[i]=='b'){
				state="q3";
				i++;
				goto q3;
			}
		if(state=="q3"){//q3 is final state in this DFA
			cout<<"\nString accepted"<<endl;
		}
		else{
			cout<<"\nString rejected"<<endl;
		}
	
	return 0;
}
