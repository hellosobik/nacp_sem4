#include <stdio.h>
int main(){
  int size;
  printf("please enter the no. of pairs: ");
  scanf("%d", &size);
  float x_items[size], y_items[size], y_temp[size], y_com[size][size], table[2*size-1][size+1];
  for (int i = 0;i<size;i++) {
    for(int j = 0; j<size;j++){
      y_com[i][j]=0;
    }
  }
 for (int i = 0;i<2*size-1;i++) {
    for(int j = 0; j<size+1;j++){
      table[i][j]=0;
    }
  }
  for (int i = 0;i<size;i++) {
    printf("enter x%d, y%d: ", i+1, i+1);
    scanf("%f %f", &x_items[i], &y_items[i]);
  }
  for (int i = 0;i<size;i++) {
    y_com[0][i]=y_items[i];
  }
  int temp_size=size;
  for (int i = 1;i<size;i++) {
    for (int j = 0;j<temp_size-1;j++) {
      y_com[i][j]=y_com[i-1][j+1]-y_com[i-1][j];
    }
    temp_size--;
  }
  for (int i=0, j=0;i<=2*size-1;i+=2) {
    table[i][0]=x_items[j];
    table[i][1]=y_items[j];
    j++;
  }
  int counter = 0;
  for (int i = 1;i<size;i++) {
    for (int j = i;j<2*(size-1);j+=2) {
      table[j][i+1]=y_com[i][counter];
      counter++;
    }
    counter=0;
  }
  printf("\n\n");
  printf("x\ty\t");
  for (int i = 0;i<size-1;i++) {
    printf("D%dy\t", i+1);
  }
  printf("\n\n");
  for (int i = 0;i<2*size-1;i++) {
    for(int j = 0; j<size+1;j++){
      if (table[i][j]!=0) {
        printf("%.2f\t", table[i][j]);
      }else{
      printf("\t");
      }
      }
    printf("\n");
  }
  return 0;
}
