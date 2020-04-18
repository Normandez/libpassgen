#ifndef PASS_GEN_API_H
#define PASS_GEN_API_H

#include <string>

namespace PassGenApi
{
void thread_init(const std::string& range = "");
void thread_term();
}

#endif // PASS_GEN_API_H

