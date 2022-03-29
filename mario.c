#include<stdio.h>
#include<cs50.h>
//these are libraries

int main (void)
{
    //Get The Height
    int height = get_int("Enter a height: ");
    int counter = height;
    for (int j = 0; j< height; j++)
        {
        for (int i = 0; i < height; i++)
            {
                if (i<counter -1)
                    {
                        printf(" ");
                    }
                else
                    {
                        printf("#");
                    }
            }
        printf("\n");
        counter --;
        }
    //Created a nested loop to do multiple rows
}