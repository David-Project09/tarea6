#include<iostream>
#include<string>
using namespace std;


int main()
{
	int number;
	int sum = 0;
    cout << "select numbers" << endl;
    cin >> number;
    string x = to_string(number);

   for (
	   int i = 0; i < x.length(); i++) 
   {
	char y = x[i];
	int num = y - '0';
	sum += num;

    }
	cout <<"the number has these digits..."<< x.length()<<endl;
	cout <<"the sum of the numbers is..."<<sum<<endl;
}
