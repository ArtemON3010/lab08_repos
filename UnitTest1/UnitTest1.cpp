#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №8.1(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char k[] = { "^*&,-8,-2738" };
			t = Count(k);
			Assert::AreEqual(t, 2);
		}
	};
}
