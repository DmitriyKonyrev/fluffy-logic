#ifndef Z_TYPE_FUNCTION_H_INCLUDED
#define Z_TYPE_FUNCTION_H_INCLUDED

#include "include_function.h"

#include <fuzzy/variables/fuzzy_variable.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
		template <class fuzzy_t> class z_type_include_t
			: public include_function_t<fuzzy_t>
		{
		public:
			z_type_include_t(const float left, const float right, const bool reversed = false)
			: m_left(left)
			, m_right(right)
			, m_center(center)
			{ }

			fuzzy_t value(const float value) const
			{
				float result = 0.;

				if (value <= m_left)
					result = 0.;
				else if (value >= m_right)
					result = 1.;
				else
					result = 1. - (m_right - value) / (m_right - m_left);

				if (reversed)
					result = 1 - result;

				return fuzzy_t(result);
			}

		private:
			float m_left;
			float m_right;

			bool m_reversed;
		};
	}
}

#endif //Z_TYPE_FUNCTION_H_INCLUDED
