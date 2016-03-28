#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int num = 0;
	string col = " ";
public:
	int Cards[20];
	Card::Card()

	{
		int num;
		string col;

		if (num> 0 && num < 10 && col == "red" || col == "black")
		{
			num = num;
			col= col;
		}

	}

	Card::~Card()
	{
	}

	string Card::Col()
	{
		return col;

	}
	int Card::num()
	{
		return num;
	}

	void Card::print()
	{
		cout << Col() << " " << num() << endl;
	}
};