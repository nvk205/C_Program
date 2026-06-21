#include <stdio.h>

int main(){
    int gas_reading[5] = {100, 120, 90, 90, 110};
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + gas_reading[i];
    }
    float gas_average = (float)sum / 5;
    printf("Gia tri trung binh khi gas la: %.3f \n", gas_average);
    
    if (gas_average > 100)
    {
        printf("Nguy hiem!");
    }
    else
    {
        printf("OK!");
    }

    return 0;
}