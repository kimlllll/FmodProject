cmake_minimum_required(VERSION 3.10.2) # 最低支持的cmake版本

project("fmodproject")

# 第一步 导入头文件
include_directories("inc")

# 批量导入所有源文件
file(allCPP *.c *.h *.cpp)

add_library(native-lib  # libnative-lib.so
             SHARED # 动态库  STATIC 静态库
             ${allCPP} )

# 第二步 导入库文件
# CMAKE_SOURCE_DIR CMakeLists.txt 所在的路径
# CMAKE_ANDROID_ARCH_ABI 当前的CPU架构
# ${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/../jniLibs/${CMAKE_ANDROID_ARCH_ABI} 库文件的路径
#
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/../jniLibs/${CMAKE_ANDROID_ARCH_ABI}")

# 第三步 导入了库 还需要链接具体的库到libnative-lib.so总库
target_link_libraries(native-lib
                      log  # 打印的库  自动寻找
                      fmod  # fmod库
                      fmodL # fmodL库
        )