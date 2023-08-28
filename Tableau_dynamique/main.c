#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  int lignes, colonnes;
  printf("Combien de lignes ? ");
  scanf("%d", &lignes);
  printf("Combien de colonnes ? ");
  scanf("%d", &colonnes);


  int** tableau = malloc(lignes * sizeof(int*));
  for (int i = 0; i < lignes; i++) {
    tableau[i] = malloc(colonnes * sizeof(int));
  }


  for (int i = 0; i < lignes; i++) {
    for (int j = 0; j < colonnes; j++) {
      tableau[i][j] = rand() % 101;
    }
  }


  for (int i = 0; i < lignes; i++) {
    for (int j = 0; j < colonnes; j++) {
      printf("%d ", tableau[i][j]);
    }
    printf("\n");
  }


  for (int i = 0; i < lignes; i++) {
    free(tableau[i]);
  }
  free(tableau);

  return 0;
}
