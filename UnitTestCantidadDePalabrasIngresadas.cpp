#include "pch.h"
#include "CppUnitTest.h"
#include "../C++Dic12CantidadDePalabrasEnString/C++Dic12CantidadDePalabrasEnString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCantidadDePalabrasIngresadas
{
	TEST_CLASS(UnitTestCantidadDePalabrasIngresadas)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
			char line[100] = "We will rock you";

			//Act
			int result = main();

			//Assert
			Assert::AreEqual(4, result);

		}
	};
}
