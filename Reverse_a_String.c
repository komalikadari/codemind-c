#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^
]s",str);
	int i,len=0,temp;
	for(i=0;str[i]!=NULL;i++)
	{
		len=len+1;
	}
	i=0;
	int j=len-1;
	while(i<=j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}