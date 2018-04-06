/*
Author: David Persico
Test file checks for issues
I had trouble using this to fix my program.
*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Store.h"
#include <string>
#include <vector>
#include <map>


TEST_CASE ( "Read/Write")
  {
  SECTION( "Read then Write creates identical file" )
    {
    Store s;
    std::vector<std::string> firstRead = s.ReadStore();
    s.WriteStore();
    REQUIRE(firstRead == s.ReadStore());
    }
  SECTION( "Read, inventory and name strip, rebuilt and final Write creates identical file" )
    {
    Store s;
    std::vector<std::string> firstRead = s.ReadStore();
    std::map<double,std::pair<int,std::string>> si;
    si =  s.GrabInventory();
    std::vector<std::string> name = s.GrabStoreName();
    s.RebuildStore(name);
    s.WriteStore();
    REQUIRE(firstRead == s.ReadStore());
    }
  }
