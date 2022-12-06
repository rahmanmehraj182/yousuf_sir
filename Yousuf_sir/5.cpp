#include <stdio.h>

int main(){
    int a, b, c;

    scnaf("%d %d" , &a, &b);

    c = a;
    a = b;
    b = c;

}
