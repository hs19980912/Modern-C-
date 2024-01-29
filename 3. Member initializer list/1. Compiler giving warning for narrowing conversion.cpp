#include <iostream>
using namespace::std;

class Student{
private:
    char _id;

public:
    Student(int id): _id{id}{}

    char getId(){ 
        return _id;
    }
};

int main(){

    Student s(500);
    cout << s.getId();
    return 0;
}