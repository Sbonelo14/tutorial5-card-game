#pragma once
#ifndef CARD_H
#define CARD_H
class Card
{
private:
	int num = 0;
	string Col = " ";

public:
	Card(int, string);
	~Card();
	bool Card::Col();
	int Card::num();
	void Card::print();
};
#endif