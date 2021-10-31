#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

long pwr (long x)
{
	
	long answer=2;
for (int i=1;i<x;i++)
{
answer=answer*2;
}
return answer;
}

void dosomething (long num, int limit)
{

	int x=1;
	int bits=0;
while (num>=x)
{
x*=2;
bits++;
}
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
int j=0;
while (j<bits && j<=limit)
{
        if(j==0)
        {
        printf("%d.", answer[j]);
        }
        else
        {
        printf("%d", answer[j]);
        }
	j++;
}


free(answer);

}













int main (int argc, char *argv[argc+1])
{
FILE* f = fopen(argv[1], "r");
double conDis=0;
long numBits=0;

while (fscanf(f, "%le %ld\n", &conDis, &numBits)!= EOF)
{
	if(floor(conDis)==0)
	{
	double decimal=conDis-floor(conDis);
int x=1;
int bits=0;
int shiftx=0;
while (floor(conDis)>=x)
{
x*=2;
bits++;
}
int track=0;


for (int i=0;i<numBits+1-shiftx;i++)
{
decimal *=2;
int hold = floor(decimal);
if (hold!=1)
{
if (track==0)
{
shiftx--;
}
if (track==1)
{
printf("0");
}
}
else
{
decimal -= hold;
if (track==0)
{
printf("1.");
track=1;
}
else{
printf("1");
}
}
}
//int shift=bits-1;
printf(" %d", shiftx-1);
printf("\n");
	}




else{
	double decimal=conDis-floor(conDis);
	
int x=1;
int bits=0;

while (floor(conDis)>=x)
{
x*=2;
bits++;
}
if(bits>numBits)
{
dosomething (floor(conDis),numBits);
}
else{
/*double decimal=conDis-(long)conDis;
int x=1;
int bits=0;

while ((long)conDis>=x)
{
x*=2;
bits++;
}
*/
dosomething (floor(conDis),numBits);
for (int i=0;i<numBits+1-bits;i++)
{
decimal *=2;
int hold = floor(decimal);
if (hold==1)
{
decimal -= hold;
printf("1");
}
else
{	
printf("0");
}
}
}
int shift=bits-1;
printf(" %d", shift);
printf("\n");

}



}
fclose(f);
return EXIT_SUCCESS;
}
