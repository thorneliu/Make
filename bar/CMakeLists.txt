# search all the files in current directory to VAR DIR_BAR_LIB_SRCS
aux_source_directory (. DIR_BAR_LIB_SRCS)

# the link lib
add_library (barLib ${DIR_BAR_LIB_SRCS})
