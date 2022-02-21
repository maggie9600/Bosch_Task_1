#include <iostream>
#include "math.h"

using namespace std;

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = sum( a, b );

    cout<<c;

    return 0;
}