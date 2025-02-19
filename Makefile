CC=g++

CFLAGS=-std=c++17 -O2
LDFLAGS=-lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

NAME=gEngine
SRC_DIR = src
BIN_DIR = bin
SRC=$(wildcard $(SRC_DIR)/*)
OBJ=$(SRC:$(SRC_DIR)/%=$(BIN_DIR)/%.o)
EXE=$(BIN_DIR)/$(NAME)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LDFLAGS)

$(BIN_DIR)/%.o: $(SRC_DIR)/% | bin
	$(CC) $(CFLAGS) -c $< -o $@

bin:
	@mkdir -p $(BIN_DIR)

.PHONY: test clean bin