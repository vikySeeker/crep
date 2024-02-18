#include<stdio.h>
#include<stdlib.h>
#include<getopt.h>


void print_usage() {
	printf("Usage: crep -c 2 -d , \"Hello World\"\n");
	printf("\nOptions:\n\t-c: for count to specify number of times message should be repeated.\n\t-d: for delimeter to print between message.");
	printf("\n\nNOTE: message should be given as last argument.\n\teg. `crep -c 3 -d , hello world` will only take world as message value.");
}

void do_rep(int count, char* delim, char* message) {
	while(--count) {
		printf("%s%s", message, delim);
	}
	printf("%s", message);
}

int main(int arg_count, char **arg_array) {
	if(arg_count < 2){
		print_usage();
		exit(1);
	}
	opterr = 0;
	int opt, count;
	char *delim="", *message;
	while((opt = getopt(arg_count, arg_array, "d:c:h")) != -1) {
		switch (opt) {
			case 'd':
				delim = optarg;
				break;

			case 'c':
				count = atoi(optarg);
				break;
			case '?':
			case 'h':
			default:
				print_usage();
				exit(1);
		}
	}
	message = arg_array[arg_count-1];

	if(delim == NULL || count<=0) {
		printf("Invalid Options: -h for help.");
		exit(0);
	}
	
	//printf("Printing %s with %s as delimeter %d times...\n", message, delim, count);

	do_rep(count, delim, message);

	return 0;
}
