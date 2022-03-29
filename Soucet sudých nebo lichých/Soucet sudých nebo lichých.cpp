#include <stdio.h>

int soucet(cislo) {
    
    int suda = 1;
    for (int i = 1; i <= cislo; i += 2) {
    
        suda += i;
    }
    return suda;
}

int main() {
    
    printf("Soucet sudych: %d\n", soucet(5));
}