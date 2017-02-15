main:
	g++ -g -o main -std=c++11 echo_handler.cc static_file_handler.cc main.cc request_handler.cc

clean:
	rm -f main *.o *.gch
