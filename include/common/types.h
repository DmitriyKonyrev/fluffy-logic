#include <functional>

namespace fluffy_logic
{
	namespace common
	{
		typedef std::function<float(const float, const float) const> binary_operator_t;
	}
}
