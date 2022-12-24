#include <iostream>
#include <string.h>
using namespace std;


string h,j;
int main()
{
	char a[] = "abcdefghijk   ";
	//cout<<strlen(a);
	int row = 7,column = 12;
	// char strarr[row][column] = {
    //     {"dogxbxxxnoon"},
    //     {"rhellotherex"},
    //     {"okciuqbrownm"},
    //     {"wxwgexlxhjij"},
    //     {"oozokvuxdrow"},
    //     {"rlxdrxextxja"},
    //     {"drowblohello"}
    // };
    char str[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(i == 0 || j == 0 || i == row-1 || j == column-1)str[i][j] = *"§";
            else{cout<<"type bitch: ";
            //cin>>str[i][j];}
            str[i][j] = *" ";}
        }
        cout<<endl;
        //cout<<i;
        
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // if(i == 0 || j == 0 || i == row-1 || j == column-1)cin>>str[i][j];
            cout<<str[i][j];
        }
        cout<<endl;
        //cout<<i;
        
    }
    
}