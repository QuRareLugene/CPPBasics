// 실인수를 변수값으로 만들기
#include <iostream>
using namespace std;

//buy 함수 정의
void buy(int x){
    cout << x << "만원 짜리 차량을 구입했습니다.\n";
}

// buy 함수 호출
int main(){
    int num;

    cout << "첫 번째로 구입하려는 차량의 가격은 얼마입니까?\n";
    cin >> num;

    buy(num);

    cout << "두 번째로 구입하려는 차량의 가격은 얼마일까?\n";
    cin >> num;

    buy(num);
    
    return 0;
}