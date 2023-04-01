// 함수 프로토타입 선언 사용하기
#include <iostream>
using namespace std;

// bigger 함수 선언
int bigger(int x, int y);

// bigger 함수 호출
int main(){
    int num1, num2, ans;

    cout << "첫 번째 정수를 입력하십시오.\n";
    cin >> num1;

    cout << "두 번째 정수를 입력하십시오.\n";
    cin >> num2;

    ans = bigger(num1, num2);

    cout << "둘 중 더 큰 값은 " << ans << "입니다.\n";
    
    return 0;
}

// bigger 함수 정의
int bigger(int x, int y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}