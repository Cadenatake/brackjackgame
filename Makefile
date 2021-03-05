CC = cl.exe
LINK = link.exe

HEADER = head.h
TARGET = brackjack.exe
OBJS = main.obj\
	rule.obj\
	level.obj\
	play.obj\
	shuffle.obj\
	deal.obj\
	draw.obj\
	judge.obj\
	coin.obj\
	end_judge.obj\
	continue1.obj\

all : $(OBJS) $(TARGET)

.c .obj : $(HEADER)
	$(CC) -c $<

$(TARGET) : $(OBJS)
	$(LINK) $(OBJS) -out:$(TARGET)

$(OBJS) : $(HEADER)

clean: $(OBJS) $(TARGET)
	del $(OBJS) $(TARGET)