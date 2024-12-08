/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x มีค่ามากกว่า 0 และ "NO" ในกรณีอื่น ๆ
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x > 0){
        cout << "OK";
    }
    else{
        cout << "NO";
    }
    return 0;
}