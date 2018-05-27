# first add the barhpp Generator
add_executable(barhppGenerator barhppGenerator.cpp)

# add the custom commad to generate the source code
add_custom_command (
    OUTPUT ${CMAKE_CURRENT_SRC_DIR}/bar.hpp
    COMMAND barhppGenerator
    DEPENDS barhppGenerator
)

# search all the files in current directory to VAR DIR_BAR_LIB_SRCS
aux_source_directory (. DIR_BAR_LIB_SRCS)

# the link lib
add_library (barLib ${DIR_BAR_LIB_SRCS} ${CMAKE_CURRENT_SRC_DIR}/bar.hpp)
