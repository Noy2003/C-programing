#include<stdio.h>
//create by noyphouthid xayyabue
//hditcs25a
void main()
{
	int cash100 = 100, cash50 = 50, cash10 = 10 , cash5 = 5, cash2 = 2, cash1 = 1;
	int usd;
	int result, result1, result2, result3, result4, result5;
	while(1)
	{
	printf("Enter your money:");
	scanf("%d",&usd);
	result = usd / cash100;
	printf("Cash 100$ 	= %d\n",result);
	result = usd % cash100;
	result1 = result / cash50;
	printf("Cash 50$ 	= %d\n",result1);
	result1 = usd % cash50;
	result2 = result1 / cash10;
	printf("Cash 10$ 	= %d\n",result2);
	result2 = usd % cash10;
	result3 = result2 / cash5;
	printf("Cash 5$		= %d\n",result3);
	result3 = usd % cash5;
	result4 = result3 / cash2;
	printf("Cash 2$		= %d\n",result4);
	result4 = usd % cash2;
	result5 = result4 / cash1;
	printf("Cash 1$		= %d\n",result5); 
	}
}
