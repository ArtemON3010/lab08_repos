#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №8.1.(4)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char k[] = { "fewf,-,-,-ewfwef" };
			t = Count(k);
			Assert::AreEqual(t, 3);
		}
	};
}
