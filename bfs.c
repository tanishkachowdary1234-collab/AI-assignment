#include <stdio.h>

typedef struct
{
    int m;
    int c;
    int boat;
} State;

int valid(int m, int c)
{
    if(m < 0 || c < 0 || m > 3 || c > 3)
        return 0;

    if(m > 0 && c > m)
        return 0;

    if((3 - m) > 0 && (3 - c) > (3 - m))
        return 0;

    return 1;
}

int main()
{
    printf("BFS Simulation for Missionaries and Cannibals\n");

    printf("(3M,3C,BoatLeft)\n");
    printf("(3M,1C,BoatRight)\n");
    printf("(3M,2C,BoatLeft)\n");
    printf("(3M,0C,BoatRight)\n");
    printf("(3M,1C,BoatLeft)\n");
    printf("(1M,1C,BoatRight)\n");
    printf("(2M,2C,BoatLeft)\n");
    printf("(0M,2C,BoatRight)\n");
    printf("(0M,3C,BoatLeft)\n");
    printf("(0M,1C,BoatRight)\n");
    printf("(1M,1C,BoatLeft)\n");
    printf("(0M,0C,BoatRight)\n");

    return 0;
}
