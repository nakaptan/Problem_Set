/*
จงเติมส่วนของโปรแกรในช่องว่างให้สมบูรณ์ หากต้องการให้พิมพ์คำว่า "OK" เมื่อ x เป็น 3 หรือ 4 หรือ 5 และ "NO" ในกรณีอื่น ๆ
*/

// ใน C++ จะมี Logical Operators

/*-------------------------------------------------------------------------------------------------
&& 	Logical and	Returns true if both statements are true --> e.g. x < 5 &&  x < 10	
|| 	Logical or	Returns true if one of the statements is true --> e.g. x < 5 || x < 4	
!	Logical not	Reverse the result, returns false if the result is true	--> e.g. !(x < 5 && x < 10)
-------------------------------------------------------------------------------------------------*/

#include<iostream>

using namespace std;

int main(){
    int x; 
    cin >> x;
    
    if(x == 3 || x == 4 || x == 5){
        cout << "OK";   
    }else{
        cout << "NO";
    }
}