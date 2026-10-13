# C++ Study

한국공학대학교 게임공학과 1학년(2026) 동안 공부한 C++ 기록입니다.

## 폴더 구조

```
cpp-study/
├── programming-language/   # 2학기 「프로그래밍 언어」 수업 코드 (날짜별)
│   ├── common/             # 수업 공통 save() 함수
│   ├── 09-08/ ... 10-12/
│   └── README.md           # 날짜별 목차
└── self-study/             # 혼자 다시 풀어본 연습 코드
```

## 학교 수업 — [`programming-language/`](programming-language/)

| 날짜 | 주제 |
|---|---|
| 09-08 ~ 09-13 | 입출력, 구구단, `std::print`, 자료형의 크기·주소, 2진/16진수, 지역·전역 변수 |
| 09-17 ~ 09-28 | 배열, 랜덤 값, 최댓값 찾기, 선형 탐색, 주사위 확률, 함수 |
| 09-29 ~ 10-01 | 포인터, 값/포인터/참조에 의한 swap, 버블 정렬, 함수 오버로딩, 스택 오버플로우 |
| 10-06 ~ 10-12 | 동적 메모리 할당 `new`/`delete[]`, `bad_alloc`, `qsort` |

자세한 목차는 [`programming-language/README.md`](programming-language/README.md)에 있습니다.

## 혼자 연습 — [`self-study/`](self-study/)

| 파일 | 내용 |
|---|---|
| `01_gugudan_input.cpp` | 원하는 단을 입력받아 구구단 출력 (`std::println` 정렬) |
| `02_for_1_to_1000.cpp` | for문으로 1부터 1000까지 출력 |
| `03_input_sum.cpp` | 정수 2개 입력·합계, 입력 실패 검사 (배운 점 정리 포함) |
| `04_nested_loops_gugudan.cpp` | 중첩 반복문으로 구구단 전체 출력 |
| `05_function_star_pattern.cpp` | 함수로 다이아몬드 별 찍기 |

## 개발 환경

- Visual Studio 2022
- C++23 (`/std:c++latest`, `<print>` 사용)
- 소스 파일 인코딩: UTF-8 (BOM)
