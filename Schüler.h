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
    int matrikelnummer;
    string name;
    unordered_map<int,int> noten{}; // Kurs, Note

    static int id_help2;

public:
    void ausgabe_student();
    Student(string name, int matrikelnummer): name{name}, matrikelnummer{matrikelnummer}, index{id_help2}  {id_help2 +=1;}
};


#endif //AUFGABE9_3_SCHÜLER_H
