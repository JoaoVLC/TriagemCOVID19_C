#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>  

char nome[30];
char cpf[30];
char sexo[20];
int idade;

struct element {
	 
	char prt [200];
	int ponto;	
};

struct element quest2 []= {
	
    {.prt = "Tem febre? ", .ponto = 5 },
    {.prt = "Tem dor de cabeça? ", .ponto = 1},
    {.prt = "Tem secreção nasal ou espirros? ", .ponto = 1},
    {.prt = "Tem dor/irritação na garganta? ", .ponto = 1},
    {.prt = "Tem tosse seca? ", .ponto = 3},
    {.prt = "Tem dificuldade respiratória? ", .ponto = 10},
    {.prt = "Tem dores no corpo? ", .ponto = 1},
    {.prt = "Tem diarréia?", .ponto = 1},
    {.prt = "Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? ", .ponto = 10},
    {.prt = "Esteve em locais com grande aglomeração? ", .ponto = 3},
    
      
};

void quest(){
	
	
	char resposta;
	int soma = 0;
	int i = 0;
	
		
	FILE *txt;
	txt = fopen("RegistroDoPaciente.txt","a");
	
	if(txt == NULL){
		printf("ERROOOO");
	}
	
	system("cls");
	
	
	printf("\n----------------------------Questionário de Sintomas-----------------------------\n");
    printf("\nDigite S para SIM e N para NÃO\n");
    printf("\n================================================================================\n");
    fprintf(txt,"\n-Sintomas do Paciente..\n");
    fprintf(txt,"\n");
    
    for( i = 0; i < 10; ++i){
    	
    	printf("%s", quest2[i].prt);
    	scanf("%c",&resposta);
    	fflush(stdin);
    	fprintf(txt,"%s: %c\n",quest2[i].prt,resposta);
    	
    	if (resposta == 'S' || resposta == 's'){
    		
    		soma = soma + quest2[i].ponto;
		}
		
	}
	
    fprintf(txt,"\n%d pontos acomulados..\n",soma);
    
	system("cls");
	printf("\n----------------------------------------------------------------------------------------------------\n");
	if (soma >=0 && soma < 10){
		printf("RISCO BAIXO. Encaminhe-se para a ala de Baixo Risco, por favor!...\n", soma);
		fprintf(txt,"\nRISCO BAIXO.\n");
	}
	if (soma >=10 && soma < 20){
		printf("RISCO MÉDIO. Encaminhe-se para a ala de Médio Risco, por favor!...\n", soma);
		fprintf(txt,"\nRISCO MÉDIO.\n");
	}
	if (soma >=20){
		printf("RISCO ALTO!!. Encaminhe-se urgentemente para a ala de Alto Risco, por favor!...\n", soma);
		fprintf(txt,"\nRISCO ALTO.\n");
	}
	
	fprintf(txt,"\n===========================================================\n");
	fclose(txt);
	
	soma = 0;
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	printf("\nPresione qualquer tecla para sair...");
	getchar();
	
}

void cadastroDopaciente(){
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *txt;
	txt = fopen("RegistroDoPaciente.txt","a");
	
	if(txt == NULL){
		printf("ERROOOO");
	}
	
	printf("\n-Nome:");
	scanf("%s",nome);
	fflush(stdin);
	
	printf("\n-CPF:");
	scanf("%s",cpf);
	fflush(stdin);
	
	printf("\n-Sexo:");
	scanf("%s",sexo);
	fflush(stdin);
	
	printf("\n-Idade:");
	scanf("%d",&idade);
	fflush(stdin);
	
	fprintf(txt,"\n--Cadastro do Paciente\n");
	fprintf(txt,"\n");
	fprintf(txt,"-Nome: %s\n",nome);
	fprintf(txt,"-CPF: %s\n",cpf);	
	fprintf(txt,"-Sexo: %s\n",sexo);
	fprintf(txt,"-Idade: %d\n",idade);
	fprintf(txt,"\n----------------------------------\n");
	fclose(txt);
	
	printf("\nCadastro concluido...\n");
	getchar();
	quest();
		
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("\n-----------------------------CADASTRO DO PACIENTE----------------------------------\n");
	printf("\nDigite 1 para cadastrar o paciente ou Digite 2 para sair.\n");
	printf("\n===================================================================================\n");
	scanf("%i",&escolha);
	fflush(stdin);
	
	
	switch(escolha) {
		
		case 2:
		    printf("\nFinalizando o serviço.Obrigado!.....");   
	        break;
		    
		case 1:
		    cadastroDopaciente();  
		    break;
		
		default:
		    break;
		    
	}		
	return 0;
}
