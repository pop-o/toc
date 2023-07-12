#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char keywords[32][10] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };
    
int main(){
	char input_str[50],state[2],q0[2]="q0",q1[2]="q1",q2[2]="q2";
	int i,len,a=0;
	printf("Enter a string:");
	scanf("%s",input_str);
	/*check for keyword*/
	for(i=0;i<32;i++){
		if(strcmp(keywords[i],input_str)==0){
		
		a=1;
		}
	}
	
	if(a==1)goto check;
	/*check for identifier*/
	len=strlen(input_str);
	i=0;
	while(i<=len){
		q0:
			if(i>=len)break;
		if((input_str[i]=='_') || (input_str[i]>='a'&&input_str[i]<='z') || (input_str[i]>='A' && input_str[i]<='Z')){
			strcpy(state,q1);
			i++;
			goto q1;
			}
		else{
			strcpy(state,q2);
			i++;
			goto q2;
		}
		q1:
			if(i>=len)break;
			if((input_str[i]=='_') || (input_str[i]>='a'&&input_str[i]<='z') || (input_str[i]>='A' && input_str[i]<='Z') || (input_str[i]>='0' && input_str[i]<='9')){
				strcpy(state,q1);
				i++;
				goto q1;
			}else{
				strcpy(state,q2);
				i++;
				goto q2;
			}
		q2:
			break;
			
		}
		if(strcmp(q1,state)==0){//q1 is final state in this DFA
			a=2;
		}
		else{
			a=3;
		}
		check:
		if(a==1){
			printf("It is a keyword.\n");
		}else if(a==2){
			printf("It is an identifier.\n");
		}else{
			printf("It is neither a keyword nor an identifier.\n");
		}
		return 0;		
	}
	

