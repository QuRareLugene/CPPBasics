// 포인터에 주소 저장하기
#include <iostream>
using namespace std;

int main(){
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "변수 a의 값은 " << a << "입니다.\n";
    cout << "변수 a의 주소(&a)는 " << &a << "입니다.\n";
    cout << "포인터 pA의 값은 " << pA << "입니다.\n";

    return 0;
}