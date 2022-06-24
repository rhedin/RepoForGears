-- ///////////////////////////////////
-- ///////////////////////////////////
-- ///////////////////////////////////
-- WARNING
-- This file has been auto-generated.
-- Do NOT make modifications directly to it as they will be overwritten!
-- ///////////////////////////////////
-- ///////////////////////////////////
-- ///////////////////////////////////

-- Project names:
local base_name = 'ExampleShoppingCart'
local component_project_name = base_name
local library_project_name = base_name .. 'Library'
local unittest_project_name = base_name .. 'UnitTest'

-- Projects:
if _ACTION == 'vs2010' then
externalproject( component_project_name )
  location ( project_root .. 'vs2010' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2010' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2010' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

if _ACTION == 'vs2012' then
externalproject( component_project_name )
  location ( project_root .. 'vs2012' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2012' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2012' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

if _ACTION == 'vs2013' then
externalproject( component_project_name )
  location ( project_root .. 'vs2013' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2013' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2013' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

if _ACTION == 'vs2015' then
externalproject( component_project_name )
  location ( project_root .. 'vs2015' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2015' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2015' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

if _ACTION == 'vs2017' then
externalproject( component_project_name )
  location ( project_root .. 'vs2017' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2017' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2017' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

if _ACTION == 'vs2019' then
externalproject( component_project_name )
  location ( project_root .. 'vs2019' )
  uuid ( 'e074f1b9-c66c-4507-a563-09605f4cff93' )
  kind ( 'SharedLib' )
  language ( 'C++' )

externalproject( library_project_name )
  location ( project_root .. 'vs2019' )
  uuid ( 'd05507b3-7ef8-459d-aac2-9f88cf6d3fc0' )
  kind ( 'StaticLib' )
  language ( 'C++' )

externalproject( unittest_project_name )
  location ( project_root .. 'vs2019' )
  uuid ( 'a64997cc-611c-499f-821d-7d9fece7cfe8' )
  kind ( 'ConsoleApp' )
  language ( 'C++' )
end

