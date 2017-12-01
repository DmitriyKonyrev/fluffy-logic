#ifndef GAUSSIAN_FUNCTION_H_INCLUDED
#define GAUSSIAN_FUNCTION_H_INCLUDED

#include "include_function.h"

#include <fuzzy/fuzzy_variables/fuzzy_variable.h>

#include <exception>
#include <math.h>

namespace fluffy_logic 
{
	namespace fuzzy
	{
		template<class fuzzy_t> class gaussian_include_t
		: public include_function_t<fuzzy_t>
		{
		public:
			gaussian_include(const float center, const float scale)
			: m_center(center)
			, m_scale(scale)
			{ };

			fuzzy_t value(float value) const
			{
				const float result = exp(- pow((value - m_center) / m_scale, 2.));
				return fuzzy_t(result);
			}

		private:
			float m_center;
			float m_scale;
		};
	}
}

#endif  //GAUSSIAN_FUNCTION_H_INCLUDED
