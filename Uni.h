//
// Created by Alexm on 02.12.2020.
//

#ifndef AUFGABE9_3_UNI_H
#define AUFGABE9_3_UNI_H
#include <string>
#include <vector>
#include "Schüler.h"

using namespace std;

class Kurs{
    int kurs_id;
    string name;
    vector<Student> studentlist;

    static int id_help;

public:
    Kurs(string kursname): name{kursname}, kurs_id{id_help++} {}
    void add_student(Student& student);
    void ausgabe();
    Kurs operator<<(){
        for(const auto& v : studentlist){
            v.grades_out(kurs_id);
        }

    }

};



#endif //AUFGABE9_3_UNI_H
