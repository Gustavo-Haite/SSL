#Variables
CC = gcc
CFlags = -Wall -Wextra -std=c18

all: TablasDeConversion

TablasDeConversion: TablasDeConversion.o Conversion.o
	$(CC) Conversion.o TablasDeConversion.o -o TablasDeConversion

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFlags) -c TablasDeConversion.c

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFlags) -c Conversion.c 

tests: ConversionTest

ConversionTest: Conversion.o ConversionTest.o
	$(CC) Conversion.o ConversionTest.o -o ConversionTest

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFlags) -c ConversionTest.c

clean: 
	rm -f Conversion.o
	rm -f ConversionTest.o
	rm -f TablasDeConversion.o
	rm -f ConversionTest
	rm -f TablasDeConversion