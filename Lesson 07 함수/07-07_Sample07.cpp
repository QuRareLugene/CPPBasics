// 합을 구하는 함수
#include <iostream>
using namespace std;

// sum 함수 정의
int sum(int x, int y){
    return x+y;
}

// buy 함수 호출
int main(){
    int num1, num2, ans;

    cout << "첫 번째 정수를 입력하십시오.\n";
    cin >> num1;

    cout << "두 번째 정수를 입력하십시오.\n";
    cin >> num2;

    ans = sum(num1, num2);

    cout << "두 수의 합은" << ans << "입니다.\n";
    
    return 0;
}