/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x มีค่าเท่ากับ 5 และ "NO" ในกรณีอื่น ๆ
*/

#include<iostream>

using namespace std;

int main(){
    int x; 
    cin >> x;
    
    if(x == 5){
        cout << "OK";   
    }else{
        cout << "NO";
    }
}
