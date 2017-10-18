#include <stdio.h>

int main()
{
	const int a=10;
	int tab1[10]={10,20,5,8,102,56,84,59,23,24};
	int tab2[10]={52,65,87,15,2,9,36,12,46,97};
	int tab3[a];
	int i;
	for(i=0;i<a;i++)
	{
		tab3[i]=tab2[i];
	}
    printf("Tab2 est ");
	for(i=0;i<a;i++)
	{
		tab2[i]=tab1[i];
	    printf("\n %d",tab2[i]);
	}

    printf("\n Tab1 est ");
    for(i=0;i<a;i++)
	{
		tab1[i]=tab3[i];
	    printf("\n %d",tab1[i]);
	}

	return 0;
}
