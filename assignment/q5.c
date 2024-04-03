#include <stdio.h>
#include <math.h>

int main(){
  float fx, f_x, x, x_old=0;
  int counter=1;
  while (1) {
    fx=3*x_old-cos(x_old)-1;// function for f(x)
    f_x=3+sin(x_old);// function for f'(x)
    x=x_old-fx/f_x;
    printf("%d.\t x = %f\n", counter, x);
    if ((x-x_old)<0.0001 && (x-x_old)>-0.0001) {
      printf("x = %f\nnumber of iteration = %d", x, counter);
      break;
    }
    counter++;
    x_old=x;
  }
}
