// break문으로 블록에서 빠져나오기
#include <iostream>
using namespace std;

int main(){

    int res;

    cout << "몇 번쨰 반복시에 루프를 빠져 나가시겠습니까? (1~10)\n";
    cin >> res;

    for(int i=1;i<10;i++){
        cout << i << "번쨰 처리입니다.\n";
        if(i==res){
            break;
        }
    }

    return 0;
}