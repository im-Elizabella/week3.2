#include<stdio.h>
int main()
{
    double w,h;
    printf("Enter your weight (kg.) : ");
    scanf("%lf",&w);
    printf("Enter your hight(m) : ");
    scanf("%lf",&h);
    printf("Your BMI is : %lf\n",w / (h*h));
    printf("BMI catecogory is : ");
     
if ( w / (h*h) < 18.5)
    {
        printf("Underweight");
    }
if ( w / (h*h) >= 18.5 &&  w / (h*h) <= 24.9)
    {
        printf("Normal"); 
    }       
if ( w / (h*h) >= 25.0 && w / (h*h) <= 29.9)
    {
        printf("Overweight");    
    }
if ( w / (h*h) >=30.0)
    {
        printf("FAT");
    }
   return 0;
}   