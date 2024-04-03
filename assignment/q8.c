#include <stdio.h>
int main(){
  char chr;
  int h,w;
  printf("enter the character: ");
  scanf("%c", &chr);
  printf("\nenter the height and width: ");
  scanf("%d %d", &h, &w);
  for (int i = 0;i<h;i++) {
    if (i==0 || i==h-1) {
      for (int j = 0;j<w;j++) {
        printf("%c", chr);
      }
      printf("\n");

    }else {
      printf("%s", &chr);
      for (int k = 1;k<w-1;k++) {
        printf(" ");
      }
      printf("%s", &chr);
      printf("\n");
    }
  }

  return 0;
}
