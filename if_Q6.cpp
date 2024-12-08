/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x มีค่าเท่ากับ "C++" และ "NO" ในกรณีอื่น ๆจงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x มีค่าเท่ากับ "C++" และ "NO" ในกรณีอื่น ๆ
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string x; //Now x is string.
    cin >> x;
    
    if(x == "C++"){
        cout << "OK";   
    }else{
        cout << "NO";
    }
}