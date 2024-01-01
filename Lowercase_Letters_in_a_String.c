#include<stdio.h>
int main()
{
	char s1[100];
	scanf("%[^
]s",s1);
	int alp=0,i;
	for(i=0;s1[i]!=NULL;i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			alp++;
		}
	}
	printf("%d
",alp);
}