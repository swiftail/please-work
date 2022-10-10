GCC = gcc -std=c99

all: menu.o get_product.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o
	$(GCC) menu.o get_product.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o -o menu

index_first_negative.o: index_first_negative.c index_first_negative.h
	$(GCC) -o index_first_negative.o -c index_first_negative.c

index_last_negative.o: index_last_negative.c index_last_negative.h
	$(GCC) -o index_last_negative.o -c index_last_negative.c

multi_before_and_after_negative.o: multi_before_and_after_negative.c multi_before_and_after_negative.h get_product.h index_first_negative.h index_last_negative.h
	$(GCC) -o multi_before_and_after_negative.o -c multi_before_and_after_negative.c
	
multi_between_negative.o: multi_between_negative.c multi_between_negative.h get_product.h index_first_negative.h index_last_negative.h
	$(GCC) -o multi_between_negative.o -c multi_between_negative.c

get_product.o: get_product.c get_product.h
	$(GCC) -o get_product.o -c get_product.c

menu.o: menu.c mode.h index_first_negative.h index_last_negative.h multi_between_negative.h multi_before_and_after_negative.h options.h
	$(GCC) -o menu.o -c menu.c