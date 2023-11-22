#include "pch.h"
#include "CppUnitTest.h"
#include "../пр13.1/dod.h"
#include"../пр13.1/dod.cpp"
#include "../пр13.1/var.cpp"
#include"../пр13.1/var.h"
#include"../пр13.1/sum.h"
#include"../пр13.1/sum.cpp"
#include"../пр13.1/13.1.cpp"

using namespace nsVar;

using namespace nsDod;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0.1;
			n = 2;
			a = 1;
			dod();
			Assert::AreEqual(a, 0.1, 0.1);
		}
	};
}
