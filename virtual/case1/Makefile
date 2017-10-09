

SVR_NAME := main
OBJS := $(addsuffix .o, $(patsubst %.cpp, %, $(wildcard *.cpp)))


all: $(SVR_NAME)


$(SVR_NAME): $(OBJS)
	g++ -g $^ -o $@ 



%.o:%.cpp
	g++ -g -c $<

clean:
	rm -frv $(OBJS) $(SVR_NAME)


