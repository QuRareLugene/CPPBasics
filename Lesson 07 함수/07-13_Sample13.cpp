// 함수 템플릿 사용하기
#include <iostream>
using namespace std;

// 함수 템플릿
template <class T>
T bigger(T x, T y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int a, b;
    double da, db;

    cout << "정수 2개를 입력하십시오.\n";
    cin >> a >> b;

    cout << "소수 2개를 입력하십시오.\n";
    cin >> da >> db;

    int ans1 = bigger(a, b);
    double ans2 = max(da, db);

    cout << "두 정수 중 더 큰 값은 " << ans1 << "입니다.\n";
    cout << "두 소수 중 더 큰 값은 " << ans2 << "입니다.\n";

    return 0;
}