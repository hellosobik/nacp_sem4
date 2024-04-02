#include <stdio.h>
//program to find the root of a number
int main(){
  long long int num, num_iter=0;
  printf("enter the number : ");
  //scanf("%d", &num);
  if (scanf("%lld", &num) != 1){
    printf("invalid input\n");
    return 0;
  }

  //scanf("%d", &num);}
  

  long double fun, x=0, x_old, a, b;
  for (int i = 1;i<=num/2;i++) {
    if ((num - i*i) == 0) {
      a=b=x=i;
      break;

    }else if((num - i*i) < 0){
      a=i-1;
      b=i;
      break;
    }
  }

  while(a!=b){
    num_iter++;
    x_old=x;
    x=(a+b)/2;
    
    fun=num - x*x;
    printf("%lld.\tx = %Lf, a = %Lf, b = %Lf, fun = %Lf\n", num_iter, x, a, b, fun);

    if (fun>0) {
      a=x;
    }else {
      b=x;
    }
    if(((x_old-x)<0.0001) && ((x_old-x)>-0.0001)){
      break;
    }

  }
  printf("\nthe root of %lld = %Lf\n", num, x);
  printf("number of iteration = %lld\n", num_iter);
  return 0;

}
