//
// Created by Alexm on 02.12.2020.
//

#ifndef AUFGABE9_3_SAMMLUNG_H
#define AUFGABE9_3_SAMMLUNG_H
#include "Schüler.h"
#include "Uni.h"

class Sammlung {
    vector<Student> studentlist;
    vector<Kurs> kursliste;

public:
    void add_student();
    void add_kurs();

};

#endif //AUFGABE9_3_SAMMLUNG_H
