#pragma once

#include <ros/common.h>
#include <arch/arch.h>
#include <atomic.h>

typedef volatile uint8_t wait_list_t[MAX_NUM_CORES];

typedef struct
{
	wait_list_t wait_list;
	spinlock_t lock;
} handler_wrapper_t;
