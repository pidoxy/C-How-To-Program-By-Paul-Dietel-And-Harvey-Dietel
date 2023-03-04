cmake_minimum_required(VERSION 3.24)
project(chpt3_assignment C)

set(CMAKE_C_STANDARD 17)

add_executable(chpt3_assignment main.c)

add_executable(mortgage mortgageCalculator.c)

add_executable(sales salesCommissionCalculator.c)

add_executable(interest interestCalculator.c)

add_executable(salary salaryCalculator.c)

add_executable(sat sat.c)
