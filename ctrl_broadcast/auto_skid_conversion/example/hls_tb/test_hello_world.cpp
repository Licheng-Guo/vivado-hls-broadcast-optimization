using data_t = int;
#define SIZE 128

void top(data_t array_in[SIZE], data_t array_out[SIZE]);

int main()
{
	data_t array[SIZE];
	data_t array_out[SIZE];
	for (int i = 0; i < SIZE; i++) {
		array[i] = i;
		array_out[i] = 0;
	}

	top(array, array_out);

	for (int i = 0; i < SIZE; i++) {
		if ((array[i]+i)*(array[i]+i)*i != array_out[i]) {
			return -1;
		}
	}

	return 0;
}
