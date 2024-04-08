#include <stdio.h>
#include <math.h>
int fact(int x){
  int f=1;
  for (int i = 1;i<=x;i++) {
    f=f*i;
  }
  return f;
}
float si(float x, int n){
  float sin_value=0;
  for (int i =1;i<=n;i++) {
    sin_value+=pow(-1, n)*pow(x, 2*n+1)/fact(2*n+1);
  }
  return sin_value;
}
float co(float x, int n){
  float cos_value=0;
  for (int i =1;i<=n;i++) {
    cos_value+=pow(-1, n)*pow(x, 2*n)/fact(2*n);
  }
  return cos_value;
}
int main(){
  float sinx, cosx, sinx_old=0, cosx_old=0, x;
  int n=1;
  printf("enter x: ");
  scanf("%f", &x);
  while (1) {
    sinx=si(x, n);
    printf("%d.\tsin = %f\n", n, sinx);
    if ((sinx-sinx_old<0.0001) && (sinx-sinx_old>-0.0001)) {
      printf("%f\n", sinx);
      break;
    }else {
      sinx_old=sinx;
      n++;
    }
  }
  n=1;
while (1) {
    cosx=co(x, n);
    if ((cosx-cosx_old<0.0001) && (cosx-cosx_old>-0.0001)) {
      printf("%f\n", cosx);
      break;
    }else {
      cosx_old=cosx;
      n++;
    }
  }
  return 0;
}
