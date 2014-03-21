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

//SRM 613 Div 2 
class TaroString
{
public:
	string getAnswer(string S)
	{

		char C='C';
		char A='A';
		char T='T';
		int count=0;
		do
		{
			if(S[count]!=C&&S[count]!=A&&S[count]!=T)
			{
				S.erase(count,1);
			}
			else
				count++;
			if(count==S.length())
				break;
		} while (true);

		if(S=="CAT")
			return "Possible";
		else
			return "Impossible";


	}

};