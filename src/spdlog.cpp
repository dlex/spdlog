// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#ifndef SPDLOG_COMPILED_LIB
#error Please define SPDLOG_COMPILED_LIB to compile this file.
#endif

#include <spudlog/common-inl.h>
#include <spudlog/details/backtracer-inl.h>
#include <spudlog/details/log_msg-inl.h>
#include <spudlog/details/log_msg_buffer-inl.h>
#include <spudlog/details/null_mutex.h>
#include <spudlog/details/os-inl.h>
#include <spudlog/details/registry-inl.h>
#include <spudlog/logger-inl.h>
#include <spudlog/pattern_formatter-inl.h>
#include <spudlog/sinks/base_sink-inl.h>
#include <spudlog/sinks/sink-inl.h>
#include <spudlog/spdlog-inl.h>

#include <memory>
#include <mutex>

// template instantiate logger constructor with sinks init list
template SPDLOG_API spdlog::basic_logger<spdlog::default_allocator_t>::basic_logger(
    std::string name,
    sinks_init_list<default_allocator_t>::iterator begin,
    sinks_init_list<default_allocator_t>::iterator end,
    spdlog::default_allocator_t);
template class SPDLOG_API spdlog::sinks::base_sink<std::mutex, spdlog::default_allocator_t>;
template class SPDLOG_API
    spdlog::sinks::base_sink<spdlog::details::null_mutex, spdlog::default_allocator_t>;
template class SPDLOG_API spdlog::sinks::sink<spdlog::default_allocator_t>;
template class SPDLOG_API spdlog::details::registry<spdlog::default_allocator_t>;
template class SPDLOG_API spdlog::basic_pattern_formatter<spdlog::default_allocator_t>;
template class SPDLOG_API spdlog::basic_logger<spdlog::default_allocator_t>;
template SPDLOG_API void spdlog::swap<spdlog::default_allocator_t>(
    spdlog::basic_logger<spdlog::default_allocator_t> &,
    spdlog::basic_logger<spdlog::default_allocator_t> &);
