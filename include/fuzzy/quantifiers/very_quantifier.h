#ifndef FUZZY_VERY_QUANTIFIER_H_INCLUDED
#define FUZZY_VERY_QUANTIFIER_H_INCLUDED

#include "quantifier.h"

namespace fluffy_logic 
{
	namespace fuzzy
	{
		class very_t : public quantifier_t
		{
		public:
			float conform(const float value);
		};
	}
}

#endif //FUZZY_VERY_QUANTIFIER_H_INCLUDED
