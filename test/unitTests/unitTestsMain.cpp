// Compile implementation of Catch for use with files that do contain tests:
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 000-CatchMain.cpp
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% -c 000-CatchMain.cpp

// Powershell to compile tests and run them:
// g++ -Wall test/unitTests/unitTestsMain.cpp test/unitTests/exampleCheckNumbers.cpp -o test/compiledTests ; ./test/compiledTests ; Remove-Item -Path ./test/compiledTests.exe

// Compile & run from examples (Not working on Adrian's Windows machine):
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 020-TestCase-1.cpp
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 020-TestCase TestCase-1.o 020-TestCase-2.cpp && 020-TestCase --success

// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% -c 020-TestCase-1.cpp
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% -Fe020-TestCase.exe 020-TestCase-1.obj 020-TestCase-2.cpp && 020-TestCase --success


#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"