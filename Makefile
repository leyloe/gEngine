CC=g++

CFLAGS=-std=c++17 -O2 -Iinclude
LDFLAGS=-lglfw -lvulkan -ldl -lpthread -lwayland-client -lwayland-egl -lwayland-cursor

NAME=gEngine
SRC_DIR = src
BIN_DIR = bin
SRC=$(wildcard $(SRC_DIR)/*.cpp)
OBJ=$(SRC:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)
EXE=$(BIN_DIR)/$(NAME)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LDFLAGS)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp | bin
	$(CC) $(CFLAGS) -c $< -o $@

bin:
	@mkdir -p $(BIN_DIR)

clean:
	@rm -rf $(BIN_DIR)

.PHONY: test clean bin
