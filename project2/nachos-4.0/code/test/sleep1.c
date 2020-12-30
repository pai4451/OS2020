#include "syscall.h"

int main(){
    int i;
    for(i = 0; i < 4; i++) {
        Sleep(500000);
        PrintInt(8888);
    }
    return 0;
}