project(protogen)
set(GOGO_PROJECT_TYPE "projects collection")
#gen_makefile("${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}")

add_subdirectory_ex(cpp)
add_subdirectory_ex(cpp_shared)
add_subdirectory_ex(java)
add_subdirectory_ex(python)

include (${GOGO_ROOT}/build/rules.cmake)
