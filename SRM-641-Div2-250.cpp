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

//SRM 641 Div 2 
class BuyingTshirts
{
public:
	int meet(int T, vector <int> Q, vector <int> P)
	{
		int result = 0;
		int Qsum = 0;
		int Psum = 0;
		for (int i = 0; i < Q.size(); i++)
		{
			Qsum += Q[i];
			Psum += P[i];
			if (Qsum >= T && Psum >= T)
			{
				++result;
				Qsum = Qsum - T;
				Psum = Psum - T;

			}
			else if (Qsum >= T)
			{
				Qsum = Qsum - T;
			}
			else if (Psum >= T)
			{
				Psum = Psum - T;
			}

		}
		return result;
	}
};