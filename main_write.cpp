#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("C:\\Users\\jcoin\\Downloads\\Comsc 110\\assignment-5-8\\students.txt");

    ofstream ofs;

    int N;
    string strval1;
    int n1, n2;

    cout << "Enter the number of students: ";
    cin >> N;

    ofs.open("students.txt");
    
    if(ofs)
    {
        ofs << N << endl;
        for(int i = 0; i < N; i++)
        {
            cout << "Enter their name and two scores: ";
            cin >> strval1 >> n1 >> n2;
            ofs << strval1 << " " << n1 << " " << n2 << endl;
        }
    }
    ofs.close();
   
}