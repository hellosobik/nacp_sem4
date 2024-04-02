#include <stdio.h>

int main(){
  float x = 0, y, a=2, b=4;
  int counter=1;
  //y=x*x*x-9*x+1;

  while (1) {
    x=(a+b)/2;
    y=x*x*x-9*x+1;
    printf("%d.\tthe value of x = %f, y = %f, a = %f, b = %f\n", counter, x, y, a, b);
    if (y>0) {
      b=x;
    }else{
      a=x;
    }
    if (y<0.000001 && y>-0.000001) {
      printf("\nroot = %f and no. of iteration = %d\n", x, counter);
      break;
    }
    counter++;

  }

  return 0;
}
