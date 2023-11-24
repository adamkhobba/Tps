




#include <stdio.h>

int main ()
{
	int	i;
	int	n;
	int	p;
	int	g;
	int	j;

	printf("taper le nombre de dimension de votre tableau");
	scanf("%d", &n);
	int T[n];
	
	i = 0;
	p = 1;
	g = 1;
	while (i < n)
	{
		if( i == 0)
			printf("taper le premier nombre");
		else 
			printf("taper le premier nombre");
		scanf("%d",&T[i]); 
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (T[i] < 0)
		p++;	
		if (T[i] > 0)
		g++;
		i++;
	}
	int	Tpos[p];
	int	Tneg[g];

	i = 0;
	j = 0;
	while (i < n)
	{
		if (T[i] > 0)
		{
			Tpos[j] = T[i];
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (i < n)
	{
		if (T[i] < 0)
		{
			Tneg[j] = T[i] ;  
			j++;
		}
		i++;
	}
	i = 0;
	while (i < p)
	{
		printf("pos = %d",Tpos[i]);	
		i++;
	}	
	return (0);
}
