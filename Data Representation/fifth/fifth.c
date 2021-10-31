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
int* answer = malloc(limit*sizeof(int));

	for(int i=0; i<limit; i++)
	{

	answer[i]=0;
	}
if (num>=pwr(limit-1)-1)
{	
  int remainder = num%(pwr(limit));
  
  int iteratee = limit-1;
  while (remainder!=0)
{
answer[iteratee]=(remainder%2);
iteratee--;
remainder=remainder/2;

}
}
else
{
int iterate=limit-1;
while (num!=0)
{
answer[iterate]=(num%2);
iterate--;
num=num/2;
}
}
int j=0;
while (j<limit && j<=limit)
{
        
        printf("%d", answer[j]);
   
	j++;
}

free(answer);
}





void dosomethingN (long num, int limit)
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
if(j!=0)
{
               printf("%d", answer[j]);
}       
	j++;
}


free(answer);

}


int *  dosum (long num, int limit)
{
int* answer = malloc(limit*sizeof(int));

        for(int i=0; i<limit; i++)
        {

        answer[i]=0;
        }
if (num>=pwr(limit-1)-1)
{
  int remainder = num%(pwr(limit));

  int iteratee = limit-1;
  while (remainder!=0)
{
answer[iteratee]=(remainder%2);
iteratee--;
remainder=remainder/2;

}
}
else
{
int iterate=limit-1;
while (num!=0)
{
answer[iterate]=(num%2);
iterate--;
num=num/2;
}
}
/*
int j=0;
while (j<limit && j<=limit)
{

        printf("%d", answer[j]);

        j++;
}
*/
//free(answer);
return answer;
}



int *  dosum2 (long num, int limit)
{
	int x=1;
        int bits=0;
while (num>=x)
{
x*=2;
bits++;
}
	limit = bits;
int* answer = malloc(limit*sizeof(int));

        for(int i=0; i<limit; i++)
        {

        answer[i]=0;
        }
if (num>=pwr(limit-1)-1)
{
  int remainder = num%(pwr(limit));

  int iteratee = limit-1;
  while (remainder!=0)
{
answer[iteratee]=(remainder%2);
iteratee--;
remainder=remainder/2;

}
}
else
{
int iterate=limit-1;
while (num!=0)
{
answer[iterate]=(num%2);
iterate--;
num=num/2;
}
}
/*
int j=0;
while (j<limit && j<=limit)
{

        printf("%d", answer[j]);

        j++;
}
*/
//free(answer);
return answer;
}






int *  doUnleashed (long num)
{
/*
int x=1;
	int bits=0;
while (num>=x)
{
x*=2;
bits++;
}
*/
//	int countx=0;
int limit=52;
//log2(num)+1;
int* answer = malloc(limit*sizeof(int));
//int* answerReal = malloc(52*sizeof(int));
        for(int i=0; i<limit; i++)
        {

        answer[i]=0;
        }
if (num>=pwr(limit-1)-1)
{
  int remainder = num%(pwr(limit));

  int iteratee = limit-1;
  while (remainder!=0)
{
answer[iteratee]=(remainder%2);
iteratee--;
remainder=remainder/2;

}
}
else
{
int iterate=limit-1;
while (num!=0)
{
answer[iterate]=(num%2);
iterate--;
num=num/2;

}
}
/*
int j=0;
while(j<bits&&j<=52)
{
	if(j!=0)
	{
	answerReal[j]=answer[j];
	}
	j++;
}
*/
return answer;
}


int * dosomethingL (long num, int limit)
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
/*int j=0;
while (j<bits && j<=limit)
{
if(j!=0)
{
               printf("%d", answer[j]);
}       
	j++;
}*/
return answer;

//free(answer);

}



int doCount (long num, int limit)
{
	int jazz=0;
        int x=1;
        int bits=0;
while (num>=x)
{
x*=2;
bits++;
}
/*int* answer = malloc(bits*sizeof(int));
        for(int i=0; i<bits; i++)
        {

        answer[i]=0;
        }
	*/
if (num>=pwr(bits-1)-1)
{
  int remainder = num%(pwr(bits));

  int iteratee = bits-1;
  while (remainder!=0)
{
//answer[iteratee]=(remainder%2);
jazz++;
iteratee--;
remainder=remainder/2;

}
}
else
{
int iterate=bits-1;
while (num!=0)
{
//answer[iterate]=(num%2);
jazz++;
iterate--;
num=num/2;
}
}
/*int j=0;
while (j<bits && j<=limit)
{
if(j!=0)
{
               printf("%d", answer[j]);
}       
        j++;
}*/
return jazz;

//free(answer);

}




