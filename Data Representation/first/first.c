#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

long pwr (long x)
{
	if (x==0)
	{
	return 1;
	}
	long answer=2;
for (int i=1;i<x;i++)
{
answer=answer*2;
}
return answer;
}

void dosomething (long num, long bits)
{

int* answer = malloc(bits*sizeof(int));

	for(int i=0; i<bits; i++)
	{

	answer[i]=0;
	}
if (num>=pwr(bits-1)-1)
{	
  int remainder = num%(pwr(bits));
  
  int iteratee = bits-1;
  while (remainder!=0)
{
answer[iteratee]=(remainder%2);
iteratee--;
remainder=remainder/2;

}
}
else
{

	
	int iterate=bits-1;
while (num!=0)
{
	 

answer[iterate]=(num%2);
iterate--;
num=num/2;
}

}


for (int i=0; i<bits;i++)
{
printf("%d", answer[i]);

}
printf("\n");
free(answer);
}	

int main (int argc, char *argv[argc+1])
{
	
FILE* f = fopen(argv[1], "r");
long conDis=0;
long numBits=0;
while (fscanf(f, "%ld %ld\n", &conDis, &numBits)!= EOF)
{
dosomething (conDis, numBits);
}

fclose(f);
return EXIT_SUCCESS;
}
