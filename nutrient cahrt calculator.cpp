#include<stdio.h>
#include<conio.h>
#include<string.h>
struct nutri{
	char head[200];
	char name[200];
	int age;
}xy;
int main()
{

	int sum(int,int,int);
	int z,a,A,i,cha,yz,mi,xyz,feed,total=0;
	int b[200],c[100],e[100],f[100],m[100],xi[100];
	char su[2000];
	printf("\n");
	printf("\n");
printf("                                  NUTRIENT CALCULATOR FOR A CHILD\n");
printf("\n");
printf("\n");
printf("\t\tEnter the first name of your child\n");
scanf("%s",&xy.name);
BC:
	printf("\n");
	printf("\t\tEnter the age of your child\n");
	printf("\n");
	printf("\t\tAge of child should be above 5 years\n");
	printf("\n");
	scanf("%d",&xy.age);
	if(xy.age<5)
	{
		printf("You have entered the wrong age\n");
		goto BC;
	}
printf("\n");
printf("\n");
printf("\n");
printf("\n");

	printf("                    GOOD MORNING BABY WAKE UP ITS THE TIME FOR BREAKFAST\n");
	printf("\n");
	ABC:
	printf("\t\tEnter 1 to have CORN FLAKES.\n ");
	printf("\n");
	printf("\t\tEnter 2 to have OATS.\n");
	printf("\n");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
			printf("\t\tAs you have choosen to have cornflakes\n");
			printf("\n");
			printf("\t\tEnter the number of bowls consumed by the child\n");
			printf("\n");
			scanf("%d",&a);
			b[1]=a*24;
			b[2]=a*2;
			b[3]=a*0;
		
			printf("\n");
            printf("\t\tAmount of carbohydrates,fats,proteins consumed are respectively given below\n");
			for(i=1;i<4;i++)
			{
				printf("%d\n",b[i]);
				}
					total=sum(b[1],b[2],b[3]);
			printf("\t\tTotal nutrients consumed in morning are %d g\n",total);
				break;	
	
	case 2:
		printf("\t\tAs you have choosen to have oats\n");
		printf("\n");
		printf("\t\tEnter the number of bowls consumed by child\n");
		printf("\n");
		scanf("%d",&A);
		c[1]=A*27;
		c[2]=A*2;
		c[3]=A*5;
		printf("\t\tAmount of carbohydrates,fats,proteins consumed are respectively given below\n");
		printf("\n");
		for(i=1;i<4;i++)
		{
			printf("%d\n",c[i]);
		}
		total=sum(c[1],c[2],c[3]);
		printf("\n");
		printf("\t\tTotal nutrients consumed in morning are %d g",total);
		printf("\n");
		break;
		default:
			printf("\t\tInvalid input\n");
			goto ABC;
		
}
	printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
printf("                           GOOD AFTERNOON BABY-\n");

