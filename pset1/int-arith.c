//Integer arithmetic

#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i plus %i is %i\n" ,x, y, x+y);
    printf("%i minus %i is %i\n", x, y, x-y);
    printf("%i times %i is %i\n", x, y, x* y);
    printf("%i divided by %i is %i\n", x, y, x/y);
    printf("remainder of %i divided by %i is %i\n", x, y, x % y);
}