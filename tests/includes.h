#pragma once

#if defined(__GNUC__) && __GNUC__ == 12
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"  // Workaround for GCC 12
#endif
#ifdef SPDLOG_USE_CATCH2_V2
#    include <catch2/catch.hpp>
#else
#    include <catch2/catch_all.hpp>
#endif
#if defined(__GNUC__) && __GNUC__ == 12
#pragma GCC diagnostic pop
#endif

#include "utils.h"
#include <chrono>
#include <cstdio>
#include <exception>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <stdlib.h>

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_DEBUG

#undef SPDLOG_LEVEL_NAMES
#undef SPDLOG_SHORT_LEVEL_NAMES

#include "spudlog/spdlog.h"
#include "spudlog/async.h"
#include "spudlog/details/fmt_helper.h"
#include "spudlog/details/os.h"

#ifndef SPDLOG_NO_TLS
#include "spudlog/mdc.h"
#endif

#include "spudlog/sinks/basic_file_sink.h"
#include "spudlog/sinks/daily_file_sink.h"
#include "spudlog/sinks/null_sink.h"
#include "spudlog/sinks/ostream_sink.h"
#include "spudlog/sinks/rotating_file_sink.h"
#include "spudlog/sinks/stdout_color_sinks.h"
#include "spudlog/sinks/msvc_sink.h"
#include "spudlog/pattern_formatter.h"
