#ifndef TRIANGLE_INClUDE_FUNCTION_H
#define TRIANGLE_INClUDE_FUNCTION_H

#include "include_function.h"

#include <fuzzy/variables/fuzzy_variable.h>

#include <exception>

namespace fluffy_logic
{
	namespace fuzzy
	{
		template<class fuzzy_t> class triangle_include_t
		: public include_function_t<fuzzy_t>
		{
		public:
			triangle_include_t(const float left, const float center, const float right)
			: m_left(left)
			, m_center(center)
			, m_right(right)
			{ }

			fuzzy_t value(const float value) const
			{
				float result = 0.;

				if (value < m_left || value > m_right)
					result = 0;
				else if (value <= m_center)
					result = 1 - (m_center - value) / (m_center - m_left);
				else
					result = 1 - (value - m_center) / (m_right - m_center);

				return fuzzy_t(result);
			}

		private:
			float m_left;
			float m_center;
			float m_right;
		};
	}
}

#endif //TRIANGLE_FUNCTION_H_INCLUDED
