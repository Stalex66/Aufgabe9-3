//
// Created by Alexm on 02.12.2020.
//

#include <iostream>
#include <vector>
#include <string>
#include "Uni.h"
#include "Schüler.h"
#include "Sammlung.h"

using namespace std;

int main (){
    /*string eingabe{"Einführung in die Dummheit"};
    string eingabe2 {"test"};
Kurs uniwien {eingabe};
Kurs test{eingabe2};
uniwien.ausgabe();
test.ausgabe();*/

Sammlung tuwien;
tuwien.add_student();
tuwien.testausgabe();

system("pause");


}
