#ifndef PHILOSOPHER_H
 #define PHILOSOPHER_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
// #include <pthread.h>
#include <sys/time.h>

typedef struct s_data
{
	int philo_count;
	int time_to_die;	
	int time_to_eat;	
	int time_to_sleep;
	int feed_count;	
} t_data;

//error handling
void invalid_input(void);
void value_error(void);

#endif