#include <stdio.h>
#include <math.h>

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
float si(float x, int n){
  float sin_value=0;
  for (int i =0;i<=n;i++) {
    sin_value+=pow(-1, i)*pow(x, 2*i+1)/fact(2*i+1);
    printf("%f\n", sin_value);
  }
  return sin_value;
}
float co(float x, int n){
  float cos_value=0;
  for (int i =0;i<=n;i++) {
    cos_value+=pow(-1, i)*pow(x, 2*i)/fact(2*i);

  }
  return cos_value;
}


int main(){
  // printf("%d\n", fact(5));
  // printf("%f\n", si(3.14, 5));
  int n;
  float x, sin_value=0;
  // scanf("%d", &n);
  printf("enter no. of terms and value: ");
  scanf("%d %f", &n, &x);
  for (int i = 0;i<=n;i++) {

    sin_value+=pow(-1, i)*pow(x, 2*i+1)/fact(2*i+1);
    printf("%d.\t nth_term =%f, sin_value=%f\n", i, pow(-1, i)*pow(x, 2*i+1)/fact(2*i+1), sin_value);
  }

  // float sin_value=pow(-1, i)*pow(3.14, 2*i+1)/fact(2*i+1);
  printf("%f\n", sin_value);
  return 0;

}
