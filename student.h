//#ifndef STUDENT_H
//#define STUDENT_H
#pragma once

#include <iostream>

namespace Daeun2693185
{
    struct student
    {
        int id{};
        char grade{};
    };
    student inputStudent();
    void printStudent(const student &s);
}

//#endif