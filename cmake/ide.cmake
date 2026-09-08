# ---------------------------------------------------------------------------------------
# IDE support for headers
# ---------------------------------------------------------------------------------------
set(SPDLOG_HEADERS_DIR "${CMAKE_CURRENT_LIST_DIR}/../include")

file(GLOB SPDLOG_TOP_HEADERS "${SPDLOG_HEADERS_DIR}/spudlog/*.h")
file(GLOB SPDLOG_DETAILS_HEADERS "${SPDLOG_HEADERS_DIR}/spudlog/details/*.h")
file(GLOB SPDLOG_SINKS_HEADERS "${SPDLOG_HEADERS_DIR}/spudlog/sinks/*.h")
file(GLOB SPDLOG_FMT_HEADERS "${SPDLOG_HEADERS_DIR}/spudlog/fmt/*.h")
file(GLOB SPDLOG_FMT_BUNDELED_HEADERS "${SPDLOG_HEADERS_DIR}/spudlog/fmt/bundled/*.h")
set(SPDLOG_ALL_HEADERS ${SPDLOG_TOP_HEADERS} ${SPDLOG_DETAILS_HEADERS} ${SPDLOG_SINKS_HEADERS} ${SPDLOG_FMT_HEADERS}
                       ${SPDLOG_FMT_BUNDELED_HEADERS})

source_group("Header Files\\spudlog" FILES ${SPDLOG_TOP_HEADERS})
source_group("Header Files\\spudlog\\details" FILES ${SPDLOG_DETAILS_HEADERS})
source_group("Header Files\\spudlog\\sinks" FILES ${SPDLOG_SINKS_HEADERS})
source_group("Header Files\\spudlog\\fmt" FILES ${SPDLOG_FMT_HEADERS})
source_group("Header Files\\spudlog\\fmt\\bundled\\" FILES ${SPDLOG_FMT_BUNDELED_HEADERS})
