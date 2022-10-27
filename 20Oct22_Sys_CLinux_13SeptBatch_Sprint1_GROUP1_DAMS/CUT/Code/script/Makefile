CC = gcc

SRC = ./src
INC = ./inc
OBJ = ./obj
BIN = ./bin
CFLAGS = -c -g -Wall

app1:   
	$(CC) $(SRC)/main.c $(SRC)/patient.c $(SRC)/doctor.c $(SRC)/recep.c -I $(INC)/ -o $(BIN)/app1
	
	
clean:
	rm -f $(BIN)/app1
	@echo "Cleaning Done!"


