#Makefile

LIB = lib
BUILD = build
TEST = test

help : 
	@echo "\n\t:=:=: Cible disponible :=:=: \n"
	@echo "- test01 : affichage du numéro de la version de la librairie liste-c"
	@echo "- test02 : création d'une liste chaîner et affichage de cette liste"
	@echo "- test03 : modification de la liste (remplacement, insertion, suppression)"
	@echo "- clean : nettoyage des .o dans build"
	@echo "- help : affichage de l'aide"
	@echo "\n"



# Test 01 
# Compilation intermédiaire du test
$(BUILD)/test01.o : $(TEST)/test01.c
	@echo "compilation.o du test"
	gcc -I $(LIB) -c -Wall $(TEST)/test01.c -o $(BUILD)/test01.o

# Compilation de test
$(BUILD)/test01 : $(BUILD)/test01.o $(LIB)/liste-c.o
	@echo "compilation du test"
	gcc -Wall $(BUILD)/test01.o $(LIB)/liste-c.o -o $(BUILD)/test01

#Test 02
# Compilation intermédiaire du test
$(BUILD)/test02.o : $(TEST)/test02.c
	@echo "compilation.o du test"
	gcc -I $(LIB) -c -Wall $(TEST)/test02.c -o $(BUILD)/test02.o

# Compilation de test
$(BUILD)/test02 : $(BUILD)/test02.o $(LIB)/liste-c.o
	@echo "compilation du test"
	gcc -Wall $(BUILD)/test02.o $(LIB)/liste-c.o -o $(BUILD)/test02

#Test 03
# Compilation intermédiaire du test
$(BUILD)/test03.o : $(TEST)/test03.c
	@echo "compilation.o du test"
	gcc -I $(LIB) -c -Wall $(TEST)/test03.c -o $(BUILD)/test03.o

# Compilation de test
$(BUILD)/test03 : $(BUILD)/test03.o $(LIB)/liste-c.o
	@echo "compilation du test"
	gcc -Wall $(BUILD)/test03.o $(LIB)/liste-c.o -o $(BUILD)/test03


#bunch_test02
$(BUILD)/bench_test02 : $(BUILD)/test02.o $(LIB)/liste-c.o
	@echo "compilation du test"
	gcc -g -fsanitize=address -Wall $(BUILD)/test02.o $(LIB)/liste-c.o -o $(BUILD)/bench_test02

# Nettoyage du projet 
clean : 
	@echo "suppression de tous les fichiers dans build"
	rm -rf $(BUILD)/*.o
	