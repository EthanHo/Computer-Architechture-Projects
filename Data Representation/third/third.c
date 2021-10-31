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

int count =0;
int index=0;
for (int i=bits-1; i>=0;i--)
{
	if(answer[i]==1)
	{
	count+=pwr(index);
	}
	index++;

}
if (answer[0]==1)
{
printf("%d", -1*count);
}
else
{
printf("%d", count);
}
printf("\n");
}


else{
	int count =0;
int index=0;
	for (int i=bits-1; i>=0;i--)
{
        if(answer[i]==1)
        {
        count+=pwr(index);
        }
        index++;

}
if (answer[0]==1)
{
printf("%d", count*-1);
}
else
{
printf("%d", count);
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
char us;
char su;
char u='u';
while (fscanf(f, "%ld %ld %s %s\n", &conDis, &numBits, &us, &su)!= EOF)
{
int ab=abs(conDis);
if (us==u)
{
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
else
{
dosomething (conDis, numBits);
}
}
fclose(f);
return EXIT_SUCCESS;
}


