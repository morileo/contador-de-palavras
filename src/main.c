https://github.com/EAxxx/contador-de-palavras.git
/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct word { 
 char palavra[80]; 
 int ocorrencias; 
};

typedef struct word Word;

Word *w;
char aux[1000];


void remov_pont(char frase[]) {
	int i=0, j=0;
	
	while(frase[i]!='\0' && frase[i]!='\n') {
		if((frase[i]!='.') && (frase[i]!=',') && (frase[i]!=':') && (frase[i]!=';') && (frase[i]!='\"') && (frase[i]!='!') && (frase[i]!='?') && (frase[i]!='(') && (frase[i]!=')') && (frase[i]!='\'')){
			aux[j]= frase[i];
		j++;		
		}
	i++;	
	}
	aux[i] = '\0';
}


int cont_pal(){
	int c=1, i;
	
	for(i=0; aux[i]!='\n' && aux[i]!='\0'; i++){
		if(aux[i]==' ' && aux[i+1]!=' '){
			c=c+1;
		}
		else if (aux[i]=='-'){
			c=c+1;
		}
	}
	printf("%i \n", c);
	printf("%s \n", aux);
	return c;
}

int main(){
	char frase[1000];
	int qnt;
	
	scanf("%[^\n]", frase);
	remov_pont(frase);
	qnt=cont_pal()+1; 
	w=(Word*)malloc(qnt*sizeof(Word));	
	free(w); 
}
