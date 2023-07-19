// Crypto trading platform.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include<vector>
#include<string>
#include"OrderBookEntry.h"
#include"MerkelMain.h"




int main()
{
	MerkelMain app{};
	app.init();
}

/*


	//double price = 5319.450228;
	//double amount = 0.00020075;
	//std::string timestamp{ "2020/03/17 17:01:24.884492" };
	//std::string product{ "BCT/USDT" };
	//OrderBookType orderType = OrderBookType::ask;

	//std::vector<double> prices;
	//std::vector<double> amounts;
	//std::vector<std::string> timestamps;
	//std::vector<std::string> products;
	//std::vector<OrderBookType> orderTypes;

	//prices.push_back(500.01);
	//amounts.push_back(0.001);
	//timestamps.push_back("2020/03/17 17:01:24.884492");
	//products.push_back("BTC/USDT");
	//orderTypes.push_back(OrderBookType::bid);

	//prices.push_back(10.01);
	//amounts.push_back(0.001);
	//timestamps.push_back("2020/03/17 17:01:24.884492");
	//products.push_back("BTC/USDT");
	//orderTypes.push_back(OrderBookType::bid);

	//std::cout << "prices: " << prices[0] << std::endl;
	//std::cout << "prices: " << prices[1] << std::endl;

	//while (true) //when type ctrl + c then exists the console (stops)
	//{
	//	prinMenu();
	//	int userOption = getUserOption();
	//	processUserOption(userOption);
	//}

	/*

	*/
/*
std::vector<OrderBookEntry> orders;*/
//do that in vector.
/*OrderBookEntry order1{ 1000,0.02,"2020/03/17 17:01:24.884492" ,"BTC/USDT" ,OrderBookType::bid };
OrderBookEntry order2{ 3000,0.02,"2020/03/17 17:01:24.884492" ,"BTC/USDT" ,OrderBookType::bid };
*/
/*
orders.push_back(OrderBookEntry{ 1000,0.02,"2020/03/17 17:01:24.884492" ,"BTC/USDT" ,OrderBookType::bid });
orders.push_back(OrderBookEntry{ 2000,0.02,"2020/03/17 17:01:24.884492" ,"BTC/USDT" ,OrderBookType::bid });

//std::cout << "The price is " << orders[1].price << std::endl;

//Way 1
//iterrate vector . when using & it not make copyies
for (OrderBookEntry& order : orders) {
	std::cout << "The price is " << order.price << std::endl;
}

//Way 2
//Another way to itertate vector it not copying data 
for (unsigned int i = 0; i < orders.size(); ++i) {// ++i is more efficient than i++. ++i is increment derectly 		
	std::cout << "The price is " << orders[i].price << std::endl;
}

//Way 3
for (unsigned int i = 0; i < orders.size(); ++i) {// ++i is more efficient than i++. ++i is increment derectly 		
	std::cout << "The price is " << orders.at(i).price << std::endl;//more object stlye syntax
}


return 0; 
*/

