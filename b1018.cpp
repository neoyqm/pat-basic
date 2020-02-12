//仅供本人参考
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int z1[3] = { 0 };
	int z2[3] = { 0 };
	int wa = 0, pa = 0, la = 0;
	int wb = 0, pb = 0, lb = 0;
	char a, b;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;

		if (a == 'B' && b == 'C')
		{
			wa++, lb++;
			z1[0]++;
		}//a出布，b出锤子，a win
		//平局可以不用算，用n-即可
		if (a == 'B' && b == 'J')
		{
			la++, wb++;
			z2[2]++;
		}//a出布，b出剪刀，b win
		if (a == 'C' && b == 'B')
		{
			//a 出锤子，b出布 b win
			la++, wb++;
			z2[0]++;
		}
		if (a == 'C' && b == 'J')
		{//a 出锤子 b出剪刀，a win
			wa++, lb++;
			z1[1]++;

		}
		if (a == 'J' && b == 'B') {
			//a 出剪刀 b出 布，a win
			wa++, lb++;
			z1[2]++;
		}
		if (a == 'J' && b == 'C') {
			//a 出剪刀，b出锤子，b win
			la++, wb++;
			z2[1]++;
		
		}
	}
		pa = n - wa - la;
		cout << wa << " "<<pa<<" " << la << endl;
		cout << wb << " "<<pa<<" " << lb << endl;
		int max1 = 0; int x1;
		for (int i = 0; i < 3; ++i)
		{
			if (z1[i] > max1)
			{
				max1= z1[i];
				x1= i;
			}
		}
		int max2 = 0, x2 = 0;
		for (int i = 0; i < 3; ++i)
		{
			if (z2[i] > max2)
			{
				max2 = z2[i];
				x2= i;
			}
		}
		if (x1 == 0)
			cout << "B" << " ";
		if (x1 == 1)
			cout << "C" << " ";
		if (x1 == 2)
			cout << "J" << " ";
		if (x2 == 0)
			cout << "B" << " ";
		if (x2 == 1)
			cout << "C" << " ";
		if (x2 == 2)
			cout << "J" << endl;

}
