#pragma once  //only include pragrma once
#include<iostream>
#include<vector>
#include "OrderBookEntry.h"


class MerkelMain{
	public:
		MerkelMain();
		/** Call this ro start sim */
		void init();

	private:
		void loadOderBook();
		void prinMenu();
		void printHelp();
		void printMarketStats();
		void enterOffer();
		void enterBid();
		void printWallet();
		void gotoNextTimeFrame();
		int getUserOption();
		void processUserOption(int userOption);

		std::vector<OrderBookEntry> orders;

		
};