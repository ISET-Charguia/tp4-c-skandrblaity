#include <stdio.h>

int main()
{
	const int a=20;
	int T1[a];
	int T2[a];
	int T3[a];
	int i,j,k,n,m;
	printf("Saisie la taille du tableau 1");
	scanf("%d",&n);
	printf("Saisie la taille du tableau 2");
	scanf("%d",&m);
	for (i=0;i<n;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T1[i]);
	}
	for (i=0;i<m;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T2[i]);
	}
	for (i=0;i<n+m;i++)
	{
		for (k=0;k<n;k++)
		{
		   T3[i]=T1[i];
		}
		for (i=0;j<m;j++)
		{
		   if (T2[j]<T3[i])
		   {
			   T3[i+1]=T3[i];
			   T3[i]=T2[j];
		   }
		   else
		   {
			   T3[i]=T2[j];
		   }
		}
	}
	for (j=0;j<m+n;j++)
	{
		printf("\n",T3[j]);
	}
}
