#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5
#define PENNY 01

int main(void) {
    
    // greet user
    printf("O hai! ");
    
    // get input
    float input;
    do {
        printf("How much change is owed?\n");
        input = get_float();
    } while (input < 0);
    
    // convert money to int
    input = input * 100;
    int money = round(input);

    // instantiate coins count
    int c_count = 0;
    
    // quarters
    if (money >= QUARTER) {
        c_count += (money / QUARTER);
        money = money % QUARTER;
    }
    
    // dimes
    if (money >= DIME) {
        c_count += (money / DIME);
        money = money % DIME;
    }
    
    // nickles
    if (money >= NICKLE) {
        c_count += (money / NICKLE);
        money = money % NICKLE;
    }
    
    // pennies
    c_count += money;
    
    printf("%i\n", c_count);
}

