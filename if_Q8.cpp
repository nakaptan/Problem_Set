/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x เป็นเลขคู่ ที่มากกว่า 10 และ "NO" ในกรณีอื่น ๆ
*/

#include<iostream>

using namespace std;

int main(){
    int x; 
    cin >> x;
    
    if(x%2 == 0 && x > 10){
        cout << "OK";   
    }else{
        cout << "NO";
    }
}