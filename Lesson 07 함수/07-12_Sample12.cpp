// 함수를 오버로드하기
#include <iostream>
using namespace std;

// bigger 함수 선언
int bigger(int x, int y);
double bigger(double x, double y);

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

// bigger 함수 (int 형) 정의
int bigger(int x, int y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}

// bigger 함수 (double 형) 정의
double bigger(double x, double y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}