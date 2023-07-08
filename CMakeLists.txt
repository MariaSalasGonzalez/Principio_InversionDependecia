cmake_minimum_required(VERSION 3.17)
project(Inversion_Dependecia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Inversion_Dependecia main.cpp Lector.h Escritor.h GuardarArchivo.cpp GuardarArchivo.h LectorTeclado.cpp LectorTeclado.h)