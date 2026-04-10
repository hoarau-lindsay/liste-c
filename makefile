#Makefile

LIB = lib
BUILD = build
TEST = test

# Compilation intermédiaire du test
$(BUILD)/test01.o : $(TEST)/test01.c
	@echo "compilation.o du test"
	gcc -I $(LIB) -c -Wall $(TEST)/test01.c -o $(BUILD)/test01.o

# Compilation de test
$(BUILD)/test01 : $(BUILD)/test01.o $(LIB)/liste-c.o
	@echo "compilation du test"
	gcc -Wall $(BUILD)/test01.o $(LIB)/liste-c.o -o $(BUILD)/test01

# Nettoyage du projet 
clean : 
	@echo "suppression de tous les fichiers dans build"
	rm -rf $(BUILD)/*
	