#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int randomNum(int range, int takenNums[], int takenCount);
void addElementToArray(int target, int array[], int *counter);
int currentPosition;

int main(void)
{
    int takenNums[100];
    int takenNumCounter = 0;

    //Game Pieces
    char display[5][20];
    int point;
    int spawnPoint;
    int charecter[100];
    memset(display, '*', sizeof(display));


    currentPosition = 0;

    point = randomNum(100, takenNums, takenNumCounter);
    addElementToArray(point, takenNums, &takenNumCounter);

    spawnPoint = randomNum(100, takenNums, takenNumCounter);


    while(1)
    {

        //print Display
        for(int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                currentPosition += 1;
                printf("%c ", display[i][j]);
            }
            printf("\n");
        }

        //clear Display
        printf("\033[5A");
    }
}
int randomNum(int range, int takenNums[], int takenCount)
//Give random number in a range of numbers
{

    bool aDuplicate;
    int theRandomNum;

    do
    {
        theRandomNum = rand() % range;
        aDuplicate = false;

        for (int i = 0; i < takenCount; i++)
        {
            if (takenNums[i] == theRandomNum)
            {
                aDuplicate = true;
                break;
            }
        }
    } while(aDuplicate);

    return theRandomNum;
}

void addElementToArray(int target, int array[], int *counter)
{
    array[*counter] = target;
    *counter += 1;
}

