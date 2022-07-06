#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (int)(n & 1) == 0 ){ //「n & 1」のキャストをint型に変換しなければならない
    printf("%d は偶数です\n", n);
  }
  return 0;
}
