//
// Created by Endi on 27.02.2024.
//

#ifndef DEVICESOOP_HEADPHONES_H
#define DEVICESOOP_HEADPHONES_H


#include <iostream>

using namespace std;
class Headphones {
private:
    string name;
    float weight;
    string type_of_material;
    bool microphone;

public:
    void set_name();
    void get_name();
    void set_weight();
    void get_weight();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_microphone();
    void get_microphone();
    void info();

    Headphones(string &&NameOfHeadphones="None", float Weight=0, string &&TypeOfMaterial="None", bool MICROPHONE=false);
    ~Headphones();
};



#endif //DEVICESOOP_HEADPHONES_H
