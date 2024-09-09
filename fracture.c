#include <stdio.h>
#include <math.h>


//define PI for functions
#define PI 3.14159265358979323846



//ask for user input 
double askForUserInput()
{
    double x; 
    printf(""); 
    scanf("%lf", &x);
    return x;
}

/*- goal: asks user to give 4 points and calculates the distance between them
- returns: calculated distance*/
double calculateDistanceBetweenPoints()
{
    //create variables to store the points, and one variable to store the distance
    double x1, x2, y1, y2,distance; 


    //ask user to enter 4 points (points will be used to calculate the distance)
    printf("Please enter your points:\n");

    printf("x1: ");
    x1 = askForUserInput();
    printf("y1: ");
    y1 = askForUserInput();

    printf("x2: ");
    x2 = askForUserInput();

    printf("y2: ");
    y2 = askForUserInput();


    //print out points to user 
    printf("Point #1 entered: x1= %.2lf, y1= %.2lf\n", x1, y1);
    printf("Point #2 entered: x2= %.2lf, y2= %.2lf\n", x2, y2);
    

    //calculate distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    
    //return calculated distance to user
    return distance; 
}


/*- goal: asks user to give 4 points and calculates the distance between them, prints the distance
to the user
- returns: calculated distance*/
double calculateDistance()
{

    //create variable to store distance and call calculate distance variable
    double distance = calculateDistanceBetweenPoints();


    //this prints the calculated distance to the user
    printf("The distance between the given points is: %.2f\n", distance);


    //returns calculated distance
    return distance; 
}



/*- goal: asks user to give 4 points and calculates the perimeter of the city based on 
those 4 points. Prints the calculated perimeter to the user.
- returns: difficulty making function*/

double calculatePerimeter()
{

    //create variables to store distance and radius which will be used to calculate perimeter
    double distance = calculateDistanceBetweenPoints(); 
    double radius = distance / 2;

    //calculate perimeter
    double perimeter = 2 * PI * radius; 


    //print calculated perimeter to user 
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);


    //return how difficult it was to make this function
    return 2.5;
}


/*- goal: asks user to give 4 points and calculates the area of the city based on 
the points provided by the user. Prints area to user
- returns: difficulty making this function*/
double calculateArea()
{

    //create distance and radius variables which wull be used to calculate area 
    double distance = calculateDistanceBetweenPoints();
    double radius = distance / 2;

    //variable that stores calculated area
    double area = PI * pow(radius, 2);


    //print area to user 
    printf("\nThe area of the circle is: %.2f\n", area);


    //return how difficult it was to make this function
    return 2.0; 
}



/*- goal: asks user to give 4 points and calculates the distance width of the city based on 
them. Prints the calculated width
- returns: difficulty of making function*/
double calculateWidth()
{
    double distance = calculateDistanceBetweenPoints();
    
    printf("The width of the city encompassed by your request is: %.2f\n", distance);
    
    return 1.0;
}




/*- goal: asks user to give 4 points and calculates the height of the city based on those four points
this function prints the calculated height
- returns: calculated difficulty of making function*/
double calculateHeight()
{
    //create variable to store distance (height)
    double distance = calculateDistanceBetweenPoints();


    //print height to user
    printf("The height is: %.2f\n", distance);


    //return difficulty creating this function
    return 1.5; 
}


//main function
int main(int argc, char **argv) {

    //call all the functions
    calculateDistance(); // Compute and store distance

    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

