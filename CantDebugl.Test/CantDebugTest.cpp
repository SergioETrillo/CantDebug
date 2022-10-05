#include "stdafx.h"

#include <string>
#include <vector>

using namespace NUnit::Framework;

namespace CantDebugTest
{
    [TestFixture]
    public ref class CantDebugTest
    {
    public:
        [Test]
        void test_cant_debug()
        {
            CList<std::string> stringList;
            stringList.AddTail("string1");
            std::vector<std::string> iteratedList;
            POSITION pos;
            pos = stringList.GetHeadPosition();
        	while(pos)
            {
                std::string value = stringList.GetNext(pos);
        		iteratedList.push_back(value);
            }
            Assert::That(iteratedList.size(), Is::EqualTo(1));
            Assert::That(iteratedList[0] == "string1", Is::True);
        }

    };
}
