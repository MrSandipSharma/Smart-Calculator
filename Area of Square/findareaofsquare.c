#include <stdio.h>
#include <windows.h>

int areaofSquare();
int main()
{
    areaofSquare();
    return 0;
}

int areaofSquare()
{
    system("color 8a");
    system("cls");
	printf("\n\n\t\t/////////////////////////////////////////////////////////////\n");
    printf("\t\t:::::::::::::::::::: Find Area of Square ::::::::::::::::::::\n\n");
    int side, userInput;
    printf("\t\tEnter Value of Side : ");
    scanf("%d", &side);
    printf("\t\tArea of Square : %d\n\n", side * side);
    printf("\tPress 1: To Find Another\n");
    // printf("\tPress 2: Home Page\n\n");
    // printf("\tEnter Your Choice : ");
    scanf("%d", &userInput);
    switch (userInput)
    {
    case 1:
        areaofSquare();
        break;
        
    // case 2:
    //     frontPage();
    //     break;

    default:
        break;
    }
}