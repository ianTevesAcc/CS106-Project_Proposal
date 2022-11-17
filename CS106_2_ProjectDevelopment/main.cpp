#include "mainwindow.h"

#include <QApplication>
#include <stdio.h>
#include <iostream>

using namespace std;

int Mult(int n1, int n2) {
    return n1*n2;
}

int main() {
    int x = 2;
    int y = 3;
    int m = Mult(x,y);
    printf("%d",m);
    return 0;
}

//void do_student(){
//    // stack memory

////     homework student(nullptr, "first"); // stack object
////     student.print_info();

//    // heap memory

////    homework* student = new homework(nullptr, "first");
////    student->print_info();
////    ~homework;
//}
