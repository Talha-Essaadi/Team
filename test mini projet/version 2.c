// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
int x = 8 ;

while ( x <= 7 || x >= 7 ) {
    printf("----- Système de Gestion de Stock de Librairie -----\n");
    printf("1. Ajouter un livre au stock : \n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre à jour la quantité d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n");
    printf("7. Quitter\n");
    
    
    
    printf("Choisissez une option : ");
    scanf("%d", &x);
   switch (x) {
        /*Entrez le titre du livre: TALHA
Entrez l'auteur du livre: SARA
Entrez le prix du livre: 999.56
Entrez la quantité de livres en stock: 2
Livre ajouté avec succès !*/
       case 1 :
       printf("Entrez le titre du livre:\n");
       printf("Entrez l'auteur du livre:\n");
       printf("Entrez le prix du livre:\n");
       printf("Entrez la quantité de livres en stock:\n");
       printf("Livre ajouté avec succès !\n");
       break ;
       case  2 :
       printf("number : 2\n");
       break ;
       case 3 :
       printf("number : 3\n");
       break ;
       case 4 :
       printf("number : 4\n");
       break ;
       case 5 :
       printf("number : 5\n");
       break ;
       case 6 :
       printf("number : 6\n");
       break ;
       case 7 :
        printf("Merci d'avoir utilisé le système de gestion de stock. \n") ;
       return 0;
       break ;
       
       default : 
       printf("le nombre est incorrecte \n") ;
       
   } 
   

}//////
    
printf("=== Session Ended. Please Run the code again === ") ; 
    
   return 0;
}