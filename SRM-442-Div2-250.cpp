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

//SRM 442 div 2
class SimpleWordGame
{
public :
	int points(vector <string> player, vector <string> dictionary)
	{
		set<string> remembered;
		int score=0;
		for (string p : player)
		{
			for( string dict : dictionary)
			{
				if(p==dict)
					remembered.insert(p);
			}
		}
		for(string  word : remembered)
		{
			score+=pow(word.length(),2);
		}
		return score;
	}
};