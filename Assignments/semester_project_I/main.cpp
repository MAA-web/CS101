#include <iostream>

using namespace std;
/*namespace salted_potato  {

};*/
int lena{0}, lenb{0};

char * add(const char *,const char *);
void addEql(char* &a, char* &b);
char getChar(char * &, int);
void setChar(char * &, int, char);
bool isEqual(char * , char * );
bool isGreater(char *, char *);
bool isSmaller(char *, char *);
char * getSubstring(char *, int, int);
char * shiftLeft(char * & ,int);
//char *b = static_cast<char*>(malloc(sizeof(char) * 8 ));
int main() {
    char *a = "ABCDEFG";
    char *b = "1234567";


    for (int i = 0; a[i] != '\0' ; i++) {
        lena++;
    }
    for (int i = 0; b[i] != '\0' ; i++) {
        lenb++;
    }

    cout<<"add: "<<add(a, b)<<endl;
    //addEql(a, b);
    //cout<<"addEql: "<<a<<endl;
    cout<<"getChar: "<<getChar(a, 1)<<endl;
    char ch = '1';
    setChar(b,4,ch);
    cout<<"setChar: "<<b<<endl;
    cout<<"isEqual: "<<isEqual(a,b)<<endl;
    cout<<"isGreater: "<<isGreater(a,b)<<endl;
    cout<<"isSmaller: "<<isSmaller(a,b)<<endl;
    cout<<"getSubstring: "<<getSubstring(a, 0, 3)<<endl;
    //char *a = "ABCDEFG";
    cout<<"shiftLeft: "<<shiftLeft(a,1)<<endl;
    cout<<a;

    return 0;
}

char * add(const char *a,const char *b) {
    char* c = static_cast<char*>(malloc(sizeof(char) * (lena + lenb + 1)));
    for (int i = 0,j=0; j < lenb ,i < lena;j++, i++) {
        c[i] = a[i];
        c[j+lena] = b[j];
    }
    c[lena + lenb] = '\0';
    return c;
}

void addEql(char * &a, char * &b) {
    char* c = static_cast<char*>(malloc(sizeof(char) * (lena + lenb + 1)));
    for (int i = 0 ; i < lena ; i++)
        c[i] = *(a + (i * sizeof(char)));
    for (int i = 0 ; i < lenb ; i++){
        c[i + lena] = *(b + (i * sizeof(char)));
    }

    a = c;
}

char getChar(char * &a, int i){
    return *(a+(sizeof(char) * i));
}

void setChar(char * &b, int i, char ch){
    char * d = static_cast<char*>(malloc(sizeof(char) * lenb));
    for (int j = 0; j < lenb; ++j) {
        if (j == i) d[j] = ch;
        else d[j] = b[j];
    }
    b = d;
}

bool isEqual(char *a, char *b) {
    if(lena == lenb) return true;
    else return false;
}

bool isGreater(char *a, char *b) {
    if (lena > lenb) return true;
    else return false;
}

bool isSmaller(char *a, char *b) {
    if (lena < lenb) return true;
    else return false;
}

char * getSubstring(char *a, int i, int j) {
    char * c = static_cast<char *>(malloc((j - i + 1) * sizeof(char)));
    for (int l = i, k = 0; k <= (j - i) ; k++ , l++) {
        c[k] = a[l];
    }
    return c;
}

char * shiftLeft(char * &a ,int i) {
    char * c = static_cast<char *>(malloc(i * sizeof(char)));
    char * d = static_cast<char *>(malloc(lena - i + 1 * sizeof(char)));
    for (int j = 0; j < i ; j++) {
        c[j] = a[j];
    }
    for (int k = 0, j = i; j <= (lena - i); k++, j++) {
        d[k] = a[j];
    }
    a = d;
    return c;
}

/*addEql  get/setChar  isEqual  isGreater   isSmaller  getSubstring  shiftLeft shiftRight*/