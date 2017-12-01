#include "colorimetric_variable.h"

namespace fluffy_logic
{
	namespace fuzzy
	{
		namespace colorimetric
		{
			const float unite(const float val_1, const float val_2)
			{
				return val_1 + val_2 - val_1 * val_2;
			}

			const float inters(const float val_1, const float val_2)
			{
				return val_1 * val_2;
			}
		}
	}
}
