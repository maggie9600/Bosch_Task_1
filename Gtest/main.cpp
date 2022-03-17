#include <iostream>
#include "math.h"

using namespace std;

int main(int argc, char *argv[]){
    Calculator c;
    double a = atoi(argv[1]);
    double b = atoi(argv[2]);;
    double s = c.sum( a, b );
    cout<<s<<"\n";
    return 0;
}