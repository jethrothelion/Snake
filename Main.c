#include <stdio.h>
#include <string.h>

int main(void)
{
    char display[5][20];


    memset(display, '*', sizeof(display));

    while(1)
    {

        //print Display
        for(int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                printf("%c ", display[i][j]);
            }
            printf("\n");
        }

        //clear Display
        printf("\033[5A");
    }
}
