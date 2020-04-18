#ifndef PASS_GENERATOR_H
#define PASS_GENERATOR_H

#include <string>

class CPassGenerator
{
public:
	CPassGenerator(const std::string& range) : m_range(range)
	{ init(); }
	~CPassGenerator()
	{ }

	void SetRange(std::string& range);

	std::string GetRange() const
	{ return m_range; }
	int GetRangeSize() const
	{ return m_range_size; }
	int GetCombNum() const
	{ return m_comb_num; }

private:
	void init();

private:
	std::string m_range;
	int m_range_size;
	int m_comb_num;

};

#endif // PASS_GENERATOR_H

