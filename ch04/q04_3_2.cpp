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

class Company{
private:
    char* company;

public:
    Company(){
    }
    Company(const char* company){
        this->company = new char[strlen(company) + 1];
        strcpy(this->company, company);
    }
    ~Company(){
        delete []company;
    }
    void ShowCompanyInfo(){
        cout << "회사: " << company << endl;
    }
};

class Phone{
private:
    char* phone;

public:
    Phone(){
    }
    Phone(const char* phone){
        this->phone = new char[strlen(phone) + 1];
        strcpy(this->phone, phone);
    }
    ~Phone(){
        delete []phone;
    }
    void ShowPhoneInfo(){
        cout << "전화번호: " << phone << endl;
    }
};

typedef enum {
    CLERK=0, SENIOR=1, ASSIST=2, MANAGER=3
}Position;

class NameCard{
private:
    Name* name;
    Company* company;
    Phone* phone;
    Position position;

    void ShowPositionInfo(){
        switch (this->position)
        {
        case CLERK:
            cout << "CLERK" << endl;
            break;
        case SENIOR:
            cout << "SENIOR" << endl;
            break;
        case ASSIST:
            cout << "ASSIST" << endl;
            break;
        case MANAGER:
            cout << "MANAGER" << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

public:
    NameCard(const char* name, const char* company, const char* phone, Position position):position(position){
        this->name = new Name(name);
        this->company = new Company(company);
        this->phone = new Phone(phone);
    }
    ~NameCard(){
        delete name;
        delete company;
        delete phone;
    }
    void ShowNameCardInfo(){
        name->ShowNameInfo();
        company->ShowCompanyInfo();
        phone->ShowPhoneInfo();
        ShowPositionInfo();
    }
};

int main(void){
    NameCard manClerk("Lee", "ABCEng", "010-123-123", Position::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-234-234", Position::SENIOR);
    NameCard manAssist("Kim", "GoodEng", "010-234-234", Position::ASSIST);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}
