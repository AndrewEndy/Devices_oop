#include <iostream>
#include "Mouse.h"
#include "Keyboard.h"
#include "Headphones.h"
#include "MechanicKeyboard.h"
#include "InEarHeadphones.h"
#include "GamingMouse.h"
using namespace std;
int main() {
//  Copy constructor
//    Keyboard warmila("Warmila",2,"plastic");
//    Keyboard jonson(warmila);
//    jonson.set_name("Jonson");
//    warmila.info();
//    jonson.info();

// Move constructor
//    Headphones apple("Apple",0.6,"plastic",true);
//    Headphones sony(move(apple));
//    sony.set_name("Sony");
//    sony.info();
//    apple.info();

//  модифікатор const
//    const Keyboard warmila("Warmila",1.2,"plastic");
//    Keyboard doss("Doss",2.0,"metal");
//    doss.set_weight(3);

//  модифікатор static
//    Mouse apple("Apple",0.4,"plastic");
//    cout<<apple.get_amountOfMice()<<endl;
//    Mouse a;
//    Mouse b;
//    cout<<a.get_amountOfMice()<<endl;
//    cout<<b.get_amountOfMice()<<endl;

//  перевантаження унарного оператора
//    Mouse apple("Apple",0.5,"plastic", true);
//    --apple;
//    apple.info();
//    ++apple;
//    ++apple;
//    apple.info();

//  перевантаження бінарного оператора
//    Mouse apple("Apple",0.5,"plastic", true);
//    apple+0.6;
//    apple.info();
//    apple-0.9;
//    apple.info();
//    apple-=0.1;
//    apple.info();
//    apple+=1;
//    apple.info();

//  Оператор присвоєння =
//    Mouse apple("Apple",0.5,"plastic", true);
//    Mouse basic;
//    basic=apple;
//    basic.set_name("Basic");
//    basic.info();
//    apple.info();

//  перевантаження дружніх операторів stream exctraction та stream insertion (>>, <<)
//    Mouse apple;
//    cin>>apple;
//    cout<<apple;

//    Наслідування Copy constructor
//    MechanicKeyboard warmila("Warmila",3,"metal","black");
//    MechanicKeyboard rajion(warmila);
//    rajion.set_name("Rajion");
//    rajion.info();
//    warmila.info();

//  Наслідування Move constructor
//    InEarHeadphones a("a",1.9,"plastic",true,true);
//    InEarHeadphones b(move(a));
//    b.set_name("b");
//    b.info();
//    a.info();

//  Наслідування оператора =
//    GamingMouse cros("Cros",0.8,"plastic",true,3, false);
//    GamingMouse royal;
//    royal=cros;
//    royal.set_AdditionalButtons(4);
//    royal.set_name("Royal");
//    cros.info();
//    royal.info();

    return 0;
}
