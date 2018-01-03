#include <fuzzy/variables/colorimetric_variable.h>
#include <fuzzy/variables/maxmin_variable.h>
#include <fuzzy/quantifiers/more_less_quantifier.h>

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE test_quantifiers
#include <boost/test/included/unit_test.hpp>

namespace fz = fluffy_logic::fuzzy;

BOOST_AUTO_TEST_CASE(test_colorimetric)
{
	fz::colorimetric_variable_t var_1(0.1);
	fz::colorimetric_variable_t var_2(0.5);

	BOOST_CHECK_CLOSE((float)(var_1 && var_2), 0.05, 1e-4);
	BOOST_CHECK_CLOSE((float)(var_1 || var_2), 0.55, 1e-4);
	BOOST_CHECK_CLOSE((float)(!var_1), 0.9, 1e-2);

	BOOST_CHECK_NO_THROW(var_1.apply(new fz::more_less_t()));
	BOOST_CHECK_CLOSE((float)var_1, 0.316227, 1e-3);
}

BOOST_AUTO_TEST_CASE(test_maxmin)
{
	fz::maxmin_variable_t var_1(0.1);
	fz::maxmin_variable_t var_2(0.5);

	BOOST_CHECK_EQUAL((float)(var_1 && var_2), 0.5);
	BOOST_CHECK_CLOSE((float)(var_1 || var_2), 0.1, 1e-2);
	BOOST_CHECK_CLOSE((float)(!var_1), 0.9, 1e-2);

	BOOST_CHECK_NO_THROW(var_1.apply(new fz::more_less_t()));
	BOOST_CHECK_CLOSE((float)var_1, 0.316227, 1e-3);
}
