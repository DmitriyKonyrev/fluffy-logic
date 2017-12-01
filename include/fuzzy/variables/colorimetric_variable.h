#ifndef FUZZY_COLORIMETRIC_VARIABLE_H_INCLUDED
#define FUZZY_COLORIMETRIC_VARIABLE_H_INCLUDED

#include "fuzzy_variable.h"

namespace fluffy_logic
{
	namespace fuzzy
	{
		namespace colorimetric
		{
			const float unite(const float val_1, const float val_2);
			const float inters(const float val_1, const float val_2);
		}

		typedef variable_t<colorimetric::unite, colorimetric::inters> colorimetric_variable_t;
	}
}

#endif //FUZZY_COLORIMETRIC_VARIABLE_H_INCLUDED
