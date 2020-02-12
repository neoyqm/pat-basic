

//本题仅17/20
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	double a4 = 0;
	cin >> n;
	int a;
	int m[1000] = { 0 };
	int w[1000] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		cin >> m[i];

	}

	for (int i = 0; i < n; ++i)
	{
		w[i] = m[i] % 5;


	}
	for (int i = 0; i < n; ++i) {
		if (m[i] % 10 == 0)
			a1 = a1 + m[i];

	}
	int cbt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (w[i] == 1)
		{

			if (cbt % 2 == 0)
				a2 += m[i];
			else

				a2 -= m[i];

			cbt++;


		}
	}
	//a2
	int cnt3 = 0;
	for (int i = 0; i < n; ++i)
	{

		if (w[i] == 2)
			cnt3++;

	}
	a3 = cnt3;


	int cnt4 = 0;
	double aver;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (w[i] == 3) {
			cnt4++;
			sum = sum + m[i];

		}



	}
	aver = sum * 1.0 / cnt4;
	a4 = aver;
	//a4;
	int max = 0;
	//a5
	for (int i = 0; i < n; ++i)
	{
		if (w[i] == 4)
		{

			if (m[i] > max)
				max = m[i];

		}


	}
	a5 = max;
	//****************************************	
	if (a1 == 0) {

		cout << "N";
		cout << " ";
	}
	else {
		cout << a1;
		cout << " ";
	}

	if (a2 == 0) {

		cout << "N";
		cout << " ";
	}
	else {
		cout << a2;
		cout << " ";
	}
	if (a3 == 0) {

		cout << "N";
		cout << " ";
	}
	else {
		cout << a3;
		cout << " ";
	}
	if (a4 == 0)
	{
        cout << "N";
		cout << " ";
	}
	else {
		cout << a4<<setprecision(1);
		cout << " ";
	}
	if (a5 == 0) {

		cout << "N";
		cout << " ";
	}
	else {
		cout << a5;

	}

}
