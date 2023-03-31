// 2개 이상의 숫자를 연속해서 입력받기
#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "정수를 2개 입력하십시오.\n";

    cin >> num1 >> num2;
    
    cout << "먼저 " << num1 << "이 입력되었습니다.\n";
    cout << "다음 " << num2 << "이 입력되었습니다.\n";

    return 0;
}