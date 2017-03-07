#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
 
int add(int i, int j)
{
    return i + j;
}
 
BOOST_AUTO_TEST_CASE(add)
{
    BOOST_CHECK(add(2, 2) == 4);
}

BOOST_AUTO_TEST_CASE(collide)
{
    Bounding box b1(vector3(0,0,0),0.5,0.5,0.5)
    Bounding box b2(vector3(10,10,10),0.5,0.5,0.5)
    BOOST_CHECK(b1.collides(b2));
    BOOST_CHECK(!b1.collides(b2));
}
