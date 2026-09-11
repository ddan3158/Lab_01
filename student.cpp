#include "student.h"


namespace Daeun2693185
{
    student inputStudent(){
        student s;
        std::cout<<"학생 아이디를 입력하시오:";
        std::cin>>s.id;
        std::cout<<"학생 성적을 입력하시오:";
        std::cin>>s.grade;
        return s;
    }
    void printStudent(student &s){
        std::cout<<"ID:"<<s.id<<std::endl;
        std::cout<<"Grade:"<<s.grade<<std::endl;
    }
}