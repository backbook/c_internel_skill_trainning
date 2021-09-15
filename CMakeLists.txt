cmake_minimum_required(VERSION 3.21.2)
project(c_internel_skill_trainning)
message(status "Project Directory: ${PROJECT_SOURCE_DIR}")

set(CMAKE_CXX_STANDARD 20)

#add_executable(c_internel_skill_trainning src/DefineTest.cpp)
add_executable(c_internel_skill_trainning src/MetC++.cpp)




set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/library)
set(cmake_build_type DEBUG)
#add_subdirectory(${CMAKE_SOURCE_DIR}/util)  #当需要构建大型工程，各个子目录都有对应的CMakeList时，使用该条语法
#set(cmake_c_flags_debug "-g -Wall") # 指定编译器
#aux_source_directory(${CMAKE_SOURCE_DIR}/src DIR_SRC)  #添加需要编译源文件到DIR_SRC变量
#add_executable(c_internel_skill_trainning ${DIR_SRC})

# 遍历项目根目录下所有的 .cpp 文件
#file (GLOB_RECURSE files *.cpp)
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable (${exe} ${file})
#    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")