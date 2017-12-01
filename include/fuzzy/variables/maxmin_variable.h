#ifndef FUZZY_MAXMIN_VARIABLE_H
#define FUZZY_MAXMIN_VARIABLE_H

#include "fuzzy_variable.h"

namespace fluffy_logic 
{
	namespace fuzzy
	{
		namespace maxmin
		{
			const float unite(const float val_1, const float val_2);
			const float inters(const float val_1, const float val_2);
		}

		typedef variable_t<maxmin::unite, maxmin::inters> maxmin_variable_t;
	}
}

#endif //FUZZY_MAXMIN_VARIABLE_H
