#include <stdio.h>
#include <stdlib.h>

int main(){
    int voto, confirmavoto;
  
    printf("Para votar no candidato Paulo digite 5. ");
    printf("\nPara votar na candidata Renata digite 7. ");
    printf("\nDigite o numero do candidato: ");
    scanf("%d", &voto);

    
    switch (voto)
    {
    case 5:
      printf("Voce confirma seu voto no candidato Paulo? Digite 1 Para sim ou Digite 2 para nao.\n");
      scanf("%d", &confirmavoto);
      if (confirmavoto==1)
      {
        printf("Voce votou no candidato Paulo");
      }
     else if (confirmavoto==2)
     {
        printf("Refaça seu voto"); 
     }
     
        break;

    case 7:
      printf("Voce confirma seu voto no candidata Roberta? Digite 1 Para sim ou Digite 2 para nao.\n");
      scanf("%d", &confirmavoto);
      if (confirmavoto==1)
      {
        printf("Voce votou na candidata Roberta");
      }
     else if (confirmavoto==2)
     {
        printf("Refaça seu voto");
     }
     
        break;

    case 0:
    printf("Voce confima seu voto nulo? Digite 1 Para sim ou Digite 2 para nao.");
    scanf("%d", &confirmavoto);
      if (confirmavoto==1)
      {
        printf("Voce votou Nulo");
      }
     else if (confirmavoto==2)
     {
        printf("Refaça seu voto");
        
     }
     
        break;

    default:

        break;
    }

   
while (voto<0){
     printf ("Urna finalizada.");
    system("Pause");
}


return 0;

}