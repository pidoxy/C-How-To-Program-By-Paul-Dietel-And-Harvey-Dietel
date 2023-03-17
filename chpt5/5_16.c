#include<stdio.h>
#include<math.h>

int area_of_a_triangle( double x,  double y,  double z){
    double s, area;

    if(x <= 0 || y <= 0 || z <= 0){
        printf("The sides of a triangle must be greater than zero");
        return 0;
    }
    // use the triangle inequality theorem
    
    if(x + y > z && x + z > y && y + z > x){
        s = (x + y + z) / 2;
        area = sqrt(s * (s - x) * (s - y) * (s - z));
        printf("\nThe area of the triangle with sides %f, %f and %f is %f \n", x, y, x, area);
        return area;
    }else{
        return 0;
    }
}
int main(){
    area_of_a_triangle(3, 4, 5);
    area_of_a_triangle(5, 12, 13);
    area_of_a_triangle(8, 15, 17);
    area_of_a_triangle(7, 24, 25);
}