#pragma once
#include<iostream>

class MerkelMain{
	public:
		MerkelMain();
		/** Call this ro start sim */

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