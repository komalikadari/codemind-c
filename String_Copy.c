#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];//declaration
	scanf("%[^
]s",s1);//reading
	int i,len=0;
	for(i=0;s1[i]!=NULL;i++)
	{
		s2[i]=s1[i];
	}
	s2[100]=NULL;
	printf("%s",s2);		
}