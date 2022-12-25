//
// Created by blissedswan on 25/12/22.
//
#include <iostream>
using namespace std;

void hi(char * &);
char *b = static_cast<char*>(malloc(sizeof(char) * 20 ));
int main() {
    //char *b = static_cast<char*>(malloc(sizeof(char) * 8 ));
    b = "1234567";
    hi(b);
    //(b+1) = (3);
    cout<<(b+1);
    cout<<b;
    return 0;
}

void hi(char * &c) {

    free(b);
}