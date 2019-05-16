#include "ShoppingCart.h"
#include <iostream>
#include <iomanip>

ShoppingCart::ShoppingCart()
{
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
}

void ShoppingCart::AddItem(const std::string& name, float price)
{
  Item new_item;
  new_item.name = name;
  new_item.price = price;

  _items.push_back(std::move(new_item));

  std::cout << "Added  \"" << name << "\" for $" << price << "\n";
}

// TODO :: Define 'Clear' and 'GetTotalPrice' functions here
