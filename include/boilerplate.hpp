#include <cassert>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <fmt/core.h>
#include <boost/type_index.hpp>
#define PRINT_TYPE(param) fmt::print("{}\n", boost::typeindex::type_id_with_cvr<decltype(param)>().pretty_name());
#define PRINT_TYPE_T(T) fmt::print("param type is: {}\n", boost::typeindex::type_id_with_cvr<T>().pretty_name());
#define PRINT_ME() fmt::print("{}\n", __PRETTY_FUNCTION__);