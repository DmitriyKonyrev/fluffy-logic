#include <fuzzy/variables/maxmin_variable.h>

#include <algorithm>

namespace fluffy_logic
{
	namespace fuzzy
	{
		namespace maxmin
		{
			const float unite(const float val_1, const float val_2)
			{
				return std::min(val_1, val_2);
			}

			const float inters(const float val_1, const float val_2)
			{
				return std::max(val_1, val_2);
			}
		}
	}
}
