#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	struct book
	{
		float price;
		char name[100];
		int pages;
	};
	struct book b[2];
	for(i=0;i<2;i++)
	{
		printf("\n");
		printf("Enter price of book %d  ", i+1);
		scanf("%f", &b[i].price);
		printf("Enter name of book %d  ", i+1);
		scanf("%s", &b[i].name);
		printf("Enter pages of book %d  ", i+1);
		scanf("%d", &b[i].pages);
	}
		for(i=0;i<2;i++)
	{
		printf("\nCredentials of book %d\n", i+1);
		printf("\n%f\t%s\t%d\n", b[i].price, b[i].name, b[i].pages);
	}
	return 0;
}
