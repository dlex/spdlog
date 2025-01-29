// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <memory>

namespace spdlog {

template <template <typename> class Alloc>
class basic_logger;
using logger = basic_logger<std::allocator>;

template <template <typename> class Alloc>
class basic_formatter;
using formatter = basic_formatter<std::allocator>;

namespace sinks {
template <template <typename> class Alloc>
class sink;
}

namespace level {
enum level_enum : int;
}

}  // namespace spdlog
