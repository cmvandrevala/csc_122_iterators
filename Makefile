1: clean
	g++ --std=c++11 1_iterator_on_vector.cpp -o 1_iterator_on_vector
	./1_iterator_on_vector

2: clean
	g++ --std=c++11 2_iterator_on_array.cpp -o 2_iterator_on_array
	./2_iterator_on_array

3: clean
	g++ --std=c++11 3_iterator_on_list.cpp -o 3_iterator_on_list
	./3_iterator_on_list

4: clean
	g++ --std=c++11 4_iterator_on_set.cpp -o 4_iterator_on_set
	./4_iterator_on_set

5: clean
	g++ --std=c++11 5_next_and_prev.cpp -o 5_next_and_prev
	./5_next_and_prev

clean:
	@rm -f 1_iterator_on_vector
	@rm -f 2_iterator_on_array
	@rm -f 3_iterator_on_list
	@rm -f 4_iterator_on_set
	@rm -f 5_next_and_prev
