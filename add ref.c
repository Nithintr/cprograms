#include<stdio.h>
int compute(int *a);
int compute(int *a)
{
int ans;
ans=*a+1;
return ans;
}
void print(int ans)
{
printf("%d\n",ans);
}
int main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);
int b=compute(&n);
printf(b);
}

