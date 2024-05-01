#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(char* name, int age){
        int len = strlen(name)+1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->age = age;
    }
    Person()
    {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }
    void SetPersonInfo(char* name, int age){
        this->name = name;
        this->age = age;
    }
    void ShowPersonInfo() const{
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << endl;
    }
    ~Person(){
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main(void){
    Person* parr[3];
    char namestr[100];
    int age;

    for (int i = 0; i < 3; i++){
        cout << "이름: ";
        cin >> namestr;
        cout << "이름 길이: " << strlen(namestr) << " 나이: ";
        cin >> age;
        parr[i] = new Person(namestr, age);
    }

    for (int i = 0; i < 3; i++){
        parr[i]->ShowPersonInfo();
    }

    for (int i = 0; i < 3; i++){
        delete parr[i];
    }
    
    return 0;
}