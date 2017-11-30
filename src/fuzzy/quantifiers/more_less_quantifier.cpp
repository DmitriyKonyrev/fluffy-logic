#include <fuzzy/quantifiers/more_less_quantifier.h>

#include <algorithm>
#include <math.h>
#include <stdexcept>

namespace fluffy_logic
{
	namespace fuzzy
	{
		float more_less_t::conform(const float value)
		{
			if (value < 0)
				throw std::domain_error("More-less quantifier doesn\'t work with negative");
			return std::pow(value, 0.5);
		}
	}
}
