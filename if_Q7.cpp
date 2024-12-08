/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "Hello " แล้วตามด้วยค่าของตัวแปร name เมื่อ name มีค่าเท่ากับ "Alice" และ "Bye" ในกรณีอื่น ๆ
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    cin >> name;
    
    if(name == "Alice"){
        cout << "Hello " << name;
    }else{
        cout << "Bye";
    }
}