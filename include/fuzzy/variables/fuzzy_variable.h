#ifndef FUZZY_VARIABLE_H_INCLUDED
#define FUZZY_VARIABLE_H_INCLUDED

#include <common/types.h>
#include <fuzzy/quantifiers/not_quantifier.h>
#include <fuzzy/quantifiers/quantifier.h>

#include <memory>

typedef fluffy_logic::common::binary_operator_t bin_op_t;

namespace fluffy_logic
{
	namespace fuzzy
	{
		template<bin_op_t unite, bin_op_t inters> class variable_t
		{
		public:
			variable_t(const float value = 0.);

			float value() const;

			void apply(quantifier_t * const  quant);

			variable_t operator!() const;
			variable_t operator&& (const variable_t& variable);
			variable_t operator|| (const variable_t& variable);

			operator float() const;

		private:
			float check_value(const float value) const;

		protected:
			float m_value;

		private:
			static const float MIN_VALUE;
			static const float MAX_VALUE;
		};

		template<bin_op_t unite, bin_op_t inters> variable_t<unite, inters>::variable_t(const float value)
		: m_value(check_value(value))
		{ }

		template<bin_op_t unite, bin_op_t inters> float variable_t<unite, inters>::value() const
		{
			return m_value;
		}

		template<bin_op_t unite, bin_op_t inters> void variable_t<unite, inters>::apply(quantifier_t * const quant)
		{
			m_value = quant->conform(m_value);
		}

		template<bin_op_t unite, bin_op_t inters> variable_t<unite, inters> variable_t<unite, inters>::operator!() const
		{

			variable_t<unite, inters> result(NOT(m_value));
			return result;
		}

		template<bin_op_t unite, bin_op_t inters> variable_t<unite, inters> variable_t<unite, inters>::operator&& (const variable_t& variable)
		{
			return variable_t<unite, inters>(inters(m_value, variable.m_value));
		}

		template<bin_op_t unite, bin_op_t inters> variable_t<unite, inters> variable_t<unite, inters>::operator|| (const variable_t& variable)
		{
			return variable_t<unite, inters>(unite(m_value, variable.m_value));
		}

		template<bin_op_t unite, bin_op_t inters> float variable_t<unite, inters>::check_value(const float value) const
		{
			if (value < MIN_VALUE)
				return MIN_VALUE;
			else if (value > MAX_VALUE)
				return MAX_VALUE;
			else
				return value;
		}

		template<bin_op_t unite, bin_op_t inters> variable_t<unite, inters>::operator float() const
		{
			return m_value;
		}

		template<bin_op_t unite, bin_op_t inters> const float variable_t<unite, inters>::MIN_VALUE = 0.0;
		template<bin_op_t unite, bin_op_t inters> const float variable_t<unite, inters>::MAX_VALUE = 1.0;

	}
}

#endif //FUZZY_VARIABLE_H_INCLUDED
