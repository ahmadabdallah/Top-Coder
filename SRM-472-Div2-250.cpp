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

//SRM 472 Div 2 

class ColorfulTilesEasy
{
public:

	int theMin(string room)
	{
		int result = 0;

		for (int i = 1; i < room.length(); i++)
		{
			if (room[i] == room[i - 1])
			{
				result++;
				++i;
			}
		}
		return result;
	}
};
