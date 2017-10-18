#include <stdio.h>

int main()
{
	const int a=20;
	int tab[a][a];
	int i,m,n,j,S=0;
	printf("Saisie le nombre des lignes");
	scanf("%d",&n);
	printf("Saisie le nombre des colonne");
	scanf("%d",&m);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
		printf("Saisie T[%d,%d]",i,j);
		scanf("%d",&tab[i][j]);
		S=S+tab[i][j];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
		    printf("\n %d",tab[i][j]);
		}
	}
	printf("\nLa moyenne des entiers de tableau= %d",S/(n*m));
	printf("\nLa somme des entiers de tableau= %d",S);
	return 0;
}
