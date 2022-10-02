#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;
                   
int main()
{
	string S1, S2;
	int k = 0;
	cout << "input string 1, 2: " << endl;
	cin >> S1 >> S2;
	if (S1.length() == S2.length()) {
		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != S2[i])
			{
				k = 0;
			}
			else {
				k += 1;
			}
		}
	}
	else {
		cout << "No";
	}
	if (k == S1.length()) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}