printf("\n");
printf("\n");
printf("\t\tYou have two meals available for the afternoon \n");
printf("\n");
DPS:
printf("\t\tEnter 1 for DAL MIXED WITH RICE-\n ");
printf("\n");
printf("\t\tEnter 2 for CHAPATI AND VEGETABLES-\n");
printf("\n");
scanf("%d",&yz);
switch(yz)
{
	case 1:
		printf("\t\tAs the meal you choose is DAL MIXED WITH RICE\n");
		printf("\n");
		printf("\t\tEnter the bowls intaken by the baby\n");
		printf("\n");
		scanf("%d",&xyz);
		e[1]=xyz*85;
		e[2]=xyz*29;
		e[3]=xyz*22;
		printf("\n");
		printf("\t\tAmount of carbohydrates,fats and protiens consumed in afternoon are respectively as follows  -\n");
		for(i=1;i<4;i++)
		{
			printf("%d\n",e[i]);
		}
		total=sum(e[1],e[2],e[3]);
		printf("\n");
		printf("\t\tTotal nutrients consumed in afternoon are %d g\n",total);
		break;
	
	case 2:
		printf("\n");
		printf("\t\tAs the meal choosen by the baby is CHAPATI AND VEGETABLES\n");
		printf("\n");
		printf("\t\tEnter the number of Chapatis eaten by the baby\n");
		printf("\n");
		scanf("%d",&cha);
		f[1]=cha*0;
		f[2]=cha*7;
		f[3]=cha*8;
		printf("\n");
		printf("\t\tAmount of carbohydrates , fats and protiens present in afternoon are -");
		for(i=1;i<4;i++)
		{
			printf("%d\n",f[i]);
		}
		total=sum(f[1],f[2],f[3]);
		printf("\n");
		printf("\t\tTotal nutrients consumed in afternoon are %d g\n",total);
		break;
		default:
			printf("Invalid input\n");
			printf("\n");
			goto DPS;
			
}
printf("\n");
printf("\t\tEvery child should take a sound sleep\n");
printf("\n");
printf("\t\tSo it is the sleeping time for baby\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                  WAKE UP BABY         GOOD EVENING-");
printf("\n");
printf("\t\tEnter the number of glasses of milk drunk by the baby\n");
scanf("%d",&mi);
printf("\n");
m[1]=mi*12;
m[2]=mi*0.2;
m[3]=mi*8;
printf("\t\tAmount of carbohydrates , fats and protiens intaken in evening are respectively as follows -\n");
printf("\n");
for(i=1;i<4;i++)
{
	printf("%d\n",m[i]);
}
total=sum(m[1],m[2],m[3]);
printf("\n");
printf("Total nutrients consumed in the evening are %d g",total);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                             DINNER    TIME - \n");
printf("\n");
printf("\n");
printf("\t\tBaby is advised to have MIXED FRUIT SALAD in the dinner \n");
xi[1]=30;
xi[2]=2;
xi[3]=32;
printf("\n");
printf("\t\tAmount of carbohydrate,fats and protiens intaken in dinner are respectively as follows-\n");
printf("\n");
for(i=1;i<4;i++)
{
	printf("%d\n",xi[i]);
}
total=sum(xi[1],xi[2],xi[3]);
printf("\n");
printf("\t\tTotal nutrients consumed in dinner are %d g\n",total);
printf("\n");
printf("\n");
printf("\n");
printf("           DETAILS OF NET PROTIENS , FATS AND CARBOHYDRATES CONSUMED IN A DAY BY THE BABY ARE -----");
printf("\n");
FILE *ps;
ps=fopen("A03.txt","r");
	char k;
while(1)
{
	if(feof(ps))
	{
		break;
	}
k=getc(ps);
printf("%c",k);
}
printf("\n");
printf("\n");
printf("                         NOW ITS TIME FOR YOUR PRECIOUS FEEDBACK-----\n");
printf("\n");
printf("\t\tEnter 10 for EXCELLENT PERFORMANCE OF PROGRAM\n");
printf("\n");
printf("\t\tEnter 9 for VERY GOOD PERFORMANCE OF PROGRAM\n");
printf("\n");
printf("\t\tEnter 8 for GOOD PERFORMANCE OF PROGRAM\n");
printf("\n");
printf("\t\tEnter NUMBER LESS THAN 8 FOR FAIR PERFORMANCE\n");
printf("\n");
scanf("%d",&feed);
printf("\n");
switch(feed)
{
	case 10:
		{
			printf("\t\tEnter the suggestion you want to give\n");
			scanf("%s",su);
			printf("                      THANKYOU FOR YOUR SUGESSION\n");
			printf("                      WE APPRICIATE YOUR SUGESSION\n");
			break;
		}
case 9:
		{
			printf("\t\tEnter the suggestion you want to give\n");
			scanf("%s",su);
			printf("                      THANKYOU FOR YOUR SUGESSION\n");
			printf("                      WE APPRICIATE YOUR SUGESSION\n");
		break;
		}
		case 8:
			{
			printf("\t\tEnter the suggestion you want to give\n");
			scanf("%s",su);
			printf("                      THANKYOU FOR YOUR SUGESSION\n");
			printf("                      WE APPRICIATE YOUR SUGESSION\n");
		break;
		}
		default:
			{
			printf("\t\tEnter the suggestion you want to give\n");
			scanf("%s",su);
			printf("                      THANKYOU FOR YOUR SUGESSION\n");
			printf("                      WE APPRICIATE YOUR SUGESSION\n");
		break;
		}	
}
}
int sum(int a,int b,int c)
{
	int result;
	result=a+b+c;
	return result;
}
