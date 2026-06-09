#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    printf("enter for snake is 0 and water for 1 and gun for 2:");
    scanf("%d", &player);
    printf("computer choose is %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("its draw\n:");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you lose\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you lose\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("its draw\n:");
    }

    else if (player == 1 && computer == 2)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you lose\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("its draw\n:");
    }
    else
    {
        printf("something wnet wrong");
    }

    return 0;
}
