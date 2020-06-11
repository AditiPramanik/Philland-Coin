#include<stdio.h>
#include<math.h>
int philalandCoin(int c)
{
	int i=0;
	while(1)
	{
		if(c<pow(2,i)) return i;
		i++;
	}
}
int main()
{
	int ntc;
	do{
		//printf("Enter the no of test cases:");
		scanf("%d",&ntc);
	}while(ntc>100);
	int a[ntc],i=0;
	while(i<ntc) scanf("%d",&a[i++]);
	i=0;
	while(i<ntc) printf("\n%d\n",philalandCoin(a[i++]));
}
