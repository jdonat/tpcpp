cmake_minimum_required(VERSION 3.26)
project(TP_Cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(TP_Cpp main.cpp
        Tirage.cpp
        Tirage.h
        De.cpp
        De.h
        Piece.cpp
        Piece.h
        Deck.cpp
        Deck.h
        GameMaster.cpp
        GameMaster.h
        ObjetAleatoire.cpp
        ObjetAleatoire.h
        RandomNumberGenerator.h
)
