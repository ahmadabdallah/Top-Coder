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

//SRM 625 Div 2 
class AddMultiply
{
public:
	vector <int> makeExpression(int y)
	{
		vector<int> result;

		for (int i = -1000; i < 1000; i++)
		{
			for (int j = -1000; j < 1000; j++)
			{
				for (int k = -1000; k < 1000; k++)
				{
					int x, t, z;
					x = i;
					t = j;
					z = k;
					if ((x != 0 && x != 1) && (t != 0 && t != 1) && (z != 0 && z != 1))
					{
						int temp = (x*t) + z;
						if (temp == y)
						{
							result.push_back(x);
							result.push_back(t);
							result.push_back(z);
							return result;
							break;
						}
					}
				}

			}
		}
		return result;
	}
};