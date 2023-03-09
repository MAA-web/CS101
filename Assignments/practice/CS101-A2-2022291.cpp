#include<iostream>
using namespace std;

int a{3}, b{5};float gpa{0}, counter{0}, result0{0}, cgpa{0}, count_cgpa{0}, result1;

int main(int argc, char const *argv[])
{
    cout<<"Type the number of Semesters you want to enter: ";
    cin>>a;
    cout<<"Type the number of Courses you want to enter: ";
    cin>>b;
    float marks_matrix[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            while (true)
            {
                cout<<"Enter marks for Semester-"<<i+1<<" Course-"<<j+1<<": ";
                cin>>marks_matrix[i][j];
                if (marks_matrix[i][j] >= 1 && marks_matrix[i][j] <= 100)break;else{continue;}
            }
        }
        
    }

    for (int k = 0; k < a; k++)
    {
        cout<<"************************************************"<<endl;
        cout<<" _______________________________________________"<<endl;
        cout<<"|Semester-"<<k+1<<"    |Obtained marks|Grade|Course GPA|"<<endl;
        gpa = 0;counter = 0;
        for (int l = 0; l < b; l++)
        {
            cout<<" _______________________________________________"<<endl;
            if (marks_matrix[k][l] == 100)
            {
                cout<<"|Course-"<<l+1<<"      |     "<<marks_matrix[k][l]<<"  ";
            }
            else if (marks_matrix[k][l] >= 1 && marks_matrix[k][l] <= 9)
            {
                cout<<"|Course-"<<l+1<<"      |       "<<marks_matrix[k][l]<<"  ";
            }
            
            else
            {
                cout<<"|Course-"<<l+1<<"      |      "<<marks_matrix[k][l]<<"  ";
            }
            
            
            
            if (marks_matrix[k][l] <= 50)
            {
                //cout<<" _______________________________________________________"<<endl;
                cout<<"    |  0  |          |"<<endl;
                //cout<<" ___________________________________________________"<<endl;
            }
            if (marks_matrix[k][l] > 50 && marks_matrix[k][l] <= 60)
            {
                cout<<"    |  D  |    1     |"<<endl;
                //cout<<" _______________________________________________"<<endl;
                gpa++;counter++;
            }
            if (marks_matrix[k][l] > 60 && marks_matrix[k][l] < 100)
            {
                cout<<"    |  A  |    4     |"<<endl;
                //cout<<" _______________________________________________"<<endl;
                gpa+=4;counter++;
            }
            if (marks_matrix[k][l] == 100)
            {
                //cout<<" _______________________________________________________"<<endl;
                cout<<"    |  A+ |    4     |"<<endl;
                //cout<<" _______________________________________________"<<endl;
                gpa+=4;counter++;
            }
        }
        result0 = gpa/counter;
        cgpa += result0;count_cgpa++;

        cout<<" _______________________________________________"<<endl;
        if (gpa == 0 || counter == 0){cout<<"FAIL"<<endl;}else{cout<<"|Semester-"<<k+1<<" GPA|                "<<result0<<"              |"<<endl;}
        cout<<"************************************************"<<endl;
        if (k == a-1)
        {
        result1 = cgpa/count_cgpa;
        if (result1 == 4)
        {
        cout<<"________________________________________________"<<endl;
        cout<<"|CGPA="<<result1<<"        |              |     |          |"<<endl;
        cout<<"________________________________________________"<<endl;
        }
        else
        {
        cout<<"________________________________________________"<<endl;
        cout<<"|CGPA="<<result1<<"   |              |     |          |"<<endl;
        cout<<"________________________________________________"<<endl;
        }
        }
        else
        {
        cout<<"________________________________________________"<<endl;
        cout<<"|              |              |     |          |"<<endl;
        cout<<"________________________________________________"<<endl;
        }
    }


    return 0;
}