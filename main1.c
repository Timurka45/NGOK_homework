#include <stdio.h>
#define SIZE 5
int main(void)
{
int m[SIZE]=  {0};
int sum;
  for(int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &m[i]);
  }
    for(int i = 0; i < SIZE; ++i)
  {
    printf("[%d]", m[i]);
  }
  printf("\n");
    for(int i = 4; i >= 0; --i)
  {
    printf("[%d]", m[i]);
  }
    printf("\n");
    for(int i = 0; i < SIZE; ++i)
  {
    if (i % 2 == 0) {
    printf("[%i]", m[i]);
    }
  }
  printf("\n");
    for(int i = 0; i < SIZE; ++i)
  {
    if (i % 2 > 0) {
    printf("[%i]", m[i]);
    }
  }
    for(int i = 0; i < SIZE; ++i)
  {
    sum += m[i];
  }
  printf("\nсумма = %d", sum);
  sum = 0;
  int r[SIZE]=  {0};
  printf("\n");
    for(int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &r[i]);
  }
  for(int i=0 , j= SIZE-1; i < SIZE/2;++i,--j) {
   sum = r[i];
   r[i]= r[j];
   r[j]=sum;
}
    for(int i = 0; i < SIZE; ++i)
  {
    printf("[%d]", r[i]);
  }
}

