#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[3], m[3], l[3], pepperoni[3], cheese[3], mushroom[3];
    int fixed = 5, basecost = 2;
    int area, rsize;
    printf("Welcome to My Pizza Shop\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(s, 3, stdin);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni, 3, stdin);
    
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese, 3, stdin);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom, 3, stdin);

    int size = atoi(s);
    int pep = atoi(pepperoni);
    int cheeze = atoi(cheese);
    int mush = atoi(mushroom);
    printf("%d", s);

    if (size == 3){
        int rsize = 20;
    }
    else if(size == 2){
        int rsize = 16;
    }
    else if (size == 1){
        int rsize = 10;
    }
    printf("%d", rsize);
}