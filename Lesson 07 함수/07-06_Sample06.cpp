// 값을 리턴하는 함수
#include <iostream>
using namespace std;

//buy 함수 정의
int buy(int x, int y){
    int z;

    cout << x << "만원 짜리, "<< y << "만원 짜리 차량을 구입했습니다.\n";

    z = x+y;

    return z;
}

// buy 함수 호출
int main(){
    int num1, num2, sum;

    cout << "구입하시는 차량의 가격은 얼마입니까?\n";
    cin >> num1;

    cout << "두 번째로 구입하려는 차량의 가격은 얼마일까?\n";
    cin >> num2;

    sum = buy(num1, num2);

    cout << "합계 금액은" << sum << "만원입니다.\n";
    
    return 0;
}