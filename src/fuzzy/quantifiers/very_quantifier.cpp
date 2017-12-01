#include <fuzzy/quantifiers/very_quantifier.h>

#include <algorithm>
#include <math.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
		float very_t::conform(const float value) const
		{
			return std::pow(value, 2.);
		}
	}
}
