#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int cont_pal(char frase[]){
	int c=0, i=0;
	
	while(frase[i]!='\0' && frase[i]!='\n') {
		if(((frase[i]=='3') || (frase[i]=='0')) && ((frase[i+1]== '.') || (frase[i+1]==',')) && (frase[i+2]=='1')){
			c++;
			i++;	
		}
		
		if(((frase[i]=='1') || (frase[i]=='5')) && (frase[i+1]== ' ') ){
			c++;
			i++;
		}
		
		if(((frase[i]=='E') ||(frase[i]=='e') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='R') ||(frase[i]=='r') ||(frase[i]=='Y') ||(frase[i]=='y') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='U') ||(frase[i]=='u') ||(frase[i]=='I') ||(frase[i]=='i') ||(frase[i]=='O') ||(frase[i]=='o')) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='A') ||(frase[i]=='a') ||(frase[i]=='S') ||(frase[i]=='s') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='G') ||(frase[i]=='g') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='K')|| (frase[i]=='k') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='L') ||(frase[i]=='l') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='X') ||(frase[i]=='x')) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		if(((frase[i]=='N') ||(frase[i]=='n')|| (frase[i]=='M') ||(frase[i]=='m') ) && ((frase[i+1]== ' ') || (frase[i+1]==',')|| (frase[i+1]=='.')|| (frase[i+1]==':')|| (frase[i+1]=='!')|| (frase[i+1]=='-')|| (frase[i+1]=='\0')|| (frase[i+1]=='\n'))) { 
			c++;
			i++;
		}
		else i++;
	}
return c;	
}

int main(){
	char frase[1000];
	int qnt;
	
	scanf("%[^\n]", frase);
	qnt=cont_pal(frase);
	printf("%i\n", qnt); 
	
}
