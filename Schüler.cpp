//
// Created by Alexm on 02.12.2020.
//

#include "Schüler.h"
#include <iostream>
using namespace std;
void Student::ausgabe_student(){
    cout << index << name << matrikelnummer << "\n";

}
void Student::add_grade(int kurs, int note){
    noten.insert_or_assign(kurs,note);

};
void grades_out(int course){
    cout << name << note.at(course);


}
int Student::id_help2=0;

