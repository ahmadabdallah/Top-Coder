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


//SRM 604 Div 2 
bool visited[10000][10000] = { {false} };
class FoxAndWord
{
public :
	bool isInteresting(string str1,string str2)
	{

		for (int i = 1; i < str1.length(); i++)
		{
			string secondhlf=str1.substr(i,str1.length() -i);
			string  firsthlf=str1.substr(0,i);
			if(secondhlf+firsthlf==str2)
			return true;
		}
		
		return false;

	}
	int howManyPairs(vector <string> words)
	{
		int result=0;
		for (int i = 0; i < words.size(); i++)
		{
			for (int j = 0; j < words.size(); j++)
			{
				if(i!=j)
				{
					if(isInteresting(words[i],words[j])&&!visited[i][j])
					{
						result++;
					}
					visited[i][j]=true;
					visited[j][i]=true;
				}
			}

		}
		return result;
	}
};