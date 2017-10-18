#include <stdio.h>

int main()
{
	const int a=20;
	int tab[a];
	int i=0,k=0,n;
	printf("Saisie un entier");
	scanf("%d",&n);
    do
    {
      tab[i]=n%2;
      n=n/2;
      i++;
      k++;
    } while (n!=0);
    printf("\nla conversion en binaire est: ");
    for(i=k-1;i>=0;i--)
    {
      printf("%d",tab[i]);
    }

	return 0;
}
