ExampleShoppingCart
=============
ExampleShoppingCart is an example Gears Component meant to be used with the tutorial found in the Gears Studio documentation. For more information and to download Gears Studio, see [Gears Studio](#gears-studio) below.

This component is meant to simulate a basic shopping cart which users can interface with through its API, *ExampleShoppingCartAPI*. Before completing the tutorial, the API will only expose one function, *AddItem*, which adds an item to the shopping cart. After completing the tutorial, the API will expose functions for clearing and totaling the items.

Example
--------
The *ExampleShoppingCartAPI* can be accessed from your Gears Component that you create through Gears Studio. The tutorial will walk you through how to create a new component and how to add *ExampleShoppingCartAPI* as a dependency. Once the component is created you can simply request *ExampleShoppingCartAPI* from Gears.
```cpp
api_manager->RequestAPI(ExampleShoppingCartAPI_Handle, 1, (void**)&g_shopping_cart_api);
```

After requesting the API, you can easily make call into the component.
```cpp
g_shopping_cart_api->AddItem("Milk", 3.59f);
g_shopping_cart_api->AddItem("Bread", 1.99f);
g_shopping_cart_api->AddItem("Chicken", 5.20f);
```

In the tutorial, the console window will log calls to the API to let you know they're being called successfully.

![ExampleMartConsole](/uploads/7a80adc7d5c9bbc8f8d72a6f1b0ceb4d/ExampleMartConsole.png)

Gears Studio
--------
The Gears framework and its companion tool Gears Studio were created to prevent common pitfalls and to automate common tasks encountered in software development. Gears uses a component-based architecture to promote rapid development by building applications from self-contained systems and having them communicate via formally defined interfaces. This allows functionality to be reused and avoids the complexity of tightly coupled systems. Gears provides the advantages of a component-based architecture while Gears Studio automates tasks to facilitate its implementation.

![GearsLogo](/uploads/5ffb085d864084d667997a6614707ab7/GearsLogo.png) TODO :: Add link

License
--------
TODO :: Add license
