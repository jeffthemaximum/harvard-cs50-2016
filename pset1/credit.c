#include <stdio.h>
#include <cs50.h>
#include <math.h>

long long get_cc_num(void);
bool cc_len_validator(long long num);

int main(void){
    long long cc_num = get_cc_num();
    printf("%lli", cc_num);
    
    
}

long long get_cc_num(void) {
    long long cc_num;
    do {
        printf("Number: ");
        cc_num = get_long_long();
    } while (!cc_len_validator(cc_num));
    return cc_num;
}

bool cc_len_validator(long long num) {
    long long bottom = 1000000000000;
    long long top = 10000000000000000;
    if (num < bottom || num > top) {
        return false;
    } else {
        return true;
    }
}

int get_digit_from_end(int num, int position) {
    int modulator = pow(10, position);
    int partial_last = (num % modulator) ;
    return partial_last / (modulator / 10);
}