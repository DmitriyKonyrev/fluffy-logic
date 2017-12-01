#include <fuzzy/quantifiers/quantifier.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
		float quantifier_t::operator()(const float value) const
		{
			return conform(value);
		}
	}
}
