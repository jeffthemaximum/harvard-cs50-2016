#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("height: ");
    int height = get_int();
    for (int i = 0; i < height; i++) {
        printf("%i\n", i);
    }
}