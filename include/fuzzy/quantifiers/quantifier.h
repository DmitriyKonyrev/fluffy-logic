#ifndef FUZZY_QUANTIFIER_H_INCLUDED
#define FUZZY_QUANTIFIER_H_INCLUDED

namespace fluffy_logic
{
	namespace fuzzy
	{
	    class quantifier_t
		{
		public:
			virtual float conform(const float value) const = 0;

			float operator()(const float value) const;
		};
	}
}

#endif //FUZZY_QUANTIFIER_H_INCLUDED
