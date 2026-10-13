cmake_minimum_required(VERSION 3.20)
project(cpp_study LANGUAGES CXX)

# 예제 파일 하나 = 실행 파일(타깃) 하나.
# Visual Studio에서 "폴더 열기"로 이 저장소를 열면
# 위쪽 "시작 항목" 목록에서 실행할 예제를 고를 수 있다.

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/utf-8)   # 한글 문자열 깨짐 방지
endif()

# 일부러 컴파일/링크가 안 되는 예제 (수업에서 "왜 안 되는지" 배운 코드)
set(SKIP
    programming-language/10-01/06_exam_question_note.cpp   # main 없는 시험 문제 메모
    programming-language/10-01/09_global_data_limit.cpp    # 전역 배열 크기 한계 실험
    programming-language/10-12/01_vla_not_allowed.cpp      # VLA는 표준 C++에서 불가
)

function(add_example src use_save)
    if(src IN_LIST SKIP)
        return()
    endif()
    # 예: programming-language/09-10/02_gugudan_println.cpp -> 09-10_02_gugudan_println
    get_filename_component(dir ${src} DIRECTORY)
    get_filename_component(day ${dir} NAME)
    get_filename_component(name ${src} NAME_WE)
    if(day STREQUAL "self-study")
        set(target "self_${name}")
    else()
        set(target "${day}_${name}")
    endif()

    if(use_save)
        add_executable(${target} ${src} programming-language/common/save.cpp)
        target_include_directories(${target} PRIVATE programming-language/common)
        target_compile_definitions(${target} PRIVATE
            CPP_STUDY_SOURCE="${CMAKE_CURRENT_SOURCE_DIR}/${src}")
    else()
        add_executable(${target} ${src})
    endif()
    set_target_properties(${target} PROPERTIES FOLDER ${day})
endfunction()

file(GLOB_RECURSE COURSE RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
     CONFIGURE_DEPENDS programming-language/*.cpp)
list(FILTER COURSE EXCLUDE REGEX "/common/")
foreach(src IN LISTS COURSE)
    add_example(${src} TRUE)
endforeach()

file(GLOB SELF RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
     CONFIGURE_DEPENDS self-study/*.cpp)
foreach(src IN LISTS SELF)
    add_example(${src} FALSE)
endforeach()
