#ifndef FUZZY_NOT_QUANTIFIER_H_INCLUDED
#define FUZZY_NOT_QUANTIFIER_H_INCLUDED

#include "quantifier.h"

namespace fluffy_logic 
{
	namespace fuzzy
	{
		class not_t : public quantifier_t
		{
		public:
			float conform(const float value);
		};
	}
}

#endif //FUZZY_NOT_QUANTIFIER_H_INCLUDED
