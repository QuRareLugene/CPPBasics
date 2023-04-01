// for문 중첩하기
#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout << "i는 " << i << ", j는 " << j << "입니다.\n";
        }
    }

    return 0;
}