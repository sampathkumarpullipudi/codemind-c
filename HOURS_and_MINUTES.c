#include<stdio.h>
int main()
{
	int n,Minutes=0,Hour=0;
  scanf("%d",&n);
  Minutes=n%60;
  Hour=n/60;
  printf("%d Hour(s) %d Minute(s)",Hour,Minutes);
  return 0;
}