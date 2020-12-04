//
// Created by Alexm on 02.12.2020.
//

#include "Sammlung.h"
#include <iostream>
#include <string>
using namespace std;




void Sammlung::add_student(){
    cout << "Enter ID, name and matrikelnummer";
    int a;
    string b;
    int c;
    cin >> a >> b >> c;
    Student  newstudent{b,c};
    studentlist[a] = newstudent;

};
// void Sammlung::add_kurs(){};

/*void Sammlung::add_results() {
    cout << "Enter student id, you want to add results for\n";
    int i;
    cin >> i;
    auto student = kursliste.find(i);
    student.
}*/
void Sammlung::testausgabe(){
    for(auto v : studentlist)
        v.second.ausgabe_student();

}
