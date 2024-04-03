#include <stdio.h>
#include <math.h>
float eqn(float num){
  float y_num;
  // y_num=num*exp(num)-cos(num);
  // y_num=pow(num,2)-num-2;
  y_num=pow(num, 6)-pow(num, 4)-pow(num, 3)-1;
  return y_num;
}
int main()
{
  float x, y1, y2, y, x1=1, x2=2;
  int counter=1;
  while(1){
    // y1=x1*exp(x1)-cos(x1);
    // y2=x2*exp(x2)-cos(x2);
    y1=eqn(x1);
    y2=eqn(x2);

    x=x1-y1*(x2-x1)/(y2-y1);//regula falsi formula
    // y=x*exp(x)-cos(x);
    y=eqn(x);
    if ((y*y1)<0) {
      x2=x;
    }else {
      x1=x;
    }
    printf("%d.\tx=%f, y=%f, x1=%f, x2=%f\n", counter,x,y,x1,x2);
    if (y<0.0001 && y>-0.0001) {
      printf("\nroot = %f \nno. of iteration= %d", x, counter);
      break;
    }
    counter++;
    // printf("%f\n", y);
    // break;

  }
  return 0;
}
