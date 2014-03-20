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


//SRM 578 div 2 accepted
class DeerInZooDivTwo
{
public:
	vector <int> getminmax(int N, int K)
	{
		int min=0;
		int max;
		if(N>K)
			min=N-K;
		else 
			min=0;

		max=(N*2-K)%2;

		vector<int>res;
		res.push_back(min);
		res.push_back(max);
	}
};
