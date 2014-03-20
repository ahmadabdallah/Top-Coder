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

//SRM 611 div 2 
class InterestingNumber
{
public:
	string isInteresting(string x)
	{
	
		for (int d = 0; d < 10; d++)
		{
			vector<int> numIdx;
			for (int i = 0; i < x.length(); i++)
			{
				if(x[i]==d+'0')
				{
					numIdx.push_back(i);
				}
			}

			if(numIdx.size()==0)
				continue;
			if(numIdx.size()==2)
			{
				if(numIdx[1]!=numIdx[0]+d+1 )
				return "Not interesting";
			}
			else
			{
				return "Not interesting";
			}
		}
		return "Interesting";
	}

};