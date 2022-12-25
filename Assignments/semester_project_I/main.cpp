#include <iostream>

using namespace std;
namespace salted_potato  {
    int length(char * a) {
        int len = 0;
        for (int i = 0; a[i] != '\0' ; i++) {
            len++;
        }
        return len;
    }
}

char * add(char *,char *);
void addEql(char* &a, char* &b);
char getChar(char * &, int);
void setChar(char * &, int, char);
bool isEqual(char * , char * );
bool isGreater(char *, char *);
bool isSmaller(char *, char *);
char * getSubstring(char *, int, int);
char * shiftLeft(char * & ,int);
char * shiftRight(char * &, int );

int main() {

    char *a = "ABCDEFG";
    char *b = "1234567";
    /*
    cout<<"add: "<<add(a, b)<<endl;

    cout<<"getChar: "<<getChar(a, 1)<<endl;
    char ch = '1';
    setChar(b,4,ch);
    cout<<"setChar: "<<b<<endl;
    cout<<"isEqual: "<<isEqual(a,b)<<endl;
    cout<<"isGreater: "<<isGreater(a,b)<<endl;
    cout<<"isSmaller: "<<isSmaller(a,b)<<endl;
    cout<<"getSubstring: "<<getSubstring(a, 0, 3)<<endl;

    cout<<"shiftLeft: "<<shiftLeft(a,1)<<endl;
    cout<<"shiftRight: "<<shiftRight(a, 1)<<endl;
    cout<<a<<endl;
    cout<<"shiftRight: "<<shiftRight(a, 3)<<endl;
    cout<<shiftLeft(a, 3)<<endl;
    cout<<a<<endl;
    */




    cout<<"|--------------------------------------------------------------------------Task two--------------------------------------------------------------------------|"<<endl;
    char * c = "china";
    int length = salted_potato::length(c);
    char * check = static_cast<char * >(malloc(sizeof(char) * length));
    check = "_____";
    char * check1 = static_cast<char * >(malloc(sizeof(char) * 11));
    check1 = "___________";
    int mistakes = 0;
    int right = 0;
    char w = ' ';
    while(mistakes <= 11) {

        while(true){
            cout<<"Type a word (tries left "<<11-mistakes<<" ): ";
            cin>>w;

            int h = 0;
            for (int i = 0; i < 11; i++) {
                if (check1[i] == w){
                    h++;
                    continue;
                }
                else if (check1[i] == '_' && h == 0) {
                    setChar(check1,i,w);
                    break;
                }
            }

            for (int i = 0; i < length; i++) {
                if(check[i] == w) {
                    h++;
                    continue;
                }
            }
            if (h == 0){
                break;
            }
            else {
                cout<<"Word already used! choose another one"<<endl;
            }
        }

        /*printing*/
        int g = 0;
        for (int i = 0; i < length; i++) {
            if(c[i] == w) {
                setChar(check,i,w);
                g++;
                right++;
            }
        }
        if(g == 0){mistakes++;}

        if(system("cls"))system("clear");

        if(mistakes == 11) {
            cout << " (¨!¨)\n"
                    "  /|\\\n"
                    "   |\n"
                    "  / \\\n ";
            cout<<"YOU LOSE!"<<endl;
            cout<<"The word was "<<c<<endl;
            break;
        }
        if(mistakes == 10){
            cout << " (¨!¨)\n"
                    "  /|\\\n"
                    "   |\n"
                    "   \\\n ";
        }
        if(mistakes == 9){
            cout << " (¨!¨)\n"
                    "  /|\\\n"
                    "   |\n"
                    "  ";
        }
        if(mistakes == 8){
            cout << " (¨!¨)\n"
                    "  /|\\\n"
                    "   "
                    " ";
        }
        if(mistakes == 7){
            cout << " (¨!¨)\n"
                    "  /|\n"
                    "  "
                    "  ";
        }
        if(mistakes == 6){
            cout << " (¨!¨)\n"
                    "  /\n"
                    "  "
                    "  ";
        }
        if(mistakes == 5){
            cout << " (¨!¨)\n"
                    "  "
                    "  "
                    "  ";
        }
        if(mistakes == 4){
            cout << " (¨!)\n"
                    "  "
                    "  "
                    "  ";
        }
        if(mistakes == 3){
            cout << " (¨)\n"
                    "  "
                    "  "
                    "  ";
        }
        if(mistakes == 2){
            cout << " ()\n"
                    "  "
                    "  "
                    "  ";
        }
        if(mistakes == 1){
            cout << " (\n"
                    "  "
                    "  "
                    "  ";
        }
        if(mistakes == 0){
            cout << "  "
                    "  "
                    "  "
                    "  ";
        }
        cout<<endl;
        cout<<check<<endl;
        if (right == length){
            cout<<"YOU WIN"<<endl;
            cout<<"The word was "<<c<<endl;
            break;
        }
    }

    return 0;
}

char * add(char *a,char *b) {
    int lena = salted_potato::length(a);
    int lenb = salted_potato::length(b);
    char* c = static_cast<char*>(malloc(sizeof(char) * (lena + lenb + 1)));
    for (int i = 0,j=0; j < lenb ,i < lena;j++, i++) {
        c[i] = a[i];
        c[j+lena] = b[j];
    }
    c[lena + lenb] = '\0';
    return c;
}

void addEql(char * &a, char * &b) {
    int lena = salted_potato::length(a);
    int lenb = salted_potato::length(b);
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
    int lenb = salted_potato::length(b);
    char * d = static_cast<char*>(malloc(sizeof(char) * lenb));
    for (int j = 0; j < lenb; ++j) {
        if (j == i) d[j] = ch;
        else d[j] = b[j];
    }
    b = d;
}

bool isEqual(char *a, char *b) {
    int lena = salted_potato::length(a);
    int lenb = salted_potato::length(b);
    if(lena == lenb) return true;
    else return false;
}

bool isGreater(char *a, char *b) {
    int lena = salted_potato::length(a);
    int lenb = salted_potato::length(b);
    if (lena > lenb) return true;
    else return false;
}

bool isSmaller(char *a, char *b) {
    int lena = salted_potato::length(a);
    int lenb = salted_potato::length(b);
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
    int lena = salted_potato::length(a);
    char * c = static_cast<char *>(malloc(i * sizeof(char)));
    char * d = static_cast<char *>(malloc(lena - i + 1 * sizeof(char)));
    for (int j = 0; j < i ; j++) {
        c[j] = a[j];
    }
    for (int k = 0, j = i; j <= (lena); k++, j++) {
        d[k] = a[j];
    }
    a = d;
    return c;
}

char * shiftRight(char * &a, int i) {
    int lena = salted_potato::length(a);
    char * c = static_cast<char *>(malloc(i * sizeof(char)));
    char * d = static_cast<char *>(malloc(lena - i * sizeof(char)));
    for (int k = 0, j = lena - 1; j >= (lena - i) ; j--, k++) {
        c[k] = a[j];
    }
    for (int j = 0; j < (lena - i); j++) {
        d[j] = a[j];
    }
    a = d;
    return c;
}
/*addEql  get/setChar  isEqual  isGreater   isSmaller  getSubstring  shiftLeft shiftRight*/

//TODO put in file reading and rand funcion
//TODO clean up code