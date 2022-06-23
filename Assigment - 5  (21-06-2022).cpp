                                    /*Assigment-5
                 1. Write a program to claculate the sum of two number.*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum;
	
	printf("\nEnter two Numbers:- ");
	scanf("%d%d",&a,&b);
	
	sum = a+b;
	
	printf("\nSum of two number is %d",sum);
	getch();
	}*/
	
                                     /*Assigment-5
                 2.Write a program to claculate the area of circle.*/
/*                
#include<stdio.h>
#include<conio.h>
int main()
{
	float area,radius;
	
	printf("\nEnter Radius of circle:- ");
	scanf("%f",&radius);
	
	area = 3.14*radius*radius;
	
	printf("\nArea of circle is %f",area);
	getch();
	}*/
	
	
                                    /*Assigment-5
                 3.Write a program to claculate the volume of a cuboid.*/
 /*                
#include<stdio.h>
#include<conio.h>
int main()
{
	float length,width,height,volume;
	
	printf("\nEnter length,width and height of Cuboid:- ");
	scanf("%f%f%f",&length,&width,&height);
	
	volume = length*width*height;
	
	printf("\nVolume of Cuboid is %f",volume);
	getch();
	}*/
	
	
	                               /*Assigment-5
                  4. write a program to calculate the simple intrest*/
/*                   
#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t;
	float si;
	
	printf("Enter principal-rate and time \n");
	scanf("%d%d%d",&p,&r,&t);
	
	si=(p*r*t)/100;
	
	printf("simple intrest is %f",si);
	getch();
}*/

                                     /*Assigment-5
                  5. write a program to calculate the area of the rectangle*/
 /*                  
#include<stdio.h>
#include<conio.h>
int main()
{
	float  area, length, breath;
	
	printf("\nEnter length and breath of rectangle:- \n");
	scanf("%f%f",&length,&breath);
	
	area = length*breath;
	
	printf("\nArea of rectangle is %f",area);
	getch();
}*/

                                     /*Assigment-5
                 6. write a program to calculate the average of three numbers*/
/*                   
#include<stdio.h>
#include<conio.h>
int main()
{
	int  num1, num2, num3, average;
	
	printf("\nEnter three numbers:- \n");
	scanf("%d%d%d",&num1,&num2,&num3);

	average = (num1+num2+num3)/3;
	
	printf("\nAverage of three number is %d",average);
	getch();
}*/

                                	/*Assigment-5
                 7. write a program to calculate the square of a given number*/
 /*                  
#include<stdio.h>
#include<conio.h>
int main()
{
	int  num, sqrt;
	
	printf("\nEnter two numbers:- \n");
	scanf("%d",&num);

	sqrt = num*num;
	
	printf("\nSquare of given number is:- %d",sqrt);
	getch();
}*/


	                            /*Assigment-5
      8. write a program which takes a character as input and print ASCII code*/
/*                   
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("\nEnter a character:- \n");
	scanf("%c",&ch);
	
	printf("\nGiven character is:- %c and its ASCII value is %d",ch,ch);
	getch();
}*/


                                    /*Assigment-5
      9. write a program to calculate the profit percentage upon selling a product.cost 
	     price are given by the user*/
 /*                  
#include<stdio.h>
#include<conio.h>
int main()
{
	double sp, cp, profit, profit_per;
	
	printf("\nEnter sp and cp amount:- \n");
	scanf("%lf%lf" ,&sp,&cp);
	
	profit = sp -cp;
	profit_per = ((profit*100)/cp);
	
	printf("\nProfit percent is :- %lf",profit_per);
	getch();
}
*/
                                          /*Assigment-5
    10. write a progra to calculate the area of a triangle where base and height of the triangle are given*/
                   
#include<stdio.h>
#include<conio.h>
int main()
{
	float base, height, area;
	
	printf("\nEnter triangle of base and height:- \n");
	scanf("%f%f",&base,&height);
	
	area= base*height;
	printf("\nArea of triangle is %f",area);
	getch();
}