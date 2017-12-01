#ifndef TRAPEZOID_FUNCTION_H_INCLUDED
#define TRAPEZOID_FUNCTION_H_INCLUDED

#include "include_function.h"

#include <fuzzy/variables/fuzzy_variable.h>

#include <exception>

namespace fluffy_logic
{
	namespace fuzzy
	{
		template<class fuzzy_t> class trapezoid_include_t
		: public include_function_t<fuzzy_t>
		{
		public:
			trapezoid_include_t( const float left
					           , const float center_left
							   , const float center_right
							   , const float right)
			: m_left(left)
			, m_center_left(center_left)
			, m_center_right(center_right)
			, m_right(right)
			{ }

			fuzzy_t value(const float value) const
			{
				float result = 0.;
				if (value < m_left || value > m_right)
					result = 0.;
				else if (value <= m_center_left)
					result = 1. - (m_center_left - m_value) / (m_center_left - m_left);
				else if (value > center_right)
					result = 1. - (value - m_center_right) / (m_right - m_center_right);
				else
					result = 1.;

				return fuzzy_t(result);
			}

		private:
			float m_left;
			float m_center_left;
			float m_center_right;
			float m_right;
		};
	}
}

#endif //TRAPEZOID_FUNCTION_H_INCLUDED
