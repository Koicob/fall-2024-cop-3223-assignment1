//****************************************************************************
//Fracturing.c
//Author: Jacob Wolford
//UCFID: 5677733
//Date: September 3rd, 2024
// COP 3223 Professor Parra
// Purpose: The purpose of the assignment is to get the user to input  postions in 
//X1, X2, Y1, Y2 format to calculate Distance, Perimeter, Area, Width, and height 
//of these postions
// Input: X1, Y1, X2, Y2 postions
//
// Output: The Distance, Perimeter, Area, Width, and height of these postions
//****************************************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance();         //    Calculates the Distance  
double calculatePerimeter();       //    Calculates the Perimeter
double calculateArea();           //    Calculates the Area
double calculateWidth();         //    Calculates the Width
double calculateHeight();       //    Calculates the Height

int main(int argc, char **argv) {

    double distance = calculateDistance(); 
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();

    return 1;
} //main

//****************************************************************************
//double calculateDistance()
//
//Purpose: To calculate the Distance of the inputs
//Ouput:The Distance
//Precondition:X1,X2,Y1,Y2
//Postcondition: None
//****************************************************************************

double calculateDistance() { //OBJECTIVE: Asks users for input and calcs the distance
    double x1, x2, y1, y2, distance;

    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("x2 = %.3f; y2 = %.3f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
} //calculateDistance

//****************************************************************************
//double calculatePerimeter()
//
//Purpose: To calculate the Perimeter of the inputs
//Ouput:The Perimeter
//Precondition:X1,X2,Y1,Y2
//Postcondition: None
//****************************************************************************

double calculatePerimeter() { //OBJECTIVE: Asks users for input and calcs the perimeter
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2);

    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 2.0; 
} //calculatePerimeter()

//****************************************************************************
//double calculateArea()
//
//Purpose: To calculate the Area of the inputs
//Ouput:The Area
//Precondition:X1,X2,Y1,Y2
//Postcondition: None
//****************************************************************************

double calculateArea() { //OBJECTIVE: Asks users for input and calcs the Area
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;

    printf("The area of the city encompassed by your request is %.3f\n", area);

    return 4.0; 
}//calculateArea()

//****************************************************************************
//double calculateWidth()
//
//Purpose:To calculate the Width of the inputs 
//Ouput:The Width
//Precondition: X1,X2,Y1,Y2
//Postcondition: None
//****************************************************************************

double calculateWidth() { //OBJECTIVE: Asks users for input and calcs the width
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.3f\n", distance);

    return 2.0; 
}//calculateWidth

//****************************************************************************
//double calculateHeight()
//
//Purpose:To calculate the Height of the inputs
//Ouput:The Height
//Precondition: X1,X2,Y1,Y2
//Postcondition: None
//****************************************************************************

double calculateHeight() { //OBJECTIVE: Asks users for input and calcs the Height
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %.3f\n", distance);

    return 2.0; 
}//calculateHeight
