#include "save.h"
#include <iostream>
#include <fstream>
#include <chrono>

void save(const std::string & fname)
{
    // 전달된 fname을 읽기 모드로 연다
    std::ifstream in{ fname }; // RAII
    if (not in) {
        std::cout << fname << " - 열 수 없습니다" << '\n';
        exit(20260903);
    }

    std::cout << fname << " 내용을 저장하겠습니다" << '\n';

    // 출력파일을 연다.
    std::ofstream out{ "2026 2학기 C++ 화78목78 강의저장.txt", std::ios::app };

    // 현재 시간을 알아오자
    auto now = std::chrono::system_clock::now();

    out << '\n';
    out << '\n';
    out << "=================================" << '\n';
    out << "저장시간 - " << now << '\n';
    out << "=================================" << '\n';
    out << '\n';

    char c;
    in >> std::noskipws;

    while (in >> c) { // 글자 있다면 읽어 온다
        // eof를 만나면 끝난다
        out << c; // 파일 out에 저장한다
    }
}
