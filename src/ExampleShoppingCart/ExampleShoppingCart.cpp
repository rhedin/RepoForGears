#include "ExampleShoppingCart.h"
#include "Version.h"
#include "ShoppingCart.h"
#include <iostream>

ShoppingCart g_shopping_cart;

//Note:
//This file is partially autogenerated
//It is safe to make modifications to most of the file, however please don't modify the API function signatures
APIResult GEARS_API Component_Initialize(_In_ const char* component_folder)
{
  //GEARS NOTE: Use this function to perform component initialization.
  //Access to other components is unavailable.
  std::cout << "ExampleShoppingCart loaded!\n";
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_OnStart(_In_ APIManager_v5* api_manager, _In_ NativeModuleHandle proxy_handle)
{
  //GEARS NOTE: Use this function to connect to other components.
  //Using the specified api_manager variable, this component can request access
  //to APIs that have been registered with Gears.

  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_OnStop()
{
  //GEARS NOTE: Use this function to perform "last chance" functionality.
  //All components are still accessible.
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_Shutdown()
{
  //GEARS NOTE: Use this function to cleanup any resources that were allocated.
  //This component's shared library is about to be unloaded.
  //Access to other components is unavailable.
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_IsParallelizable(_Out_ bool32_t* parallelizable)
{
  //GEARS NOTE: Set parallelizable to TRUE to enable this component's OnStart to be called from a spawned thread
  *parallelizable = FALSE;
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_GetName(_Inout_ int32_t* name_length, _Out_opt_ char* name)
{
  //GEARS NOTE: Use this function to fill out the name string with the name of the component.
  //Defaulted to return the official component name
  static const char* kComponentName = "ExampleShoppingCart";

  if(name_length == nullptr)
  {
    return kAPIResult_ParamsInvalid;
  }

  if(name == nullptr)
  {
    *name_length = static_cast<int32_t>(strlen(kComponentName) + 1);
  }
  else
  {
    strcpy_s(name, *name_length, kComponentName);
  }
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API Component_GetVersion(_Inout_ int32_t* version_length, _Out_opt_ char* version)
{
  //GEARS NOTE: Use this function to fill out the version string with the version of the component.
  //Defaulted to return the auto generated/incremented version from Version.h
  static const char* kVersion = VERSION;

  if(version_length == nullptr)
  {
    return kAPIResult_ParamsInvalid;
  }

  if(version == nullptr)
  {
    *version_length = static_cast<int32_t>(strlen(kVersion) + 1);
  }
  else
  {
    strcpy_s(version, *version_length, kVersion);
  }
  return kAPIResult_GeneralSuccess;
}

APIResult GEARS_API ExampleShoppingCart_AddItem(_In_ const char* item_name, _In_ float32_t price)
{
  // Add the item to the shopping cart
  g_shopping_cart.AddItem(item_name, price);

  return kAPIResult_GeneralSuccess;
}

