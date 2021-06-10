OBJDIR=obj

sbu: $(OBJDIR)/main.o $(OBJDIR)/userinfo.o
	gcc $(OBJDIR)/main.o $(OBJDIR)/userinfo.o -o ../bin/sbu

$(OBJDIR)/main.o: main.c main.h
	gcc -c main.c -o $(OBJDIR)/main.o

$(OBJDIR)/userinfo.o: userinfo.c userinfo.h
	gcc -c userinfo.c -o $(OBJDIR)/userinfo.o

clean:
	rm $(OBJDIR)/*.o ../bin/sbu
