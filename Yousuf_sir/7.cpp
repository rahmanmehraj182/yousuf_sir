#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);

    if(a == 'e' || a == 'a' || a == 'i' || a == 'o' || a == 'u'){
        printf("%c is a vowel! \n", a);
    }
    else{
        printf("%c is a Consonant! \n", a);
    }


    return 0;
}
