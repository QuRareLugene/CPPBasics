// 표준 라이브러리 strlen 함수 사용하기
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[100];
    cout << "문자열 (영문자 및 숫자)를 입력하십시오.\n";

    cin >> str;
    cout << "문자열의 길이는 " << strlen(str) << "입니다.\n";

    return 0;
}