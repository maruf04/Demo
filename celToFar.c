#include <stdio.h>
int main(){
    float cel, far, ans;
    printf("input celcius meter:");
    scanf("%f", &cel);
    far = (9*cel/5)+32;
    printf("fahrenheit meter: %f", far);
    return 0;
}