#include<stdio.h>
//create by noyphouthid xayyabue
//hditcs25a
void main()
{
	int cash100 = 100, cash50 = 50, cash20 = 20 , cash10 = 10;
	int THB;
	int result1, result2, result3, result4;
	while(1)
	{
	printf("Enter your money:");
	scanf("%d",&THB);
	result1 = THB / cash100;
	printf("Cash 100THB 	= %d\n",result1);
	result1 = THB % cash100;
	result2 = result1 / cash50;
	printf("Cash 50THB 	= %d\n",result2);
	result1 = result1 % cash50;
	result2 = result1 / cash20;
	printf("Cash 20THB	= %d\n",result2);
	result1 = result1 % cash20;
	result3 = result1 / cash10;
	printf("Cash 10THB	= %d\n",result3);
	}
}
