# include<stdio.h>

int main(){
    // show the original logical expression and its De' morgan's equivalent
    printf("S/N | Original\tDe' Morgan's equivalent\n\n");
    //a original
    int x = 1;
    int y = 2;
    printf("a.  | \t");
    printf("%d \t %d \n    |\n", !(x < 5) && !(y >= 7), !((x < 5) || (y >= 7) ));

    // b original
    int a = 3;
    int b = 8;
    int g = 9;
    printf("b.  | \t");
    printf("%d \t %d \n    |\n", !(a == b) || !(g != 5), !((a == b) && (g != 5)));

    // c original
    printf("c.  | \t");
    printf("%d \t %d \n    |\n", !((x <= 8) && (y > 4)), !(x <= 8) || !(y > 4));

    // d original
    int i = 6;
    int j = 6;
    printf("d.  | \t");
    printf("%d \t %d \n    |\n", !((i > 4) || (j <= 6)), !(i > 4) && !(j <= 6));  


}