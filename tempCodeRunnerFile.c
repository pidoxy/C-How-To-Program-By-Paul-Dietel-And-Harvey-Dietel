#include<stdio.h>
#include<math.h>

int sides_of_a_triangle (int a, int b, int c)
{
    //double s=0, area=0;//
    if ( a + b > c){

        return 1;
    }
        else if( b + c > a){
            return 1;
        }
        else if ( c + a > b){
            return 1;
        }
        else{
            return 0;
        }


}int area_triangle (int a, int b, int c )
{
    double area, s;
        s = (a + b + c)/2.0;
        area = sqrt(s*(s-a)(s-b)(s-c));
        return area;
        }
int main()
{
    double a,b,c, s, area;
  printf("Enter three sides of a triangle: ");
  scanf("%f%f%f", &a,&b,&c);


      if(sides_of_a_triangle){
            //printf("The area of the triangle is: %lf", area_triangle(a,b,c));////
            printf("The sides represent a triangle\n");
            printf("The area of triangle is : %f", area_triangle (a,b,c));

            //area_triangle(a,b,c);//
      }
      else{
        printf("The sides entered do not represent a triangle");
      }

}