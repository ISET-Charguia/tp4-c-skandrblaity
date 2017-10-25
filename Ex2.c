#include <stdio.h>

int main()
{
	const int a=20;
	int T[a];
	int TP[a];
	int TN[a];
	int i,j,n,m=-1,p=-1;
	printf("Saisie la taille du tableau");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T[i]);
			}
		if (T[i]>=0)
	for (i=0;i<n;i++)
	{
		{
			p=p+1;
			TP[p]=T[i];

		}
		else
		{
			m=m+1;
			TN[m]=T[i];
		}
	}
	for (j=0;j<p;j++)
	{
		printf("\n",TP[j]);
	}
	for (j=0;j<m;j++)
	{
		printf("\n",TN[j]);
	}
	return 0;
}
