//
// Created by Alexm on 02.12.2020.
//

#ifndef AUFGABE9_3_SAMMLUNG_H
#define AUFGABE9_3_SAMMLUNG_H
#include "Schüler.h"
#include "Uni.h"
using namespace std;

class Sammlung {
    unordered_map<int,Student>studentlist;
    unordered_map<int,Kurs> kursliste;

public:
    void add_student();
    void add_kurs();
    void add_results();
    void testausgabe();

};

#endif //AUFGABE9_3_SAMMLUNG_H
