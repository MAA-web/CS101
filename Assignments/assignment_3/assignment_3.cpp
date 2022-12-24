#include<iostream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int row{9},column{14};
    // char strarr1[row][column] = {
    //     {" dogxbxxxnoon "},
    //     {" rhellotherex "},
    //     {" okciuqbrownm "},
    //     {" wxwgexlxhjij "},
    //     {" oozokvuxdrow "},
    //     {" rlxdrxextxja "},
    //     {" drowblonkgod "}
    // };
    char strarr[row][column] = {
        {"              "},
        {" dogxbxxxnoon "},
        {" rhelwotherex "},
        {" okcioqorownm "},
        {" wxworowxhjij "},
        {" oozooouxdrow "},
        {" rlxdwxwxtxoa "},
        {" drowblonkgow "},
        {"              "}
    };
    string strarr2[] = {
        {"dogxbxxxnoon"},
        {"rhellotherex"},
        {"okciuqbrownm"},
        {"wxwgexlxhjij"},
        {"oozokvuxdrow"},
        {"rlxdrxextxja"},
        {"drowblohello"}
    };

    char searchstr[] = {"row"};
    int searchstrlen = strlen(searchstr);
    char alpharr[27] = {"abcdefghijklmnopqrstuvwxyz"};
    int alphind[26][row][column];

    for (int i = 0; i < 26; i++)
    {
        for(int l = 0 ;l<row;l++)
            for (int j = 0; j < column; j++)
            {
                alphind[i][l][j] = -1;
            }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<strarr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 27; i++)
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
    int valueofsearchalph;

    for (int i = 0; i < 26; i++)
    {
        if(searchstr[0] == alpharr[i])valueofsearchalph = i;
    }
    bool isnexttrue = true;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            /*horizontal right*/
            if(alphind[valueofsearchalph][i][j] != -1 && alphind[valueofsearchalph][i][j] <= (column-searchstrlen-1))
            {
                int valueofsearchalphrowhr = i;
                int valueofsearchalphcolhr = alphind[valueofsearchalph][i][j];
                int counterhr = 0;
                while(isnexttrue){
                for (int k = 0; k <= (searchstrlen); k++)
                {
                    if(searchstr[k] == strarr[i][j+k])
                    {
                        counterhr++;
                    }
                    else
                    {
                        isnexttrue = false;
                    }
                    
                }
                }
                if(counterhr == searchstrlen)
                {
                    cout<<searchstr;
                    cout<<"horizontal right ("<<valueofsearchalphrowhr<<" ,"<<valueofsearchalphcolhr<<")"<<" "<<"("<<valueofsearchalphrowhr+1<<" ,"<<valueofsearchalphcolhr+searchstrlen-1<<") "<<endl;
                }
                isnexttrue = true;
            }
            /*horizontal left*/
            if (alphind[valueofsearchalph][i][j] != -1 && alphind[valueofsearchalph][i][j] >= searchstrlen)
            {
                int valueofsearchalphrowhl = i;
                int valueofsearchalphcolhl = alphind[valueofsearchalph][i][j];
                int counterhl = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i][j-k])
                        {
                            counterhl++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                    }
                }
                if (counterhl == searchstrlen)
                {
                    cout<<searchstr<<"horizontal left ("<<valueofsearchalphrowhl+1<<", "<<valueofsearchalphcolhl<<") ("<<valueofsearchalphrowhl+1<<" ,"<<valueofsearchalphcolhl-searchstrlen+1<<") "<<endl;
                }
                isnexttrue = true;
            }
            // /*vertical up*/
            if (alphind[valueofsearchalph][i][j] != -1 && i >= searchstrlen)
            {
                int valueofsearchalphrowvu = i;
                int valueofsearchalphcolvu = alphind[valueofsearchalph][i][j];
                int countervu = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i-k][j])
                        {
                            countervu++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                    }
                    
                }
                if (countervu == searchstrlen)
                {
                    cout<<searchstr<<"vertical up ("<<valueofsearchalphrowvu+1<<", "<<valueofsearchalphcolvu<<") "<<"("<<valueofsearchalphrowvu-searchstrlen+2<<", "<<valueofsearchalphcolvu<<")"<<endl;
                }
                
                isnexttrue = true;
            }
            /*vertical down*/
            if (alphind[valueofsearchalph][i][j] != -1 && i <= row-searchstrlen)
            {
                int valueofsearchalphrowvd = i;
                int valueofsearchalphcolvd = alphind[valueofsearchalph][i][j];
                int countervd = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i+k][j])
                        {
                            countervd++;
                            //cout<<strarr[i+k][j];

                        }
                        else
                        {
                            isnexttrue = false;
                        }
                    }
                    
                }
                if (countervd == searchstrlen)
                {
                    cout<<searchstr<<"vertical down ("<<valueofsearchalphrowvd<<", "<<valueofsearchalphcolvd<<") "<<"("<<valueofsearchalphrowvd+searchstrlen-1<<", "<<valueofsearchalphcolvd<<") "<<endl;
                }
                isnexttrue = true;
            }
            /*diagonal from left to right (upper side)*/
            if (alphind[valueofsearchalph][i][j] != -1 && i <= row-searchstrlen && j <= column-searchstrlen-1)
            {
                //cout<<alphind[valueofsearchalph][i][j];
                int valueofsearchalphrowdlru = i;
                int valueofsearchalphcoldlru = alphind[valueofsearchalph][i][j];
                int counterdlru = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i+k][j+k])
                        {
                            counterdlru++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                        
                        
                    }
                }
                if (counterdlru == searchstrlen)
                {
                    cout<<searchstr<<"diagonal from left to right (upper side) ("<<valueofsearchalphrowdlru<<", "<<valueofsearchalphcoldlru<<") "<<"("<<valueofsearchalphrowdlru+searchstrlen-1<<", "<<valueofsearchalphcoldlru-1+searchstrlen<<") "<<endl;
                }
                isnexttrue = true;
            }
            /*diagonal from right to left (lower side) drll*/
            if (alphind[valueofsearchalph][i][j] != -1 && i <= row-searchstrlen && j <= column-searchstrlen-1)
            {
                //cout<<alphind[valueofsearchalph][i][j];
                int valueofsearchalphrowdrll = i;
                int valueofsearchalphcoldrll = alphind[valueofsearchalph][i][j];
                int counterdrll = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i-k][j-k])
                        {
                            counterdrll++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                        
                        
                    }
                }
                if (counterdrll == searchstrlen)
                {
                    cout<<searchstr<<"diagonal from right to left (lower side) ("<<valueofsearchalphrowdrll<<", "<<valueofsearchalphcoldrll<<") "<<"("<<valueofsearchalphrowdrll-searchstrlen+1<<", "<<valueofsearchalphcoldrll-searchstrlen+1<<") "<<endl;
                }
                isnexttrue = true;
            }
            //cout<<searchstr[3];
            /*diagonal from left to right (lower side) dlrd*/
            if (alphind[valueofsearchalph][i][j] != -1 && i >= searchstrlen && j >= searchstrlen-1)
            {
                //cout<<alphind[valueofsearchalph][i][j];
                int valueofsearchalphrowdlrl = i;
                int valueofsearchalphcoldlrl = alphind[valueofsearchalph][i][j];
                int counterdlrl = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (searchstr[k] == strarr[i-k][j+k] && isnexttrue == true)
                        {
                            //cout<<i-k;
                            //cout<<strarr[i-k][j+k];
                            //cout<<j+k;
                            counterdlrl++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                        
                        
                    }
                }
                if (counterdlrl == searchstrlen)
                {
                   cout<<searchstr<<"diagonal from left to right (lower side) ("<<valueofsearchalphrowdlrl<<", "<<valueofsearchalphcoldlrl<<") "<<"("<<valueofsearchalphrowdlrl+searchstrlen+1<<", "<<valueofsearchalphcoldlrl+searchstrlen+1<<") "<<endl;
                }
                isnexttrue = true;
            }
            /*diagonal from right to left (upper side) drlu*/
            //cout<<row-searchstrlen;
            //cout<<alphind[valueofsearchalph][i][j]<<" ";
            //cout<<i<<" "<<j<<" ";
            if (alphind[valueofsearchalph][i][j] != -1 && i <= row-searchstrlen && j >= searchstrlen)
            {
                //cout<<alphind[valueofsearchalph][i][j];
                int valueofsearchalphrowdrlu = i;
                int valueofsearchalphcoldrlu = alphind[valueofsearchalph][i][j];
                int counterdrlu = 0;
                while (isnexttrue)
                {
                    for (int k = 0; k <= searchstrlen; k++)
                    {
                        if (isnexttrue && searchstr[k] == strarr[i+k][j-k])
                        {
                            // cout<<i+k;
                            // cout<<strarr[i+k][j-k];
                            // cout<<j-k;
                            counterdrlu++;
                        }
                        else
                        {
                            isnexttrue = false;
                        }
                        
                        
                    }
                }
                if (counterdrlu == searchstrlen)
                {
                   cout<<searchstr<<"diagonal from right to left (upper side) ("<<valueofsearchalphrowdrlu<<", "<<valueofsearchalphcoldrlu<<") "<<"("<<valueofsearchalphrowdrlu+searchstrlen-1<<", "<<valueofsearchalphcoldrlu-searchstrlen+1<<") "<<endl;
                }
                isnexttrue = true;
            }
        }
    }
    return 0;
}

//TODO Enums for alphabetical values
//TODO boolean variables in all the if statements