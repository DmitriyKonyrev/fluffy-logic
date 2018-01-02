#include <fuzzy/quantifiers/more_less_quantifier.h>
#include <fuzzy/quantifiers/not_quantifier.h>
#include <fuzzy/quantifiers/very_quantifier.h>

#include <stdexcept>

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE test_quantifiers
#include <boost/test/included/unit_test.hpp>

namespace fz = fluffy_logic::fuzzy;

BOOST_AUTO_TEST_CASE(test_more_less)
{
	BOOST_CHECK_EQUAL(fz::MORE_LESS.conform(16.0), 4.0);
	BOOST_CHECK_CLOSE(fz::MORE_LESS.conform(2.0), 1.414213, 10e-5);
	BOOST_CHECK_NO_THROW(fz::MORE_LESS.conform(16.0));

	BOOST_CHECK_THROW(fz::MORE_LESS.conform(-16.0), std::domain_error);
}

BOOST_AUTO_TEST_CASE(test_not)
{
	BOOST_CHECK_EQUAL(fz::NOT.conform(1.0), 0.0);
	BOOST_CHECK_EQUAL(fz::NOT.conform(-1.0), 2.0);
}

BOOST_AUTO_TEST_CASE(test_very)
{
	BOOST_CHECK_EQUAL(fz::VERY.conform(1.0), 1.0);
	BOOST_CHECK_EQUAL(fz::VERY.conform(-1.0), 1.0);
	BOOST_CHECK_EQUAL(fz::VERY.conform(4.0), 16.0);
}
