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
int absNum = abs(num);
	for(int i=0; i<bits; i++)
	{

	answer[i]=0;
	}
if (absNum>=pwr(bits-1)-1)
{	
  int remainder =absNum%(pwr(bits));
  
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
while (absNum!=0)
{
answer[iterate]=(absNum%2);
iterate--;
absNum=absNum/2;
}
}


if (num<0)
{
int mark=0;
int doggy=0;
int x=bits-1;
while (mark!=1)
{

if (answer[x]==1)
{
mark=1;
}
doggy++;
x--;
}

for (int i=(bits-doggy-1); i>=0; i--)
{
if (answer[i]==0)
{
answer[i]=1;
}
else
{
answer[i]=0;
}
}


for (int i=0; i<bits;i++)
{
printf("%d", answer[i]);
}
printf("\n");
}


else{
for (int i=0; i<bits;i++)
{
printf("%d", answer[i]);
}
printf("\n");
}
free(answer);
	
}


int main (int argc, char *argv[argc+1])
{	
FILE* f = fopen(argv[1], "r");
long conDis=0;
long numBits=0;

while (fscanf(f, "%ld %ld\n", &conDis, &numBits)!= EOF)
{
int ab=abs(conDis);
 if ((conDis<0)&&(ab>=pwr(numBits-1)))
{
	printf("1");
	for(int i=0; i<numBits-1;i++)
{
printf("0");
}
printf("\n");
}
else if (ab>=pwr(numBits-1)-1)
{
        printf("0");
for(int i=0; i<numBits-1;i++)
{
printf("1");
}
printf("\n");
}
else 
{
dosomething (conDis, numBits);
}
}
fclose(f);
return EXIT_SUCCESS;
}


