#include "pass_generator.h"

// Whole ASCII and special chars
static const std::string s_default_range = "\
	ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890+-_.:@";

void CPassGenerator::init()
{
	if ( m_range.empty() )
		m_range = s_default_range;
}

