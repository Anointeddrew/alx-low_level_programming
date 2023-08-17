#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf('%dispositive\n',i);

	else if (i < 0)
		printf("%disnegative\n",i);

	else 
		printf("%diszero\n",i);
}
