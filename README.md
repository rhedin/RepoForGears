ExampleShoppingCart
=============
ExampleShoppingCart is an example Gears Component meant to be used with the Getting Started width Gears Studio tutorial found in the Gears Studio documentation. For more information and to download Gears Studio, see [Gears Studio](#gears-studio) below.  
  
This component is setup to simulate a basic shopping cart that users can interface with through its API, *ExampleShoppingCartAPI*. The initial API implementation only exposes one function, *AddItem*, which adds an item to the shopping cart. The tutorial instructions will explain how to implement additional API functionality. This includes calculating the total sum of items in the cart and clearing the cart of all items.  
  
Example
--------
The *ExampleShoppingCartAPI* can be accessed from your Gears Component that you create through Gears Studio. The tutorial will walk you through how to create a new component and how to add *ExampleShoppingCartAPI* as a dependency. Once the component is created you can simply request *ExampleShoppingCartAPI* from Gears.  
  
```cpp
ExampleShoppingCartAPI_v1* g_shopping_cart_api = nullptr;
api_manager->RequestAPI(ExampleShoppingCartAPI_Handle, 1, (void**)&g_shopping_cart_api);
```
  
After requesting the API, you can easily make calls into the component.  
```cpp
g_shopping_cart_api->AddItem("Milk", 3.59f);
g_shopping_cart_api->AddItem("Bread", 1.99f);
g_shopping_cart_api->AddItem("Chicken", 5.20f);
```
  
In the tutorial, the console window will log calls to the API to let you know they're being called successfully.
  
![ExampleMartConsole](/uploads/80626d10d4470da3f2b9242a532fe6b8/ExampleMartConsole.png)
  
Gears Studio
--------
![GearsLogo](/uploads/0df62fb11daf6ee6673c5aaa5a1e8e5f/GearsStudioInstaller.bmp)

The Gears framework and its companion tool Gears Studio were created to prevent common pitfalls and to automate common tasks encountered in software development. Gears uses a component-based architecture to promote rapid development by building applications from self-contained systems and having them communicate via formally defined interfaces. This allows functionality to be reused and avoids the complexity of tightly coupled systems. Gears provides the advantages of a component-based architecture while Gears Studio automates tasks to facilitate its implementation.  
  
For more information and to download Gears Studio: [www.gears.studio](http://www.gears.studio)
  
License
--------
TODO :: Add license
