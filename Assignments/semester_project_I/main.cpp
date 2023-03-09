#include <iostream>
#include <fstream>

using namespace std;

#if defined(__linux__) // Or #if __linux__
    int OS = 1;
#elif _WIN32
  #if defined(_WIN64)
    int OS = 2
  #else
    int OS = 2
  #endif
#elif __APPLE__
  int OS = 1
#elif __FreeBSD__
  int OS = 1
#else
#endif




namespace salted_potato  {
    int length(char * a) {
        int len = 0;
        for (int i = 0; a[i] != '\0' ; i++) {
            len++;
        }
        return len;
    }

    int length(string l) {
        int j = 0;
        for (int i = 0; l[i] != '\0'; i++) {
            //cout<<l[i];
            j = i;
        }        
        return j + 1;
    }

    char * convert_to_charStar_for_spaces_and_uppercase(string l){
        int len = length(l);
        char * c = static_cast<char *>(malloc(sizeof(char) * len));
        for (int i = 0; i < len; i++) {
            if(l[i] == ' ')c[i] = ' ';
            else c[i] = l[i];
            if((int) l[i] >= 65 && (int) l[i] <= 90) {
                int upper_ascii = (int) l[i] + 32;
                c[i] = (char) upper_ascii;
            }

        }
        return c;
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
    char task;
    cout<<"select a task: ";
    cin>>task;
    if (task == '1') {
        cout << "|--------------------------------------------------------------------------Task one--------------------------------------------------------------------------|" << endl;

        char *a = "ABCDEFG";
        char *b = "1234567";


        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "add: " << add(a, b) << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        addEql(a, b);
        cout<<"addEql: " << a << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "getChar: " << getChar(a, 1) << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        char ch = '1';
        setChar(b, 4, ch);
        cout<<"setchar: "<<a<<endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "isEqual: " << isEqual(a, b) << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "isGreater: " << isGreater(a, b) << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "isSmaller: " << isSmaller(a, b) << endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "getSubstring: " << getSubstring(a, 3, 7) << endl;

        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "shiftLeft: " << shiftLeft(a, 1) << endl;
        cout<<"a: "<<a<<endl;
        
        cout<<endl;
        cout <<"a: " << a << endl;
        cout<< "b: "<< b <<endl;
        cout << "shiftRight: " << shiftRight(a, 1) << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b <<endl;
       
       }

    else {
        cout << "|--------------------------------------------------------------------------Task two--------------------------------------------------------------------------|" << endl;
        /*File inclusion*/
        fstream file;
        file.open("cities_and_countries.txt", ios::in);
        string random_string;
        srand(time(0));
        int random_integer = 0;

        while (true) {
            int temp_random_integer = (rand() % 22632);
            //cout<<g;
            if (temp_random_integer <= 43098) {
                random_integer = temp_random_integer;
                break;
            }
        }

        int indexer = 0;
        string to_be_converted_to_charStar;
        while (getline(file, random_string)) {
            indexer++;
            if (indexer == random_integer) {
                to_be_converted_to_charStar = random_string;
                break;
            }
        }

        char *c = salted_potato::convert_to_charStar_for_spaces_and_uppercase(to_be_converted_to_charStar);
        int length = salted_potato::length(c);

        int number_of_spaces = 0;
        char *check = static_cast<char * >(malloc(sizeof(char) * length));
        for (int i = 0; i < length; i++) {
            if (c[i] == ' ') {
                check[i] = ' ';
                number_of_spaces++;
            } else check[i] = '_';
        }

        char *check1 = static_cast<char * >(malloc(sizeof(char) * 11));
        for (int i = 0; i < 11; i++) {
            check1[i] = '_';
        }

        int mistakes = 0;
        int right = 0;
        char w = ' ';
        cout << c;
        while (mistakes <= 11) {

            while (true) {
                cout << "Type a word (tries left " << 11 - mistakes << " ): ";
                cin >> w;

                bool is_already_present = false;
                for (int i = 0; i < 11; i++) {
                    if (check1[i] == w) {
                        is_already_present = true;
                        continue;
                    } else if (check1[i] == '_' && !is_already_present) {
                        setChar(check1, i, w);
                        break;
                    }
                }

                for (int i = 0; i < length; i++) {
                    if (check[i] == w) {
                        is_already_present = true;
                        //continue;
                    }
                }
                if (!is_already_present) {
                    break;
                } else {
                    cout << "Word already used! choose another one" << endl;
                }
            }

            /*printing*/
            int g = 0;
            for (int i = 0; i < length; i++) {
                if (c[i] == w) {
                    setChar(check, i, w);
                    g++;
                    right++;
                }
            }
            if (g == 0) { mistakes++; }

            if (OS == 1) {
                system("clear");
            } else if (OS == 2) {
                system("CLS");
            }


            if (mistakes == 11) {
                cout << "      |\n"
                        "      |\n"
                        "      |\n"
                        " (¨!¨)|\n"
                        "  |||\n"
                        "   |\n"
                        "  | |\n";
                cout<<endl;
                //cout << " (¨!¨)\n"
                //        "  /|\\\n"
                //        "   |\n"
                //        "  / \\\n ";
                cout << "YOU LOSE!" << endl;
                cout << "The word was " << c << endl;
                break;
            }
            if (mistakes == 10) {
                cout << " (¨!¨)\n"
                        "  /|\\\n"
                        "   |\n"
                        "    \\\n ";
            }
            if (mistakes == 9) {
                cout << " (¨!¨)\n"
                        "  /|\\\n"
                        "   |\n"
                        "  ";
            }
            if(mistakes == 23) {
                cout<< " (¨!¨)\n"
                        "  /|\\\n"
                        "   |\n"
                        "  ";
            }
            if(mistakes == 24) {
                cout<< " (¨!¨)\n"
                        "  /|\\\n"
                        "   |\n"
                        "  ";
            }
            if (mistakes == 8) {
                cout << " (¨!¨)\n"
                        "  /|\\\n"
                        "   "
                        " ";
            }
            if (mistakes == 7) {
                cout << " (¨!¨)\n"
                        "  /|\n"
                        "  "
                        "  ";
            }
            if (mistakes == 6) {
                cout << " (¨!¨)\n"
                        "  /\n"
                        "  "
                        "  ";
            }
            if (mistakes == 5) {
                cout << " (¨!¨)\n"
                        "  "
                        "  "
                        "  ";
            }
            if (mistakes == 4) {
                cout << " (¨!)\n"
                        "  "
                        "  "
                        "  ";
            }
            if (mistakes == 3) {
                cout << " (¨)\n"
                        "  "
                        "  "
                        "  ";
            }
            if (mistakes == 2) {
                cout << " ()\n"
                        "  "
                        "  "
                        "  ";
            }
            if (mistakes == 1) {
                cout << " (\n"
                        "  "
                        "  "
                        "  ";
            }
            if (mistakes == 0) {
                cout << "  "
                        "  "
                        "  "
                        "  ";
            }
            cout<<endl;
            //cout<<"Used words: ";
            //cout<<check1<<endl;
            cout << endl;
            cout << check << endl;
            cout<<endl;
            
            cout<<endl;
            if (right == (length - number_of_spaces)) {
                cout << "YOU WIN" << endl;
                cout << "The word was " << c << endl;
                break;
            }
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
//TODO clean up code
