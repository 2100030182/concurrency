#include<bits/stdc++.h>
using namespace std;
#include "student.h"
void washStudent(Student s) {
    cout << "Student " << s.id << " is washing" << endl;
    this_thread::sleep_for(chrono::seconds(s.washingTime));
}
