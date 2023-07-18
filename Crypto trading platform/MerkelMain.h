#pragma once
#include<iostream>

class MerkelMain{
	public:
		MerkelMain();
		void init();

		void prinMenu();
		void printHelp();
		void printMarketStats();
		void enterOffer();
		void enterBid();
		void printWallet();
		void gotoNextTimeFrame();
		int getUserOption();
		void processUserOption(int userOption);
		
};