#include "i2d.h"

int i2d(char *resultat,int valeur)
{
	char t[20];
	int i=0;
	int j;
	while (valeur!=0)
	{
		t[i] = valeur%10;
		valeur=valeur/10;
		i++;
	}
	i--;
	j=0;
	while(i>=0)
	{
		resultat[j] = t[i]+'0';
		i--;
		j++;
	}
	return j;
}

