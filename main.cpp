#include <iostream>

namespace Daeun2693185
{
    struct student
    {
        int id{};
        char grade{};
    };
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

int main()
{
    using namespace std;
    using namespace Daeun2693185;

    student s1{inputStudent()};
    student s2{inputStudent()};
    
    printStudent(s1);
    printStudent(s2);

    return 0;
}