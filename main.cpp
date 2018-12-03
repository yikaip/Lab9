//Yikai Peng
//Lab9
//Dec.3.18

#include<iostream>
#include<string>
#include<fstream>
#include<ostream>
#include<map>
using namespace::std;

int main()
{
	string str("");
	ifstream infile;
	map<string, int> tally;
	map<string, int>::iterator it;
	infile.open("example.txt");
	if (infile.is_open()) //see if the file is opened
	{
		while (!infile.eof()) //scan through the file
		{
			infile >> str;
			++tally[str];
		}
		//while (infile >> str)
		//{
			//if (tally.count(str) > 0)
			//{
			//	++tally[str];
			//}
			//else
			//{
			//	tally[str] = 1;
			//}
		//}
	}
	infile.close();

	//int size = tally.size();
	ofstream output;
	output.open("output.txt");
	for (it = tally.begin(); it != tally.end(); ++it)//iterator of a amp
	{
		for (int i = 0; i < it->second; i++)
		{
			output << it->first;
		}
	}
	output.close();

	system ("pause"); //to display and end the file
	return 0;
}
