#include<stdio.h>
#include<conio.h>
int main(void) 
{
    int a[100],i,largest;
    for(i=0;i<100;i++)
    scanf("%d",&a[i]);
    for(i=0;i<100;i++)
    printf("%d\n",a[i]);
    largest=a[0];
    for(i=0;i<100;i++)
    if(a[i]>largest)
    largest=a[i];
    printf("%d is the largest number",largest);
	return 0;
}
