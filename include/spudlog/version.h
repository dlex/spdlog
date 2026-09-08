// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#define SPDLOG_VER_MAJOR 1
#define SPDLOG_VER_MINOR 17
#define SPDLOG_VER_PATCH 0

#define SPDLOG_TO_VERSION(major, minor, patch) (major * 10000 + minor * 100 + patch)
#define SPDLOG_VERSION SPDLOG_TO_VERSION(SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH)

// Above is the version of the upstream spdlog release this version is based on. Below is spudlog's own version.

#define SPDULOG_VER_MAJOR 1
#define SPDULOG_VER_MINOR 0
#define SPDULOG_VER_PATCH 0

#define SPDULOG_VERSION SPDLOG_TO_VERSION(SPDULOG_VER_MAJOR, SPDULOG_VER_MINOR, SPDULOG_VER_PATCH)
