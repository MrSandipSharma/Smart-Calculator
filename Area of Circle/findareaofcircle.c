#include <stdio.h>
#include <windows.h>
#define PI 3.141592653589793238

int areaofcircle();
int main()
{
    areaofcircle();
    return 0;
}

int areaofcircle()
{
    system("color 8a");
    system("cls");
	printf("\n\n\t\t/////////////////////////////////////////////////////////////\n");
    printf("\t\t:::::::::::::::::::: Find Area of Circle ::::::::::::::::::::\n\n");
    int radius, userInput;
    printf("\t\tEnter Radius of circle : ");
    scanf("%d", &radius);
    printf("\t\tArea of Circle : %f\n\n",PI * radius * radius);
    printf("\tPress 1: To Find Another\n");
    // printf("\tPress 2: Home Page\n\n");
    // printf("\tEnter Your Choice : ");
    scanf("%d", &userInput);
    switch (userInput)
    {
    case 1:
        areaofcircle();
        break;

    // case 2:
    //     frontPage();
    //     break;
    
    default:
        break;
    }
}