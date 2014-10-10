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

//SRM 632 Div 2 
class RunningAroundPark
{
public:
	int numberOfLap(int N, vector <int> d)
	{
		int result = 1;
		for (int i = 1; i < d.size(); i++)
		{
			if (d[i] < d[i - 1])
				++result;
		}
		return result;
	}
};