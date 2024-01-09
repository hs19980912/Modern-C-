#include <iostream>
#include <initializer_list>
#include <vector>

using namespace::std;

class pages{
    public:
    vector<int> v;
    /*
    pages(){
        cout << "default constructor called" << endl;
    }

    pages(const vector<int>& v){
        cout << "1. pages(const vector<int>& v)" << endl;
        this->v = v;
    }

    pages(initializer_list<int>& vec2){
        cout << "2. pages(const initializer_list<int>& vec2)  called" << endl;
        this->v = vec2;
    }
    */    

    pages(const initializer_list<int>& vec3){
        cout << "3. pages(const initializer_list<int>& vec3)  called" << endl;
        for(initializer_list<int>:: iterator it = vec3.begin(); it!=vec3.end(); ++it){
            this->v.push_back(*it);
        }
    }

};

int main(){
    pages page1{1, 2, 3};      // Both are same.
    pages page2 = {1, 2, 3};   // Both are same. 
}