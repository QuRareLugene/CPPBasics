// 입력한 수 만큼 *를 출력하기
#include <iostream>
using namespace std;

int main(){

    int num;

    cout <<"몇 개의 *를 출력하시겠습니까?\n";

    cin >> num;

    for(int i=1;i<num;i++){
        cout << "*";
    }
    cout << "반복이 끝났습니다.\n";

    return 0;
}