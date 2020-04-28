#include <iostream>
struct S {
    unsigned char b1 : 3;
    unsigned char : 0; 
    unsigned char b2 : 6;  
    unsigned char b3 : 2;  
};

int main(){
    std::cout<<"Ukuan Struktur S = "<< sizeof(S) ; 
}
