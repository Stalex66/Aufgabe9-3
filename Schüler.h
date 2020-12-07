//
// Created by Alexm on 02.12.2020.
//

#ifndef AUFGABE9_3_SCHÜLER_H
#define AUFGABE9_3_SCHÜLER_H
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Student {
    int index;
    string matrikelnummer;
    string name;
    unordered_map<int,int> noten{}; // Kurs, Note

    static int id_help2;

public:
    void ausgabe_student();
    Student(string name, string matrikelnummer): name{name}, matrikelnummer{matrikelnummer}, index{id_help2}  {id_help2 +=1;}
    void add_grade(int kurs, int note);
    void grades_out(int course);
};


#endif //AUFGABE9_3_SCHÜLER_H
