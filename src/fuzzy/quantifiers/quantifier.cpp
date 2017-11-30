#include <fuzzy/quantifiers/quantifier.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
<<<<<<< Updated upstream
		float quantifier_t::conform(const float value)
		{
			return value;
=======
		float quantifier_t::operator()(const float value) const
		{
			return conform(value);
>>>>>>> Stashed changes
		}
	}
}
