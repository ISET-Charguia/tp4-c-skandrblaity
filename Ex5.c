#include <stdio.h>

int main()
{
	const int a=20;
	int tab[a];
	int i,p,x,c,y,n=0,S;
	printf("Saisie la taille du tableau");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&tab[i]);
	}
		printf("choisissez un entier entre 1 et 4");
		scanf("%d",&c);
	switch (c)
	{
	case 1:
	{
		S=tab[0];
		for (i=1;i<n;i++)
		{
			if (tab[i]<S)
			{
				S=tab[i];
			}
		}
		printf("Le minimum est %d",S);
	};break;

	case 2:
	{
		printf("Saisie un entier x");
		scanf("%d",&x);
		printf("Saisie un entier y");
		scanf("%d",&y);
		for (i=1;i<n;i++)
		{
			if (tab[i]==x)
			{
				tab[i]=y;
			}
		}
	};break;


	case 3:
	{
		printf("Saisie un entier x");
		scanf("%d",&x);
		printf("Saisie une position p");
		scanf("%d",&p);
		tab[p]=x;
	};break;


	case 4:
	{
		printf("Saisie un entier x");
		scanf("%d",&x);
		for (i=1;i<n;i++)
		{
			if (tab[i]==x)
			{
				tab[i-1]=tab[i];
			}
		}
	};break;
	}



	return 0;
}
