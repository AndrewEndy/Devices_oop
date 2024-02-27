#include <iostream>
#include "Mouse.h"
#include "Keyboard.h"
#include "Headphones.h"
using namespace std;
int main() {
    Keyboard warmila("Warmila",2,"plactic");
    Mouse logitech("Logitech",0.3,"aluminium",true);
    Headphones hyperx("HyperX",10,"metal",true);

    warmila.info();
    logitech.info();
    hyperx.info();
    return 0;
}
