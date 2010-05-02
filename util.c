/*
 * util.h -- General utility functions
 *
 * Copyright (C) 2004 Henrique de Moraes Holschuh <hmh@debian.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#define _GNU_SOURCE

#ifndef HAVE_CONFIG_H
#error Invalid or missing autoconf build environment
#endif

#include "rng-tools-config.h"

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>

/* Computes elapsed time in microseconds */
uint64_t elapsed_time(struct timeval *start,
		       struct timeval *stop)
{
	int64_t diff;

	diff = (stop->tv_sec - start->tv_sec) * 1000000ULL
		+ stop->tv_usec - start->tv_usec;

	return llabs(diff);
}

