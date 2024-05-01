#include <iostream>
#include <cstring>
using namespace std;

class Name{
private:
    char* name;

public:
    Name(){
    }
    Name(const char* name){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    ~Name(){
        delete []name;
    }
    void ShowNameInfo(){
        cout << "이름: " << name << endl;
    }
};

int main(void){
    Name* name = new Name("hello");
    name->ShowNameInfo();

    return 0;
}