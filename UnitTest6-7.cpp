#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab6---7\lab6---7\Array.cpp"
#include "C:\Users\Софія\source\repos\lab6---7\lab6---7\Source.cpp"
#include "../lab6---7/Functors.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest67
{
	TEST_CLASS(UnitTest67)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array b;
			int a = b.size();
			Assert::AreEqual(a, 10);
		}
	};
}
