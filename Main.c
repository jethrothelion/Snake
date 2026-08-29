#include <stdio.h>
#include <string.h>

int randomNum();
void addElementToArray;

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


    while(1)
    {
        addElementToArray(randomNum(100)
        spawnPoint = randomNum(100);
        charecter[]


        point = randomNum(100);

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

    int randomNum(int range, int[] takenNums)
    //Give random number in a range of numbers
    {
        for (int i = 0; i < rangeOf(takenNums); i++)
        {
            int theRandomNum = min + rand() % (max - min + 1);
            if (takenNums[i] == theRandomNum)
            {
                i -= 1;
            }
            else
            {
                break;
            }
        }
        return theRandomNum;
    }

    void addElementToArray(int target, int[] *array, int *counter)
    {
        *counter =+ 1;
        *array[counter] = target;
    }
}
