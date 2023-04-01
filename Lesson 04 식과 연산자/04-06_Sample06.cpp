// 복합 대입 연산자 사용하기
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int num = 0;

    cout << "첫번째 숫자를 입력하십시오\n";
    cin >> num;
    sum += num;
    cout << "두번째 숫자를 입력하십시오\n";
    cin >> num;
    sum += num;
    cout << "세번째 숫자를 입력하십시오\n";
    cin >> num;
    sum += num;
    
    cout << "3개 정수의 합은 " << sum << "입니다.\n";

    return 0;
}