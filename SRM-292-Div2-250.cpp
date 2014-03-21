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

//SRM 292 div 2
class FowlRoad
{
public:
	int crossings(int roadY, vector <int> bobX, vector <int> bobY)
	{
		int result=0;
		bool north=(bobY[0]>=roadY)?true:false;
		for (int i = 1; i < bobY.size(); i++)
		{
			//south to north
			if((bobY[i-1]<roadY&&bobY[i]>roadY)||(bobY[i-1]==roadY&&bobY[i]>roadY)&&!north)
			{
				++result;
				north=true;
			}
			// north to south
			else if((bobY[i-1]>roadY&&bobY[i]<roadY)||(bobY[i-1]==roadY&&bobY[i]<roadY)&&north)
			{
				north=false;
				++result;
			}
		}
		return result;
	}
};