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


//SRM  467 div 2 
class  ShorterSuperSum
{
public :	
	int calculate(int k, int n)
	{
		int result=0;

		if(k==0)
			return n;
		else
		{
			for (int i = 1; i <= n; i++)
			{
				result+=calculate(k-1,i);
			}

		}
		return result;
	}
};