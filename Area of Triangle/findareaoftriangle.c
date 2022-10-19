#include <stdio.h>
#include <windows.h>

int areaofTriangle();
int main()
{
    areaofTriangle();
    return 0;
}

int areaofTriangle()
{
    system("color 8a");
    system("cls");
	printf("\n\n\t\t/////////////////////////////////////////////////////////////\n");
    printf("\t\t::::::::::::::::::: Find Area of Triangle :::::::::::::::::::\n\n");
    int base, height, userInput;
    printf("\t\tEnter base of Triangle : ");
    scanf("%d", &base);
    printf("\t\tEnter height of Triangle : ");
    scanf("%d", &height);
    printf("\t\tArea of Triangle : %d\n\n",base * height/2);
    printf("\tPress 1: To Find Another\n");
    // printf("\tPress 2: Home Page\n\n");
    // printf("\tEnter Your Choice : ");
    scanf("%d", &userInput);
    switch (userInput)
    {
    case 1:
        areaofTriangle();
        break;
    
    // case 2:
    //     frontPage();
    //     break;
    
    default:
        break;
    }
}