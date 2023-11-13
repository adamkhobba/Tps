



#include <stdio.h>

int main ()
{
	int	i;
	int	j;
	int	n;

	printf("taper le nombre de dimension de votre tableau");
	scanf("%d", &n);
	int T[n][1];
	int Tneg[n][1];
	int Tpos[n][1];

	while (i < n)
	{
		scanf("%d",T[i++][1]); 
	}		
	return (0);
}
