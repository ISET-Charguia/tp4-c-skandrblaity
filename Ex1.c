#include <stdio.h>

int main()
{
	const int a=20;
	int tab[a];
	int i,n,S=0;
	printf("Saisie la taille du tableau");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&tab[i]);
		S=S+tab[i];
	}
	printf("La moyenne des entiers de tableau= %d",S/n);
	return 0;
}
