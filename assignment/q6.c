#include <stdio.h>
#include <math.h>

int main(){
  float fx, f_x, x, x_old=1;
  int counter=1;
  while (1) {
    fx=pow(x_old, 3)-17;// function for f(x)
    f_x=3*pow(x_old, 2);// function for f'(x)
    x=x_old-fx/f_x;
    printf("%d.\t x = %f, y=%f\n", counter, x, fx);
    if (((x-x_old)<0.0001 && (x-x_old)>-0.0001) || counter==100) {
      printf("x = %f\nnumber of iteration = %d", x, counter);
      break;
    }
    counter++;
    x_old=x;
  }
}
