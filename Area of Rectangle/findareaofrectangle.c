#include <stdio.h>
#include <windows.h>

int areaofRectangle();

int main()
{
    areaofRectangle();
    return 0;
}

int areaofRectangle()
{
    system("color 8a");
    system("cls");
	printf("\n\n\t\t/////////////////////////////////////////////////////////////\n");
    printf("\t\t::::::::::::::::::: Find Area of Rectangle ::::::::::::::::::\n\n");
    int Length, Width, userInput;
    printf("\t\tEnter Length of Rectangle : ");
    scanf("%d", &Length);
    printf("\t\tEnter Width of Rectangle : ");
    scanf("%d", &Width);
    printf("\t\tArea of Rectangle : %d\n\n", Length * Width);
    printf("\tPress 1: To Find Another\n");
    // printf("\tPress 2: Home Page\n\n");
    // printf("\tEnter Your Choice : ");
    scanf("%d", &userInput);
    switch (userInput)
    {
    case 1:
        areaofRectangle();
        break;

    // case 2:
    //     frontPage();
    //     break;
    
    default:
        break;
    }
}