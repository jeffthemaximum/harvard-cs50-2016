#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int height;
    do {
        printf("height: ");
        height = get_int();
    } while (0 > height || height > 23);
    
    for (int i = 0; i < height; i++) {
        for (int j = height - i - 1; j > 0; j--) {
            printf(" ");
        }
        for (int k = i + 2; k > 0; k--) {
            printf("#");
        }
        printf("\n");
    }
}