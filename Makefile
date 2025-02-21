NAME=gEngine

SRC_DIR = src
BIN_DIR = bin
INCLUDE_DIR = include

SRC=$(wildcard $(SRC_DIR)/*.cpp)
INCLUDES = $(wildcard $(INCLUDE_DIR)/*.hpp)

OBJ=$(SRC:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)
EXE=$(BIN_DIR)/$(NAME)

CC=g++

CFLAGS=-I$(INCLUDE_DIR) -std=c++17 -O2
LDFLAGS=-lglfw -lvulkan -ldl -lpthread

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LDFLAGS)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDES) | bin
	$(CC) $(CFLAGS) -c $< -o $@

bin:
	@mkdir -p $(BIN_DIR)

clean:
	@rm -rf $(BIN_DIR)

.PHONY: clean bin
