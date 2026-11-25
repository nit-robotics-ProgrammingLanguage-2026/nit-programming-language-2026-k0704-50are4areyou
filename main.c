#include <stdio.h>

int calculation(int value){
    static int sum = 0;
    sum += value;
    return sum;
}
int main(void){
    int input, a = 0;
    scanf("%d", &input);
    if (input < 1 || input > 10){
        printf("NG");
        return 0;
    }
     for (int i = 1; i <= input; i++){
        a = calculation(i * 2);
    } 
    printf("%d", a);

    return 0;
}