int main (int argc, char *argv[argc+1])
{
FILE* f = fopen(argv[1], "r");
double conDis=0;
long numBits=0;
long exp=0;
long man=0;
while (fscanf(f, "%le %ld %ld %ld\n", &conDis, &numBits, &exp, &man)!= EOF)
{
	//print sign
	if (conDis<0)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	
if (conDis<0)
{
conDis=conDis*-1;
}

//if 0.something case
	if(floor(conDis)==0)
	{
	double decimal=(conDis)-(floor(conDis));
int x=1;
int bits=0;
int shiftx=0;
int track=0;

while (abs(floor(conDis))>=x)
{
x*=2;
bits++;
}

int trackNew=0;
double decimalNew=(conDis)-(floor(conDis));
int shiftNew=0;
//dumb thing for finding shiftNew
for (int i=0;i<exp+-shiftNew;i++)
{
decimalNew *=2;
int holdNew = floor(decimalNew);
if (holdNew!=1)
{
if (trackNew==0)
{
shiftNew--;
}
}
else
{
decimalNew -= holdNew;
if (trackNew==0)
{
//printf("1.");
trackNew=1;
}
}
} 
//print the exp part
int bias = (pwr(exp-1))-1;
int doThis = shiftNew-1+bias;

dosomething(doThis, exp);


//print the man part
int* L = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
		L[i]=0;
        }
int* U = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                U[i]=0;
        }
int* V = malloc(52*sizeof(int));

        for(int i=0; i<52; i++)
        {
                V[i]=0;
        }

int trackV=0;
double decimalV=(conDis)-(floor(conDis));
for (int i=0;i<52+1;i++)
{
decimalV *=2;
int hold = floor(decimalV);
if (hold!=1)
{
/*      
if (track==0)
{
shiftx--;
}
*/
if (trackV==1)
{
V[i-1]=0;
}
}
else
{
decimalV -= hold;
if (trackV==0)
{
//printf("1.");
trackV=1;
}
else{
V[i-1]=1;

}
}
}

for (int i=0;i<man+1-shiftx;i++)
{
decimal *=2;
int hold = floor(decimal);
if (hold!=1)
{
/*	
if (track==0)
{
shiftx--;
}
*/
if (track==1)
{
L[i-1]=0;
//printf("0");
}
}
else
{
decimal -= hold;
if (track==0)
{
//printf("1.");
track=1;
}
else{
L[i-1]=1;
//printf("1");
}
}
}
/*
int j=0;

printf("{{");
while (j<man)
{

        printf("%d", L[j]);

        j++;
}

printf("}}");
*/
for (int i = 0; i<man;i++)
{
U[i]=L[i];
}
//make U = L+1 binary style
int lastPos = man-1;
int addDone =0;
for (int i = lastPos; i >= 0&&addDone==0; i--)
{
if (U[i]==0)
{
U[i]=1;
addDone=1;
}
else
{
U[i]=0;
}
}
/*
printf("{{");
int jd=0;
while (jd<man)
{

        printf("%d", U[jd]);

        jd++;
}

printf("}}");
*/
double LD=0;
double UD=0;
double VD=0;
for (int i = 0; i<man;i++)
{
	UD = UD+(U[i]*(pow(.5,i+1)));
	LD = LD+(L[i]*(pow(.5,i+1)));
}
for (int i = 0; i<52;i++)
{
        VD = VD+(V[i]*(pow(.5,i+1)));
}
/*
for (int i = 0; i<52;i++)
{
        printf("%d", V[i]);
}*/
//printf("%f, %f", LD, UD);
double mid = (UD+LD)/2;
if (VD>mid)
{
for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}
}
else if (VD<mid)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{
if (L[man]==0)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}}
}
free(L);
free(U);
free(V);


printf("\n");
	}




