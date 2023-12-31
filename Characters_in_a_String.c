#include<stdio.h>
int main()
{
    char s1[100];
	scanf("%[^
]s",s1);
	int alp=0,d=0,spl=0,i;
	for(i=0;s1[i]!=NULL;i++)
	{
		if(s1[i]>=97 || s1[i]<=122)
		{
			alp++;
		}
	}
	printf("%d",alp);
}