#include <stdio.h>

int main () {
  int i; // d�claration d'une variable sans initialisation
  printf("Entrez un entier au clavier : "); // affichage 
  scanf("%d",&i); // lecture de l'entr�e clavier
  printf("l'entier entr� vaut %d\n",i); // affichage
  return 0; // retour (toujours en fin de fonction)
}
