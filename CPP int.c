#include<stdio.h>
#include<limits.h>
void main()
{
  printf("Short Int:\nsigned:%hd\n to %hd\n",SHRT_MIN,SHRT_MAX);
  printf("Short Int:\nunsigned:%d to %hu\n",0,USHRT_MAX);
  printf("Int:\nsigned:%d\n to %d\n",INT_MIN,INT_MAX);
  printf("Int:\nunsigned:%d to %u\n",0,UINT_MAX);
  printf("Long Int:\nsigned:%ld\n to%ld\n",LONG_MIN,LONG_MAX);
  printf("Long Int:\nunsigned:%d to%lu\n",0,ULONG_MAX);
  printf("Long Long Int:nsigned:%lld\n to lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
  printf("Long Long Int:nunsigned:%d to %llu\n",0,ULONG_LONG_MAX);
}

