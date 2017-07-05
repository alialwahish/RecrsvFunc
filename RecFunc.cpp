// Name: Ali Bayati 
// Recursive functions

//Note: 
// This file is for both problems I've saperated the output and created 2 functions :
//double sumover(int ) "for problem 5" .
//bool isPal(const string& , int , int)  "for the other problem" .


#include<iostream>
#include<string>


using namespace std;
double sumover(int );
bool isPal(const string& , int , int);

int main()
{
	int n=290;
	cout << "Problem 5\n";
	cout << "Recursive function 1/n for n=290 :" << endl;
					
	cout<<"= "<<sumover(n)<<endl;
	cout << "End of problem 5: \n\n";

	
	string w1, w2;
	
	cout << "isPal function :\n";
	cout << "Enter the first word you wanna check if it's PALINDROME :";
	getline(cin, w1);
		
	
	if (isPal(w1, 0, w1.size()) == 1)
		cout << "The word is PALINDROME : " << w1 << endl;
	else
		cout << "It's NOT PALINDROME !" << endl;

	cout << "Enter the second word you wanna check if it's PALINDROME:";
	getline(cin, w2);
		if (isPal(w2, 0, w2.size()) == 1)
		cout << "The word is PALINDROME : " << w2 << endl;
		else
			cout << "It's NOT PALINDROME !" << endl;
	return 0;
}

double sumover(int n)
{
	if (n > 0)
		return (double(1) / double(n) + sumover(double(n) - double(1)));
	else
		return 0;
}
bool isPal(const string& w, int s, int e)
{
		
	if (w[s] == w[e - 1] && (s != e) && (s - 1 != e))
		{
			isPal(w, s + 1, e - 1);
		}

		else if (w[s] != w[e - 1])
			return false;
		else
			return true;
		
}	
/*Output 

Recursive function 1/n for n=290 :
= 6.24882


isPal function :
Enter the first word you wanna check if it's PALINDROME :madamimadam
The word is PALINDROME : madamimadam
Enter the second word you wanna check if it's PALINDROME:alibayati
It's NOT PALINDROME !
Press any key to continue . . .
*/