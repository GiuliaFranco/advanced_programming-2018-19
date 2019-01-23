CXX = c++
LANG = ITALIANO
LDFLAGS = -shared 
CFLAGS = -fPIC -Wall -Wextra -O2 -g
TARGET_LIB =libHello.so
EXE=main.x
RM = rm -f
SRC = source/main.cc 
OBJ = $(SRC:.c=.o)
SRCH = source/hello.cc
OBJH = $(SRCH:.c=.o)

install: main.x
all: ${TARGET_LIB} ${EXE}

${EXE}:${TARGET_LIB} ${SRC}
	$(CXX) ${SRC} -o $@ -lhello -I include -L.

$(TARGET_LIB):$(OBJH)
	$(CXX) ${LDFLAGS} -o $@ $^
%.o:%.cc
	$(CXX) ${CFLAGS} -D$(LANG) -o $@ -c $< -Iinclude

.PHONY:install
.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS} $(SRCS:.c=.d)
