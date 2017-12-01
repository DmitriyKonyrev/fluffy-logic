#ifndef SIGMOID_FUNCTION_H_INCLUDED
#define SIGMOID_FUNCTION_H_INCLUDED

#include "include_function.h"

#include <exception>
#include <math.h>
#include <memory>
#include <vector>

#include <fuzzy/variables/fuzzy_variable.h>
#include <fuzzy/quantifiers/quantifier.h>

namespace fluffy_logic
{
	namespace fuzzy
	{
		template<class fuzzy_t> class sigmoid_include_t
		: public include_function_t<fuzzy_t>
		{
		public:
			sigmoid_include_t(const float scale, const float center, const bool reversed = false)
			: m_scale(scale)
			, m_center(center)
			, m_reversed(reversed)
			{ }

			fuzzy_t value(const float value) const
			{
				float result = 1 / (1 + std::exp(-m_scale * (value - m_center)));

				if (m_reversed)
					result = 1 - result;

				return fuzzy_t(result);
			}

		private:
			float m_scale;
			float m_center;

			bool m_reversed;
		};
	}
}

#endif //SIGMOID_FUNCTION_H_INCLUDED
