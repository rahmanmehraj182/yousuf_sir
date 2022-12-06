#include <stdio.h>

int takeInput(){
    int choice;

    printf("Enter your choice to perform an Mathmatical Operation: \n");
    printf("Press 1 to add\nPress 2 to substract\nPress 3 to multiply\nPress 4 to divide: \n");
    scanf("%d", &choice);

    return choice;
}

int makeSum(int a, int b){
    return a + b;
}

int main(){
    int input ;

    input = takeInput();



    if(input == 1){
        int a , b, sum;
        printf("Enter two value");
        scanf("%d %d", &a, &b);
        sum = makeSum(a, b);
        printf("Sum is : %d", sum);
    }

    return 0;
}
