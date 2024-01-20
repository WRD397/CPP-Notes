#include<stdio.h>
#define MAX 1000;

int a = 10;
float b=11.43;

void p()
{
printf("Hi there");
printf("\n\n");
}	

void user_input()
{	
	int userip;
	printf("Please enter the integer below.\n");
	scanf("%d",&userip);
	printf("Your input was, %d",userip);
}


void cond()
{	

	char grade;
	
	printf("Please enter your grade : ");
	scanf("%c",&grade);
	
	if(grade=='A')
	{
		printf("great!!");	
	}
	else if(grade == 'B')
	{
		printf("good!");
	}	
	else if(grade == 'C')
	{
		printf("better");
		
	}
	else
	{
		printf("worst");
	}
	
}


void cond_switch()
{
	char grade, bee;
	
	printf("please enter your grade : ");
	scanf("%c",&grade);
	
	switch(grade)
	{	
		case 'A': 
			printf("Great!!");
			break;
		case 'B':
			printf("Please enter what B : ");
			scanf("%c",&bee);
			
			switch(bee)
				case 'x': 
					printf("x is better");
					break;
				case 'y': 
					printf("y is worse");
					break;
				
		case 'C': 
		printf("Not good");
		break;
		default :
		printf("please input a valid grade.");
	
	
	}		

}

void loop()
{
	int k;
	scanf("%d",&k);
	for(int j=0; j<k; j++)
	{
		printf("%d\n",j);
	}
}



void array()
{	
	int i,n=5;
	float a[n], sum, avg;
	
	printf("Please enter the marks below\n");
	for(i=0; i<n; i++)
	{
		scanf("%f", &a[i]);
	}
	printf("\n");
	
	// Printing the input array
	printf("[ ");
	for(i=0; i< n; i++)
	{
		printf("%f ",a[i]);
	}
	printf("]");
	printf("\n");
	
	//calculating the average
	sum = 0;
	for(i=0; i<n; i++)
	{	
		sum = sum + a[i];
	}
	avg = sum / n;
	printf("average of the numbers, %f\n",avg);

}



void test()
{
	int i = 10;
	int *p_i;
	int *q;
	
	p_i = &i;
	q = p_i;
	
	printf("%d,%d\n",*p_i,*q);
	
	*q = 40;
	printf("%d,%d\n",*p_i,*q);
		
}




// MAIN 
void main()
{
p();
	array();
	
	
printf("\n\n");
}


	