//for all other cases positive and negative not 0.something
else
{
double decimal=((conDis)-(floor(conDis)));
int x=1;
int bits=0;
int bias = (pwr(exp-1))-1;

while (abs(floor(conDis))>=x)
{
x*=2;
bits++;
}

int shiftNew=bits-1;
int doThis = shiftNew+bias;
//prints the exp part
/*printf("<");
printf("%d %d %d",doThis,  shiftNew, bias);
printf(">");
*/
dosomething(doThis, exp);







//printf("|");
/*
 int* L = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                L[i]=0;
        }
*/







//prints man part cutting short 
if(bits>man)
{
	
int* L=0;
L=dosum(abs(floor(conDis)), man);
/*
printf("[");
for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}
printf("]");*/
//	printf("[");
//dosomething (abs(floor(conDis)), man);
/* printf("[");
for (int i=0;i<man;i++)
{
printf("%d", L[i]);
}
 printf("]");
 */
//printf("]");
int* U = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                U[i]=0;
        }


int* V = malloc(52*sizeof(int));

        for(int i=0; i<52; i++)
        {
         V[i]=0;
        }

int* Vcom = malloc(52*sizeof(int));

        for(int i=0; i<52; i++)
        {
         Vcom[i]=0;
        }
/*
int* reform = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                reform[i]=0;
        }
*/
int * unleash = dosomethingL(abs(floor(conDis)),52);
/*
printf("*");
for (int i = 0; i<bits;i++)
{
        printf("%d", unleash[i]);
}
printf("*");
*/
/*
int reformcount=bits+4;

for (int i = 0; i<bits+4;i++)
{
        reform[i]=unleash[52-reformcount];
	reformcount--;
}
printf("*");
for (int i = 0; i<bits+4;i++)
{
        printf("%d", reform[i]);
}
*/
/*
printf("|");
for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}	
*/
for (int i = 0; i<man;i++)
{
U[i]=L[i];
}
//make U = L+1 binary style
int lastPos = man-1;
int addDone =0;
for (int i = lastPos; i >= 0&&addDone==0; i--)
{
if (U[i]==0)
{
U[i]=1;
addDone=1;
}
else
{
U[i]=0;
}
}

double decimalV = ((conDis)-(floor(conDis)));
for (int i=0;i<52;i++)
{
decimalV *=2;
int hold = floor(decimalV);
if (hold==1)
{
decimalV -= hold;
V[i]=1;
//printf("1");
}
else
{
V[i]=0;
//printf("hehexd");
}
}
/*
printf("{");
for (int i = 0; i<52;i++)
{
        printf("%d", V[i]);
}
printf("}");
*/
int helpmee=doCount(abs(floor(conDis)),man);
/*
int sho=0;
int coun=1;
for (int i=0; i<helpmee;i++)
{

if(coun<helpmee)
{
	
Vcom[i]=unleash[coun];
coun++;
	
}
else
{
Vcom[i]=V[sho];
sho++;
}
}
//int count=0;
*/




int dog =0;
for(int i=1;i<helpmee;i++)
{
Vcom[dog]=unleash[i];
dog++;
//count=dog;
}
int yolo=helpmee;
for(int i=0;i<52-helpmee;i++)
{
//	printf("<%d>",V[i]);
//	printf("<%d>",Vcom[dog]);
	
Vcom[yolo]=V[i];
yolo++;
//shoo++;
}
/*
for(int i=dog;i<52-1;i++)
{
Vcom[i]=Vcom[i+1];
}
*/
/*
int coutn=helpmee;
//printf("<%d>", Vcom[coutn-1]);

for(int i=0;i<52-helpmee;i++)
{//printf("<%d>", coutn-1);
int temp=coutn-1;
printf("<%d>", temp);
Vcom[coutn]=V[i];
coutn++;
}
//printf("<%d>", coutn-1);
*/
/*
printf("*V");
for (int i = 0; i<52;i++)
{
        printf("%d", Vcom[i]);
}
printf("*");
*/
double LD=0;
double UD=0;
double VD=0;
//printf("||");
for (int i = 0; i<man;i++)
{
	UD = UD+(U[i]*(pow(.5,i+1)));
	LD = LD+(L[i]*(pow(.5,i+1)));
}


//for(int i=0;i<52;i++)
//{ if(i<helpmee-1)
//        {
  //      printf("(%d)",unleash[i+1]);
        
//}
        

  //     printf("(%d)",V[i]);
        
//}
int shwoop=0;
for (int i = 0; i<52;i++)
{
/*	if (i<helpmee-1)
	{
	VD = VD+(Vcom[i]*(pow(.5,i+1)));
	}
	else if (i==helpmee-1)
	{VD=VD;}
	else if (i>helpmee-1)
*/
	

	if(i<helpmee-1)
	{
        VD = VD+(unleash[i+1]*(pow(.5,i+1)));
	}
	else
	{

	VD = VD+(V[shwoop]*(pow(.5,i+1)));
	shwoop++;
	}
	
	
}

double mid = (UD+LD)/2;
//printf("{M%f}, {VD%f}", mid, VD);
if (VD>mid)
{
for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}
}
else if (VD<mid)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{
if (L[man-1]==0)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}
}
}
/*
printf("*");
for (int i = 0; i<52;i++)
{
        printf("%d", Vcom[i]);
}
*/
free(L);
free(U);
free(V);
free(Vcom);
free(unleash);
}













