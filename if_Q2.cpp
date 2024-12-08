/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "GOOD" เมื่อ x มีค่ามากกว่าหรือเท่ากับ 100 และ "NO" ในกรณีอื่น ๆ
*/

#include<iostream>

using namespace std;

int main(){
    int x; 
    cin >> x;
    
    if(x >= 100){
        cout << "GOOD"; 
    }else{
        cout << "NO";
    }
}