#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char keepopen[1];

int circle()
{
  float radius;
  printf("Radius: ");
  scanf("%f", &radius);
  double result = M_PI*pow(radius, 2);
  printf("\n Area of this circle is: %lf \n", result);
  scanf("%s",keepopen);
  return 0;
}

int triangle()
{
  float bottomLine;
  float height;
  printf("Height: ");
  scanf("%f", &height);
  printf("bottomline: ");
  scanf("%f", &bottomLine);
  float result = 0.5*bottomLine*height;
  printf("\n Area of this triangle is: %f \n", result);
  scanf("%s",keepopen);
  return 0;
}

int square()
{
  float height;
  float length;
  printf("Length: ");
  scanf("%f", &length);
  printf("Height: ");
  scanf("%f", &height);
  float result = length*height;
  printf("\n Area if this square is: %f \n", result);
  scanf("%s",keepopen);
  return 0;
}

int main(){
  int choice;
  while (choice != 1 && choice != 2 && choice !=3 && choice != 4){
    printf("\nArea calculator! \n");
    printf("Circle   [1]:  \n");
    printf("Triangle [2]:  \n");
    printf("Square   [3]:  \n");
    scanf("%i", &choice);

    switch(choice)
    {
      case 1:
        circle();
        break;
      case 2:
        triangle();
        break;
      case 3:
        square();
        break;
    }
    }
    return 0;
  }
