#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//snake wins over water
//gun win over snake
//water wins over gun
int SnakeWaterGun(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    int number,result;
    char user,cpu;
    printf("---------WELCOME TO SNAKE WATER GUN---------\n");
    printf("s - snake\n");
    printf("w - water\n");
    printf("g - gun\n");

    printf("Enter your choice: ");
    scanf("%c",&user);
    srand(time(0));
    number = rand()%100 + 1;
    if(number<33)
    {
        cpu = 's';
    }
    else if(number>33 && number<66)
    {
        cpu = 'w';
    }
    else
    {
        cpu = 'g';
    }
    result = SnakeWaterGun(user,cpu);
    if(result==1)
    {
        printf("You Won!");
    }
    if(result==0)
    {
        printf("Tie!");
    }
    if(result==-1)
    {
        printf("CPU Won!");
    }
}

