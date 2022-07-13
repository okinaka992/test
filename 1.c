#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //「&」より「==」の方が優先順位が高いから括弧を使って優先順位を逆にする
    printf("%d は偶数です\n", n);
  }
  return 0;
}
