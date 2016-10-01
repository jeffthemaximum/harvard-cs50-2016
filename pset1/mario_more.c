#include <stdio.h>
#include <cs50.h>

void say(string my_string, int n);
void hash(int n);
void space(int n);
int get_height(void);

int main(void) {
    
    // get height
    int height = get_height();
    
    // instantiate number of hashes and spaces
    int space_count = height - 1;
    int hash_count = 1;
    
    for (int i = 0; i < height; i++) {
        space(space_count);
        hash(hash_count);
        space(2);
        hash(hash_count);
        space(space_count);
        say("\n", 1);
        
        space_count -= 1;
        hash_count += 1;
    }
}

void say(string my_string, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", my_string);
    }
}

void hash(int n) {
    say("#", n);
}

void space(int n) {
    say(" ", n);
}

int get_height(void) {
    int height;
    do {
        printf("Height: ");
        height = get_int();
    } while (height < 0 || height > 23);
    return height;
}