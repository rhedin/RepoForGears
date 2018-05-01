#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

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

#endif
