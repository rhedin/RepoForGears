/*
*
* Copyright(c) 2018 Bohemia Interactive Simulations, Inc.
* http://www.bisimulations.com
*
* For information about the licensing and copyright of this software please
* contact Bohemia Interactive Simulations, Inc. at contact @ bisimulations.com.
*
*/

#pragma once

#include <string>
#include <vector>

class ShoppingCart
{
public:
  ShoppingCart();
  void AddItem(const std::string& name, float price);

  // TODO :: Declare 'Clear' and 'GetTotalPrice' functions here

private:
  struct Item
  {
    std::string name;
    float price;
  };

  std::vector<Item> _items;
};
