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

//SRM 639 Div 2 
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		for (int i = 0; i < t1; i++)
		{
			for (int j = 0; j < t2; j++)
			{
				if ((st1 + i*p1) == (st2 + j*p2)) return "Difficult";
			}
		}

		return "Easy";
	}
};