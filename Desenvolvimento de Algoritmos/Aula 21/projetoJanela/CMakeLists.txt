cmake_minimum_required(VERSION 3.13)
project(projetoJanela C)

set(CMAKE_C_STANDARD 99)
include_directories(iup/include)
link_directories(iup)

add_executable(projetoJanela main.c)
target_link_libraries(projetoJanela iup gdi32 comdlg32 comctl32 uuid oleaut32 ole32)