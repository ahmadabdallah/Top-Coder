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

//SRM 597 div2 
class LittleElephantAndDouble
{
public :
	string getAnswer(vector <int> A)
	{
		for (int i = 0; i < A.size(); i++)
		{
			while (A[i]%2==0)
			{
				A[i]/=2;
			}
		}
		for (int i = 1; i < A.size(); i++)
		{
			if(A[i]!=A[0])
				return "NO";
		}
		return "YES";
	}
};