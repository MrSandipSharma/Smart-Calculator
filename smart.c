#include <stdio.h>
#include "findareaofrectangle.c"
#include "findareaofsquare.c"
#include "findareaoftriangle.c"
#include "findareaofcircle.c"

void frontPage();

int main()
{
    frontPage();
    return 0;
}

void frontPage()
{
    system("color 8a");
    system("cls");
	printf("\n\n\t\t/////////////////////////////////////////////////////////////\n");
    printf("\t\t::::::::::::::::::::: SMART CALCULATOR ::::::::::::::::::::::\n\n");
    printf("\t\t\tPress 1 : To Find Area of Circle\n \t\t\tPress 2 : To Find Area of Triangle\n");
	printf("\t\t\tPress 3 : To Find Area of Rectangle\n \t\t\tPress 4 : To Find Area of Square\n\n");
    int input;
    printf("\t\tEnter Your Choice : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        areaofcircle();
        break;

    case 2:
        areaofTriangle();
        break;

    case 3:
        areaofRectangle();
        break;

    case 4:
        areaofSquare();
        break;
    
    default:
        break;
    }
}