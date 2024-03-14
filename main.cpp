#include <iostream>
#include "Mouse.h"
#include "Keyboard.h"
#include "Headphones.h"
#include "MechanicKeyboard.h"
#include "InEarHeadphones.h"
#include "GamingMouse.h"
#include "Printable.h"
using namespace std;


ostream &operator<<(ostream &os, const Printable &obj) {
    obj.print(os);
    return os;
}

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
//
//проблему статичної прив’язки методів (Static Method Binding)
//    Keyboard a;
//    MechanicKeyboard b;
//    Keyboard *p=&b;
//    p->doSomething();
//
// (Run-time) поліморфізму
//    Mouse a;
//    GamingMouse b;
//    Mouse *p=&a;
//    p->info();
//
// virtual destructor
//    Keyboard *a=new MechanicKeyboard;
//    delete a;
//
//final
//    GamingMouse a;
//    a.Click();
//
// Base class reference
//    InEarHeadphones a;
//    Headphones b;
//    Headphones &pos = b;
//    pos.print_name_class();
//
// Pure virtual function + інтерфейс
//    MechanicKeyboard a("rty",2.4,"metal","green");
//    cout << a;
//    GamingMouse a("wirma",1.3,"plastic",true,3,true);
//    cout<<a;
//    InEarHeadphones a("warmila",4,"plastic",true,false);
//    cout<<a;
//
// 7
//    InEarHeadphones a;
//    a.print_class_name();
    return 0;
}
