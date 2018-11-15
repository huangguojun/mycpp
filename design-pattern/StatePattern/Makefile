#############################################################################
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -Wall -Wno-unused-variable  $(DEFINES)
CXXFLAGS      = -Wall -Wno-unused-variable -std=c++11 $(DEFINES)
INCPATH       = -I/usr/include/ -I/usr/local/include
DISTDIR 	  = 
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = 

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
				State.cpp \
				Context.cpp 

OBJECTS       = $(patsubst %.cpp,%.o,$(SOURCES)) 

TARGET        = a.out


####### Build 

all: $(TARGET) 

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCPATH)

$(TARGET): $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $@ $^  $(LIBS)

clean:
	rm -rf $(TARGET) $(OBJECTS)




