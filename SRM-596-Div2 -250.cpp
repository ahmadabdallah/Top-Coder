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

//SRM 596 div 2
class FoxAndSightseeing
{
public:
	int getMin(vector <int> position)
	{
		vector<int>distance;
		int sum=0;
		int result=numeric_limits<int>::max();
		for (int i = 1; i < position.size()-1; i++)
		{
			int tmp=position[i];
			position.erase(position.begin()+i,position.begin()+i+1);

			for (int j = 0; j < position.size()-1; j++)
			{
				sum+=abs(position[j]-position[j+1]);
			}
			result=std::min(result,sum);
			position.insert(position.begin()+i,tmp);
			sum=0;

		}
		return result;
	}
};