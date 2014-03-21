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

//SRM 512 Div 2
class MarbleDecoration
{
public :
	int maxLength(int R, int G, int B)
	{

		vector<int> num;
		num.push_back(R);
		num.push_back(G);
		num.push_back(B);
		std::sort(num.begin(),num.end());
	
		int max1=num[1];
		int max2=num[2];
		if(max1==max2)
			return 2*max1;
		else
			return std::min(max1,max2)*2+1;
	}
};