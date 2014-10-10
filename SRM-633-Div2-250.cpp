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

//SRM 634 Div 2 
class MountainRanges
{
public:
	int countPeaks(vector <int> heights)
	{
		int result = 0;
		for (int i = 0; i < heights.size(); i++)
		{
			if (i == 0)
			{
				if (heights[i]>heights[i + 1])
				{
					++result;
				}
			}
			else if (i == heights.size() - 1)
			{
				if (heights[i] > heights[i - 1])
				{
					++result;
				}
			}
			else
			{
				if ((heights[i] > heights[i - 1]) && (heights[i] > heights[i + 1]))
				{
					++result;
				}
			}
		}
	}
};