//prints man part without weird filling with 0s
else
{
int* L1=0;
int*L2= malloc((man+1-bits)*sizeof(int));

        for(int i=0; i<man+1-bits; i++)
        {
                L2[i]=0;
        }
	
int*L= malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                L[i]=0;
        }

	
int* U = malloc(man*sizeof(int));

        for(int i=0; i<man; i++)
        {
                U[i]=0;
        }
	
int* V = malloc(52*sizeof(int));

        for(int i=0; i<52; i++)
        {
         V[i]=0;
        }

	int* Vcom = malloc(52*sizeof(int));

        for(int i=0; i<52; i++)
        {
         Vcom[i]=0;
        }

L1=dosomethingL(abs(floor(conDis)), man);
int helpme = doCount(abs(floor(conDis)), man);
//int dpart = (man+1-bits);

for (int i=0;i<man+1-bits;i++)
{
decimal *=2;
int hold = floor(decimal);
if (hold==1)
{
decimal -= hold;
L2[i]=1;
//printf("1");
}
else
{	
L2[i]=0;
//printf("hehexd");
}
}
double decimalV = abs((conDis)-(floor(conDis)));
for (int i=0;i<52;i++)
{
decimalV *=2;
int hold = floor(decimalV);
if (hold==1)
{
decimalV -= hold;
V[i]=1;
//printf("1");
}
else
{
V[i]=0;
//printf("hehexd");
}
}

int shoov=0;
//printf("(%d)", helpme);
int counttv=1;
for (int i=0; i<man;i++)
{

if(counttv<helpme)
{

Vcom[i]=L1[counttv];
counttv++;
//qwer++;

}
else
{
Vcom[i]=V[shoov];
shoov++;
}
}

//int qwer =0;
int shoo=0;
//printf("(%d)", helpme);
int countt=1;
for (int i=0; i<man;i++)
{

if(countt<helpme)
{
	
L[i]=L1[countt];
countt++;
//qwer++;
	
}
else
{
L[i]=L2[shoo];
shoo++;
}
}

for (int i = 0; i<man;i++)
{
U[i]=L[i];
}
//make U = L+1 binary style
int lastPos = man-1;
int addDone =0;
for (int i = lastPos; i >= 0&&addDone==0; i--)
{
if (U[lastPos]==0)
{
U[lastPos]=1;
addDone=1;
}
else
{
U[i]=0;
}
}
/*
printf("<");
for (int i=0;i<helpme;i++)
{
        printf("%d", L1[i]);

}
printf(">");
printf("<");
for (int i=0;i<man+1-bits;i++)
{
        printf("%d", L2[i]);

}
printf(">");



printf("<");
for (int i=0;i<man;i++)
{
        printf("%d", L[i]);

}
printf(">");

printf("{{");
int jd=0;
while (jd<man)
{

        printf("%d", U[jd]);

        jd++;
}

printf("}}");


for (int i=0;i<52;i++)
{
        printf("%d", Vcom[i]);

}
*/
double LD=0;
double UD=0;
double VD=0;
for (int i = 0; i<man;i++)
{
	UD = UD+(U[i]*(pow(.5,i+1)));
	LD = LD+(L[i]*(pow(.5,i+1)));
}
for (int i = 0; i<52;i++)
{
        VD = VD+(Vcom[i]*(pow(.5,i+1)));
}

double mid = (UD+LD)/2;
if (VD>mid)
{
for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}
}
else if (VD<mid)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{
if (L[man-1]==0)
{for (int i = 0; i<man;i++)
{
        printf("%d", L[i]);
}}
else
{for (int i = 0; i<man;i++)
{
        printf("%d", U[i]);
}
}
}

free(L1);
free(L2);
free(L);

free(Vcom);
free(U);
free(V);
}
printf("\n");
}
}
fclose(f);
return EXIT_SUCCESS;
}



