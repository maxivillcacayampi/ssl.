CC = gcc
programa: TablasDeConversion

Conversion.o: Conversion.c Conversion.h
	$(CC)  -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC)  -c ConversionTest.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) -c TablasDeConversion.c

TablasDeConversion: Conversion.o ConversionTest.o TablasDeConversion.o
	$(CC)  Conversion.o ConversionTest.o TablasDeConversion.o -o TablasDeConversion

clean:
	rm -f *.o TablasDeConversion