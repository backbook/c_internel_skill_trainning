cmake_minimum_required(VERSION 3.20)
project(c_internel_skill_trainning)

set(CMAKE_CXX_STANDARD 20)

#add_executable(c_internel_skill_trainning main.cpp)
#add_executable(c_internel_skill_trainning tme.cpp)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()