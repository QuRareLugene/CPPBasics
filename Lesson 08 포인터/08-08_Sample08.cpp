// 레퍼런스 사용하기
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int &rA = a;

    cout << "변수 a의 값은 " << a << "입니다.\n";
    cout << "레퍼런스 rA 값은 " << rA << "입니다.\n";

    rA = 50;

    cout << "rA에 50을 대입했습니다.\n";
    cout << "레퍼런스 rA의 값은 " << rA << "로 변경되었습니다.\n";
    cout << "변수 a의 값도 " << a << "로 변경되었습니다.\n";
    cout << "변수 a의 주소는 " << &a << "입니다.\n";
    cout << "레퍼런스 rA의 주소도 " << &rA << "입니다.\n";

    return 0;
}

void swap(int* pX, int* pY){
    int tmp;
    tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}