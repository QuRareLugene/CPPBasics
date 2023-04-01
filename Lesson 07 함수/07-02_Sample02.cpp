// 몇 번이고 함수 호출하기
#include <iostream>
using namespace std;

//buy 함수 정의
void buy(){
    cout <<"차를 구입했습니다.\n";
}

// buy 함수 사용

int main(){
    buy();
    cout << "차량을 또 1대 구입합니다.\n";
    buy();
    return 0;
}