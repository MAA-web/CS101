#include<iostream>
#include<fstream>
#include <iomanip>
#include <chrono>
using namespace std;

int main(int argc, char const *argv[])
{
    int row{7},column{12};
    cout<<"Type the rows of the array: ";
    cin>>row;
    cout<<"Type the column of the array: ";
    cin>>column;
    cout<<endl;
    row += 2; column += 2;
    char strarr[row][column];
    cout<<"Type in the characters for the "<<row-2<<"x"<<column-2<<" array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (i == 0 || j == 0 || i == (row-1) || j == (column-1))strarr[i][j] = ' ';
            else{
                cin>>strarr[i][j];
            }
        }
    }
    
    
    
    const auto start = chrono::system_clock::now();
    
    
    
    char alpharr[] = {"abcdefghijklmnopqrstuvwxyz"};
    int alphind[27][row][column];

    for (int i = 0; i < 26; i++)
    {
        for(int l = 0 ;l<row;l++)
            for (int j = 0; j < column; j++)
            {
                alphind[i][l][j] = -1;
            }
    }
    /*printing the user inputed array*/
    cout<<endl;
    cout<<"   GUIDE"<<endl;
    cout<<endl;
    cout<<"        ";
    for (int i = 0; i < column - 2; i++) {
        cout<<i+1<<setw(4);
    }
    for (int i = 0; i < row; i++)
    {
        if(i < row - 1 && i != 0)cout<<i;
        for (int j = 0; j < column; j++)
        {
            cout<<strarr[i][j]<<setw(4);
        }
        cout<<endl;
        cout<<endl;
    }
    /*Finding and storing the positions of all the alphabets in a three dimensional array (THE CRUX OF THIS PROGRAM)*/
    for (int i = 0; i < 26; i++)
    {
        for (int k = 0; k < (row); k++)
        {
            for (int j = 0; j < (column); j++)
            {
                if(alpharr[i] == strarr[k][j])
                {
                    alphind[i][k][j] = j;
                }

            }
        }
    }
    /*Finding the largest value to exit loop when the search string length is equal to the largest value*/
    int largerone;
    if (row >= column)
    {
        largerone = row;
    }
    else{
        largerone = column;
    }
    int searchstrlen;
    /*opening the file*/
    char question = 'n';
    //cout<<"Normal or Extensive search (n or e) ";
    //cin>>question;
    
    fstream file;
    if (question == 'e'){file.open("word_file.txt", ios::in);cout<<endl;cout<<"    Extensive search\n"<<endl;}
    else{file.open("wordlist1.txt", ios::in);cout<<endl;cout<<"    Normal search\n"<<endl;}
    string searchstr;
    //file.open("wordlist1.txt", ios::in);
    //const auto start = chrono::system_clock::now();

    while (getline(file, searchstr))
    {
        searchstrlen = searchstr.size();
        if (searchstrlen > largerone) {
            file.close();
            break;
        }
        int valueofsearchalph;
        for (int i = 0; i < 26; i++) {
            if (searchstr[0] == alpharr[i])valueofsearchalph = i;
        }
        bool isnexttrue = true;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {

                /*horizontal right*/
                if (alphind[valueofsearchalph][i][j] != -1 &&
                    alphind[valueofsearchalph][i][j] <= (column - searchstrlen - 1)) {
                    int counterhr = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= (searchstrlen); k++) {
                            if (searchstr[k] == strarr[i][j + k]) {
                                counterhr++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterhr == searchstrlen) {
                        cout << setw(8) << searchstr;
                        cout << " (" << i << ", " << alphind[valueofsearchalph][i][j] << ")" << " "
                             << "(" << i << ", " << alphind[valueofsearchalph][i][j] + searchstrlen - 1
                             << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*horizontal left*/
                if (alphind[valueofsearchalph][i][j] != -1 && alphind[valueofsearchalph][i][j] >= searchstrlen) {
                    int counterhl = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i][j - k]) {
                                counterhl++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterhl == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") (" << i << ", " << alphind[valueofsearchalph][i][j] - searchstrlen + 1
                             << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*vertical up*/
                if (alphind[valueofsearchalph][i][j] != -1 && i >= searchstrlen + 1  && isnexttrue) {
                    int countervu = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i - k][j]) {
                                countervu++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (countervu == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i - searchstrlen + 1 << ", "
                             << alphind[valueofsearchalph][i][j] << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*vertical down*/
                if (alphind[valueofsearchalph][i][j] != -1 && i <= row - searchstrlen-1 && isnexttrue) {
                    int countervd = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i + k][j]) {
                                countervd++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (countervd == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i + searchstrlen - 1 << ", " << alphind[valueofsearchalph][i][j]
                             << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*diagonal from left to right (upper side)*/
                if (alphind[valueofsearchalph][i][j] != -1 && i <= row - searchstrlen -1 &&
                    j <= column - searchstrlen - 1 && isnexttrue) {
                    int counterdlru = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i + k][j + k]) {
                                counterdlru++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterdlru == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i + searchstrlen - 1 << ", "
                             << alphind[valueofsearchalph][i][j] - 1 + searchstrlen << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*diagonal from right to left (lower side) drll*/
                if (alphind[valueofsearchalph][i][j] != -1 && i >= searchstrlen + 1 &&
                    j >= searchstrlen + 1 && isnexttrue) {
                    int counterdrll = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i - k][j - k]) {
                                counterdrll++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterdrll == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i - searchstrlen + 1 << ", "
                             << alphind[valueofsearchalph][i][j] - searchstrlen + 1 << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*diagonal from left to right (lower side) dlrd*/
                if (alphind[valueofsearchalph][i][j] != -1 && i >=row - searchstrlen - 1 && j >= column - searchstrlen - 1 && isnexttrue) {
                    int counterdlrl = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (searchstr[k] == strarr[i - k][j + k] && isnexttrue) {
                                counterdlrl++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterdlrl == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i - searchstrlen + 1 << ", "
                             << alphind[valueofsearchalph][i][j] + searchstrlen - 1 << ") "<<endl;
                    }
                    isnexttrue = true;
                }

                /*diagonal from right to left (upper side) drlu*/
                if (alphind[valueofsearchalph][i][j] != -1 && i <= row - searchstrlen - 1 && j >= column - searchstrlen - 1 && isnexttrue) {
                    int counterdrlu = 0;
                    while (isnexttrue) {
                        for (int k = 0; k <= searchstrlen; k++) {
                            if (isnexttrue && searchstr[k] == strarr[i + k][j - k]) {
                                counterdrlu++;
                            } else {
                                isnexttrue = false;
                            }
                        }
                    }
                    if (counterdrlu == searchstrlen) {
                        cout << setw(8) << searchstr << " (" << i << ", " << alphind[valueofsearchalph][i][j]
                             << ") " << "(" << i + searchstrlen - 1 << ", "
                             << alphind[valueofsearchalph][i][j] - searchstrlen + 1 << ") "<<endl;
                    }
                    isnexttrue = true;
                }
            }
        }
    }
    const auto end = chrono::system_clock::now();
    const auto diff = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "\nTotal time taken: " << diff << endl;
    //cout<<chrono::duration_cast<chrono::milliseconds>(end - start);
    //long int end = chrono::system_clock::now();
    //cout<<start<<endl;
    //cout<<end;
    //const auto diff = chrono::duration_cast<chrono::milliseconds>(end - start);
    //cout << "Total time taken: " << end - start << endl;
    return 0;
}
