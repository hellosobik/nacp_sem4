#include <stdio.h>
int fact(int x){
  if (x==0) {
    return 1;
  }
  int f=1;
  for (int i = 1;i<=x;i++) {
    f=f*i;
  }
  return f;
}
float p(float x, float xo, float h ){
  float y = (x-xo)/h;
  return y;
}

float xo[2](int size, float x_items[size], float x){
  if (x<x_items[0]) {
    return x_items[0];
  }else if (x>x_items[-1]) {
    return x_items[-1];
  }else {
    for (int i = 0;i<size-2;i++) {
      if (x>x_items[i] && x<x_items[i+1]) {
        float mid=(x_items[i+1]-x_items[i])/2+x_items[i];
        if (x<mid) {
          return x_items[i];
        }else{
          return x_items[i+1];
        }
      }
    }
  }
}

float pn(float p, int n){
  if (n==0) {
    return 1;
  }
  float p_n=1;
  for (int i = 0;i<=n;i++) {
    p_n*=p-i-1
  }
  return p_n;
}

float tn(){
  float xo_num = xo(size, x_items[size], x);
  float p_num = p(x, xo, h);
  float y=0;
  for (int i = 0;i<size;i++) {
    float t1 = pn(p_num, i)/fact(i);
    y+=

  }
  

}

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
