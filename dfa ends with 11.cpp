#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string state, input;
	int i,len,k;
	loop:
	cout<<"Enter your string with alphabets {0,1}: ";
	cin>>input;
	len=input.length();
	for(k=0;input[k]!='\0';k++){
		if(input[k]!='1'&&input[k]!='0'){
			cout<<"Invalid alphabet!! "<<endl;
			goto loop;
		}
	}

	while(i<=len){
		q0:
			if(i>=len)break;
		if(input[i]=='0'){
			state="q0";
			i++;
			goto q0;
			}
		else{
			state="q1";
			i++;
			goto q1;
		}
		q1:
			if(i>=len)break;
			if(input[i]=='0'){
				state="q0";
				i++;
				goto q0;
			}else{
				state="q2";
				i++;
				goto q2;
			}
		q2:
			if(i>=len)break;
			if(input[i]=='0'){
				state="q0";
				i++;
				goto q0;
			}else{
				state="q2";
				i++;
				goto q2;
			}
		}
		if(state=="q2"){//q2 is final state in this DFA
			cout<<"\nString accepted"<<endl;
		}
		else{
			cout<<"\nString rejected"<<endl;
		}
	
	return 0;
}
