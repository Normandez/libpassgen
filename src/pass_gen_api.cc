#include "pass_gen_api.h"

#include <thread>

#include "pass_generator.h"

using namespace PassGenApi;

thread_local CPassGenerator* g_pass_generator = nullptr;

void thread_init(const std::string& range)
{
	g_pass_generator = new CPassGenerator(range);
}

void thread_term()
{
	delete g_pass_generator;
}

