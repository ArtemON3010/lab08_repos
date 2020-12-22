#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №8.1(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char k[] = { "920,-2dwd,-232" };
			t = Count(k,0);
			Assert::AreEqual(t, 2);
		}
	};
}
