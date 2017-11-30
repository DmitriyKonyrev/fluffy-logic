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
			float conform(const float value);
		};
	}
}

#endif //FUZZY_MORE_LESS_QUANTIFIER_H
