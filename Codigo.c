#include <stdio.h>

/* Funções chamadas aqui em cima para
não haver problema de ordem ao serem chamadas */

void mediasist();
void cadnotas();
void consulnotas();
void cadaluno();
void boletim();

// Variáveis aqui também pelo mesmo motivo

char aluno[50];
float notas[3], media, soma = 0;
int menu, j, matricula;

// Função do menu do sistema

void menusistema(){

	printf("----------------------------\n");
	printf("Sistema de cadastro de notas\n");
	printf(" \n");
  printf("1 - Cadastrar aluno\n");
	printf("2 - Cadastrar notas\n");
	printf("3 - Verificar notas\n");
	printf("4 - Verificar media\n");
	printf("5 - Consultar Boletim\n");
	printf("6 - Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &menu);
  printf(" \n");
		
}

// Função de execução de switchs
// Função que será chamada no main
/* Estruturas de repetição do-while
para encerrar apenas quando o usuário
desejar*/

void switches(){
	do {
		menusistema();
		
		switch(menu){
		
				case 1:
					cadaluno();
				break;
				
				case 2:
					cadnotas();
				break;
				
				case 3:
					consulnotas();
				break;

        case 4:
          mediasist();
        break;
                
        case 5:
          boletim();
        break;
				
        case 6:
          printf("Acesso encerrado");
        break;

				default:
					printf("Opcao invalin");
				break;
}
}
	while(menu != 6);
}		

// Função para entrada de notas

void cadnotas(){
	
	printf("Insira abaixo as notas\n");
	printf(" \n");
	printf("Nota 1: ");
	scanf("%f", &notas[0]);
	printf("Nota 2: ");
	scanf("%f", &notas[1]);
	printf("Nota 3: ");
	scanf("%f", &notas[2]);
	printf(" \n");
	printf("Cadastro realizado\n");
	printf(" \n");

}

// Função para consulta de notas cadastradas
// Uso do for

void consulnotas(){
	
	for(int i = 0; i < 3; i++){
		printf("Nota %d: %.1f\n", i + 1, notas[i]);
		
	}
}

// Função de média com estrutura de repetição for

void mediasist(){

    soma = 0;

	for(j = 0; j < 3; j++){
        soma += notas[j];
    }

    media = soma / 3;
    
    printf("A media eh: %.1f\n", media);
}

// Cadastro de aluno com nome e matrícula

void cadaluno(){

    printf("Para cadastrar o aluno, digite abaixo o nome e a matricula:\n");
    printf(" \n");
    printf("Nome: ");
    scanf("%s", aluno);
    printf("Matricula: ");
    scanf("%d", &matricula);
    printf(" \n");
    printf("Cadastro realizado\n");

}

// Função para exibição do boletim

void boletim(){
	
	printf("Aluno: %s\n", aluno);
	printf("Matricula: %d", matricula);
	consulnotas();
	mediasist();
	
}

int main() {
	
	switches();
	
return 0;
}
