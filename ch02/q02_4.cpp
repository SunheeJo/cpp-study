#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char str[] = "hello";
    char str2[] = "Hi";
    cout << "문자열 길이: " << strlen(str) << endl;
    cout << "문자열의 뒤에 덧붙이기: " << strcat(str, str2) << endl;
    cout << "str: " << str << ", str2: " << str2 << endl;
    cout << "문자열 복사: " << strcpy(str2, "1") << endl;
    cout << "str: " << str << ", str2: " << str2 << endl;
    cout << "문자열의 비교: " << strcmp(str, str2) << endl;
    cout << "str: " << str << ", str2: " << str2 << endl;
    /* strcpy 사용 시 배열 길이 주의 */

    return 0;
}