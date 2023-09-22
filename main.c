#include <stdio.h>
#include <stdlib.h>
//nome idade endereso
struct Endereco{
       char rua[255];
       int numero;
};


struct usuario{
       char nome[255];
       int idade;
       struct Endereco endereco;       
};
int main(int argc, char *argv[])
{
    struct usuario u[2];
    int i;
    for(i=0;i<2;i++){
    printf("entre com o nome:");
    gets(u[i].nome);
    printf("entre com a idade:");
    scanf("%d",&u[i].idade);
    fflush(stdin);
    printf("entre com o nome da rua:");
    gets(u[i].endereco.rua);
    printf("entre com o numero da casa:");
    scanf("%d",&u[i].endereco.numero);
    fflush(stdin);
  }
  system("cls");
  for(i=0;i<2;i++){
  printf("\n|-------------------------------------------------------|");
  printf("\nnome: %s",u[i].nome);
  printf("\nidade: %d",u[i].idade);
  printf("\nnome da rua: %s",u[i].endereco.numero);
  printf("\nnumero da casa: %d",u[i].endereco.numero);
  printf("|-------------------------------------------------------|");
  }
  
  system("PAUSE");	
  return 0;
}
