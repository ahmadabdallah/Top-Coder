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

//SRM 433 div 2 250
class RoyalTreasurer
{
public:

	int minimalArrangement(vector <int> A, vector <int> B)
	{
		std::sort(A.begin(),A.end());
		std::sort(B.begin(),B.end());
		std::reverse(B.begin(),B.end());

		int result=0;

		for (int i = 0; i < A.size(); i++)
		{
			result+=A[i]*B[i];
		}

		return result;
	}

};