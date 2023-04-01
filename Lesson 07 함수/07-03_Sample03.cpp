// 인수를 받는 함수 사용하기
#include <iostream>
using namespace std;

//buy 함수 정의
void buy(int x){
    cout << x << "만원 짜리 차량을 구입했습니다.\n";
}

// buy 함수 호출
int main(){
    buy(20);
    buy(50);
    return 0;
}