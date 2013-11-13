
obj=jhlib.o main.o protosharesMiner.o sha2.o transaction.o xptClient.o xptClientPacketHandler.o xptPacketbuffer.o xptServer.o xptServerPacketHandler.o win.o

app=jhProtominer

all: $(app)

.cpp.o: 
	$(CXX) $(CFLAGS) -c -o $@ $< -std=c++0x

jhProtominer: $(obj)
	$(CXX) $(LDFLAGS) -o $@ $(obj) -lpthread -std=c++0x

clean:
	$(RM) *.o $(app)

.PHONY: all clean
