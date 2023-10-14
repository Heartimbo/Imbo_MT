//Imbo - Midterm Programming Project
#include <stdio.h>
#include <conio.h>
int main (void)

{
    int input, a=500, b=100, c=50, d=10, e=5, f=1;

    printf("Enter an amount: ");
    scanf("%d", &input);
    system("cls");

	printf("Denomination\t");
	printf("No. of Pieces\n");

	printf("P 500\n");
	printf("P 100\n");
	printf("P 50\n");
	printf("P 10\n");
	printf("P 5\n");
	printf("P 1\n");


    printf ("%d\n", input);



    if(input<1 || input>999) 
    	printf("Warning: “The amount you entered is not acceptable. Enter a valid amount from 1 to 999 only.”");
		getch();
		system("cls");
	   
    printf("Developed By: Heart T. Imbo");
    getch();
    
return 0;

}