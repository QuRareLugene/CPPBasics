// 잘못된 함수 사용해 보기
#include <iostream>
using namespace std;

// 잘못된 swap 함수 선언
void swap(int x, int y);

int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "변수 num1의 값은 " << num1 << "입니다.\n";
    cout << "변수 num2의 값은 " << num2 << "입니다.\n";
    cout << "변수 num1과 num2의 값을 교환합니다.\n";

    swap(num1, num2);

    cout << "변수 num1의 값은 " << num1 << "입니다.\n";
    cout << "변수 num2의 값은 " << num2 << "입니다.\n";

    return 0;
}

void swap(int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}