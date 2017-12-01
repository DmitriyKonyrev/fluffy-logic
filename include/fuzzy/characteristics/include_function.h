#ifndef FUZZY_INClUDE_FUNCTION_H_INCLUDED
#define FUZZY_INClUDE_FUNCTION_H_INCLUDED

#include <fuzzy/variables/fuzzy_variable.h>
#include <fuzzy/quantifiers/quantifier.h>

#include <exception>
#include <memory>
#include <vector>

namespace fluffy_logic
{
	namespace fuzzy
	{
		template<class fuzzy_t> class include_function_t
		{
		public:
			include_function_t() {};

			virtual fuzzy_t value(float value) const
			{
				return fuzzy_t(value);
			};
		};
	}
}

#endif //FUZZY_INClUDE_FUNCTION_H_INCLUDED
