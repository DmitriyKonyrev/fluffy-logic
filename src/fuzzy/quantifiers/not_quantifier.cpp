#include <fuzzy/quantifiers/not_quantifier.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
		float not_t::conform(const float value) const
		{
			return 1 - value;
		}
	}
}
