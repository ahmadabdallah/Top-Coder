#include <string>
#include <bitset>
#include <limits>
#include<math.h>
#include<cmath>
#include<fstream>
#include<bitset>
#include<vector>
#include <sstream>
#include<algorithm>
#include<time.h>
#include<set>
#include<map>
#include<iostream>
#include <numeric>

using namespace std;

//SRM 396 Div 2 
class VerifyCreditCard
{
public:

	string checkDigits(string cardNumber)
	{
		bool odd = false;
		odd = (cardNumber.length() % 2 == 0) ? false : true;
		vector<int> num;
		for (int i = 1; i <= cardNumber.length(); i++)
		{
			int numb = cardNumber[i - 1] - '0';
			if (odd)
			{
				if (i % 2 == 0)
				{

					numb *= 2;
					num.push_back(numb);
				}
				else
					num.push_back(numb);

			}
			else
			{
				if (i % 2 != 0)
				{
					numb *= 2;
					num.push_back(numb);

				}
				else

					num.push_back(numb);

			}

		}
		int sum = 0;
		for (int i = 0; i < num.size(); i++)
		{
			do {
				int digit = num[i] % 10;
				sum += digit;
				num[i] /= 10;
			} while (num[i] > 0);

		}
		if (sum % 10 == 0)
			return "VALID";
		else
			return "INVALID";
	}
};
