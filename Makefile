CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CSSFLAGS += -pendantic-erros
CXXFLAGS += -g

OBJS = Barbarian.o BlueMen.o characterBaseClass.o Game.o HarryPotter.o InputValid.o main.o Medusa.o Menu.o Node.o teamList.o Vampire.o

SRCS = Barbarian.cpp BlueMen.cpp characterBaseClass.cpp Game.cpp HarryPotter.cpp InputValid.cpp main.cpp Medusa.cpp Menu.cpp Node.cpp teamList.cpp Vampire.cpp

HEADERS = Barbarian.hpp BlueMen.hpp characterBaseClass.hpp Game.hpp HarryPotter.hpp InputValid.hpp  Medusa.hpp Menu.hpp Node.hpp teamList.hpp Vampire.hpp

game: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o game

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c ${@:.o=.cpp}

clean:
	rm *.o game
