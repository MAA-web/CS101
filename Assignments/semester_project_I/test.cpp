//
// Created by blissedswan on 25/12/22.
//
#include <iostream>
#include <fstream>
using namespace std;

int len(string);
char * convert_to_charStar(string);

int main() {
    fstream file;
    file.open("cities.txt", ios::in);
    string c;
    srand(time(0));
    int h;
    while(true) {
        int g = (rand() % 22632);
        if(g <= 4300) {
            //cout << g;
            h = g;
            break;
        }
    }
    int j = 0;
    string l;
    while(getline(file, c))
    {
        j++;
        if( j == h) {
            l = c;
            break;
        }
    }
    cout<<l<<endl;
    cout<<len(l)<<endl;
    cout<<convert_to_charStar(l);
}

int len(string l) {
    int j = 0;
    for (int i = 0; l[i] != '\0'; i++) {
        //cout<<l[i];
        j = i;
    }
    return j + 1;
}

char * convert_to_charStar(string l){
    int length = len(l);
    char * c = static_cast<char *>(malloc(sizeof(char) * length));
    for (int i = 0; i < length; i++) {
        c[i] = l[i];
    }
    return c;
}