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

//SRM 630 Div 2 
class DoubleLetter
{
public:
	string ableToSolve(string S)
	{
		int idx = 0;
		while (true)
		{
			if (S.length() > 1 && idx<S.length() - 1)
			{
				if (S[idx] == S[idx + 1])
				{
					S.erase(idx, 2);
					idx = 0;
				}
				else
				{
					idx++;
				}
			}
			else
			{
				break;
			}
		}
		if (S.length())
		{
			return "Impossible";
		}
		else
		{
			return "Possible";
		}
	}
};