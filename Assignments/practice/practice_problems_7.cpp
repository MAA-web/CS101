// Honours to Mian Ali Ahmed
#include<iostream>
#include<string.h>
using namespace std;

string sent, sent1;
int characters{0}, character{0}, word{0}, counter{0};
int main(int argc, char const *argv[]) {
  cout << "Type a sentence: ";
  getline(cin, sent1);
  sent = sent1 + '.';//Took a god damn day
  //cout<<sent;

  for (int i = 0; sent[i]!='\0'; i++)
  {
    if (sent[i]!=' ' && sent[i] != '.')
    {
      //cout<<"111111111"<<endl;
      characters++;
    }
    else 
    {
      if (characters > 1)
      {
        word++;
        characters = 0;
      }
    
      else if (characters == 1)
      {
        character++;
        characters = 0;
      }
    }
    //counter++;
  }
  
  cout<<"The characters are: "<<character<<endl;
  cout<<"The words are: "<<word<<endl;
        //cout<<sent[-2];
  //cout<<counter;
  return 0;
}
