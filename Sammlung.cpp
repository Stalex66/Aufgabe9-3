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
    string c;
    cin >> a >> b >> c;
    Student  newstudent{b,c};
    studentlist.insert_or_assign(a,newstudent);

};
void Sammlung::add_kurs(){
    cout << "Enter course name";
    string a;
    cin >> a;
    Kurs  newkurs{a};
    kursliste.insert_or_assign(a);
}
void Sammlung::add_grade(){
    cout << "Please enter the course id, student id and grade\n";
    int a;
    string b;
    int c;
    cin >> a >> b >> c;
    studentlist.at(b).add_grade(a,c);


}

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
