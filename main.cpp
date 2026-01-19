#include<bits/stdc++.h>
using namespace std;
#include "student.h"
int main() {
    Student s{1, 2, 3};
    thread t(washStudent, s);
    t.join();
    return 0;
}
