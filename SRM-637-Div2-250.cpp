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

//SRM 637 Div 2 
class GreaterGameDiv2
{
public:
	int calc(vector <int> snuke, vector <int> sothe)
	{
		int snuke_points = 0;

		for (int i = 0; i < snuke.size(); i++)
		{
			if (snuke[i]>sothe[i])
				snuke_points++;
		}

		return snuke_points;
	}
};