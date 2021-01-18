
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int main ()
{srand(time(NULL));
char answer [3];
char yes[]="yes";
printf ("                                             Welcome to Guess my Number !\n");
printf ("This game is very simple! Find my number!!\nCan you do that?\n");
printf("To find it, I will give you some clue! It is more or It is less.That's it !\n");


do {

const int min = 1;
const int max =100;
int nombreMystere=0,userChoice=0,live;

nombreMystere= (rand()%(max - min+1))+ min ;

/*printf ("%d",nombreMystere);*/


printf ("How many tries do you need?");

scanf ("%d",&live);

if (live>=1 &&live<=5){printf("You are a badass! I love that!\n");}
else if (live>5 && live<=9){printf("Okay, Okay! You love challenge!\n");}
else {printf ("Your are a pussy!! Next time make it more difficult!!\n");}

printf ("Ok ! Now, Let´s play !!!\n");

while (live > 0)
{printf ("What is the number ?");
scanf ("%d",&userChoice);
    if (userChoice<nombreMystere)
    {printf ("It's more!\n");live--;}
    else if (userChoice>nombreMystere)
    {printf("It's less!\n");live--;}
    else {printf("Congratulation!!!!\n You find the number.");break;}
}
    if (live==0){printf ("You loose!\nThe number was %d.\n",nombreMystere);}

    printf ("\nDo you want to play again?\nyes or no:");
    scanf ("%s",&answer[0]);
    }
    while (strcmp(answer,yes)==0 );

    printf ("\nThank you for playing the game! :)");

return 0;

}
