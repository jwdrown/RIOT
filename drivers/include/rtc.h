/******************************************************************************
 * Copyright 2010, Freie Universitaet Berlin (FUB). All rights reserved.
 *
 * These sources were developed at the Freie Universitaet Berlin, Computer Systems
and Telematics group (http://cst.mi.fu-berlin.de).
 * ----------------------------------------------------------------------------
 * This file is part of RIOT.
 *
 * This file subject to the terms and conditions of the GNU Lesser General
 * Public License. See the file LICENSE in the top level directory for more
 * details.
 *
*******************************************************************************/

/**
 * @defgroup rtc Realtime Clock
 * @ingroup drivers
 * @{
 */

#ifndef RTC_H
#define RTC_H

#define RTC_SECOND 10001U

#include <time.h>

/**
 * @brief Initializes the RTC for calendar mode
 */
void rtc_init(void);

/**
 * @brief Starts the RTC
 */
void rtc_enable(void);

/**
 * @brief Stops the RTC
 */
void rtc_disable(void);

/**
 * @brief	Sets the current time in broken down format directly from to RTC
 * @param[in]	localt		Pointer to structure with time to set
 */
void rtc_set_localtime(struct tm *localt);

/**
 * @brief	Returns the current time in broken down format directly from the RTC
 * @param[out]	localt		Pointer to structure to receive time
 */
void rtc_get_localtime(struct tm *localt);

extern int rtc_second_pid;

#endif
/** @} */
