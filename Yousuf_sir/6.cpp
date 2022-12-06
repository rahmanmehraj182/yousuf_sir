#include <stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    if(num < 0){
        printf("Num is Negative!!");
    }else if(num > 0){
        printf("Num is Positive!!");
    }else{
        printf("Num is Zero!!");
    }


    return 0;
}
