/*
*
* Copyright(c) 2018 Bohemia Interactive Simulations, Inc.
* http://www.bisimulations.com
*
* For information about the licensing and copyright of this software please
* contact Bohemia Interactive Simulations, Inc. at contact @ bisimulations.com.
*
*/

/*
* ///////////////////////////////////
* ///////////////////////////////////
* ///////////////////////////////////
* WARNING
* This file has been autogenerated.
* Do NOT make modifications directly to it as they will be overwritten!
* ///////////////////////////////////
* ///////////////////////////////////
* ///////////////////////////////////
*/

/*
* GEARS NOTES:
* Gears Components now utilize a static library dependency.
* All of the implementation details have been moved into this static library.
*
* The purpose of the Component project is to provide a DLL container for the functionality
* defined in the static library.
*
* Additional source files that are added to the folder containing this file will belong
* to the static library project.
*/

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <CoreAPI.h>

// The NOLINT comment is to surpress Clang Tidy static analysis warning for "no previous prototype"
GEARS_EXPORT BOOL GEARS_API DllMain(HINSTANCE dll_handle, DWORD reason_for_call, LPVOID reserved) // NOLINT
{
  UNREFERENCED_PARAMETER(dll_handle);
  UNREFERENCED_PARAMETER(reserved);

  switch(reason_for_call)
  {
  case DLL_PROCESS_ATTACH:
    break;
  case DLL_PROCESS_DETACH:
    break;
  case DLL_THREAD_ATTACH:
    break;
  case DLL_THREAD_DETACH:
    break;
  }

  return TRUE;
}
