#include<bits/stdc++.h>
using namespace std;

#include "student.h"

mutex washMutex;

void washStudent(Student s) {
    washMutex.lock();
    cout << "Student " << s.id << " started washing" << endl;
    washMutex.unlock();

    this_thread::sleep_for(chrono::seconds(s.washingTime));

    washMutex.lock();
    cout << "Student " << s.id << " finished washing" << endl;
    washMutex.unlock();
}
