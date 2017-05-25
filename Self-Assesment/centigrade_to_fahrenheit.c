#include<stdio.h>

// Prototypes
float convert_to_celsius(float);
float convert_to_fahrenheit(float);

int main(int argc, char*argv[])

{

float input=0;
char select;

float convert_to_celsius(float input)
{
float celsius = 0;
celsius = (input-32)/1.8;
return celsius;
}


float convert_to_fahrenheit(float input)
{
float fahrenheit;
fahrenheit = (input*1.8)+32;
return fahrenheit;
}


printf( "please enter the temperature to be converted: \n");
scanf(" %f",&input);

printf( "Please enter c for converting to celsius \n");
printf( "and enter f for converting to fahrenheit \n");
scanf(" %c",&select);


switch (select)
{
case 'C':
case 'c':
printf("%.2f fahrenheit is %.2f celsius .\n",input,convert_to_celsius(input));
break; 

case 'f':
case 'F':
printf("%.2f celsius is %.2f fahrenheit .\n",input,convert_to_fahrenheit(input));
break; 
}



return 0;

}