#ifndef FUZZY_MORE_LESS_QUANTIFIER_H_INCLUDED
#define FUZZY_MORE_LESS_QUANTIFIER_H_INCLDUED

#include "quantifier.h"

namespace fluffy_logic
{
	namespace fuzzy
	{
		class more_less_t : public quantifier_t
		{
		public:
			float conform(const float value) const;
		};

		const more_less_t MORE_LESS = more_less_t();
	}
}

#endif //FUZZY_MORE_LESS_QUANTIFIER_H
