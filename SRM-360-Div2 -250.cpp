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

//SRM 360 div 2 accepted 
class AzimuthMonitoring
{
public:

	int getAzimuth(vector <string> instructions)
	{

		int Curr=0;

		for (int i = 0; i < instructions.size(); i++)
		{
			if(instructions[i]=="LEFT")
			{
				Curr-=90;
				if(Curr<0)
					Curr+=360;
			}
			else if(instructions[i]=="RIGHT")
			{
				Curr+=90;
				if(Curr>=360)
					Curr-=360;
			}
			else if(instructions[i]=="TURN AROUND")
			{
				Curr+=180;
				if(Curr>=360)
					Curr-=360;
			}
			else if(instructions[i]=="HALT")
				break;
			else
			{
				string Direction;
				int Degree;
				istringstream iss(instructions[i]);
				iss >> Direction;
				if(Direction=="RIGHT")
				{
					iss >> Degree;
					Curr+=Degree;
					if(Curr>=360)
						Curr-=360;

				}
				else
				{
					iss >> Degree;
					Curr-=Degree;
					if(Curr<0)
						Curr+=360;
				}
			}


		}
		return Curr;
	}
};

