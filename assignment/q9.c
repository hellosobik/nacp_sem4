#include <stdio.h>
int main(){
  float x, y, x1, y1, x2, y2, x3, y3;
  float arr[6];
  for (int i = 0;i<3;i++) {
    printf("enter x%d y%d: ", i+1, i+1);
    scanf("%f %f", &arr[i*2], &arr[i*2+1]);
  }
  x1=arr[0];
  y1=arr[1];
  x2=arr[2];
  y2=arr[3];
  x3=arr[4];
  y3=arr[5];
  x=(x1+x2+x3)/3;
  y=(y1+y2+y3)/3;
  printf("\nCG is x= %f, y=%f", x, y);
  return 0;
}
