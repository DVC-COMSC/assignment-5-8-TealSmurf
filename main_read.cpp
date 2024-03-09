#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ifstream ifs;

	int N;
    string strval1;
    int n1, n2;

	ifs.open("students.txt");
	if(ifs)
	{
		ifs >> N;
		cout << "Number of students: " << N << endl;
		for(int i = 0; i < N; i++)
		{
			ifs >> strval1 >> n1 >> n2;
			cout << "Student Name: " << strval1 << "	Score1: " << n1 << "	Score2: " << n2 << "	Sum: " << n1 + n2 << "	Avg: " << (n1 + n2)/2.0 << endl;
		}
	}
	ifs.close();
	
}