// Copyright 2021-2023 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.

#include <stdio.h>
#include <string.h>
#include "aec_defines.h"
#include "aec.h"

/* This is an example of processing one frame of data through the AEC pipeline stage. The example runs on 1 thread and
 * can be compiled for both bare metal and x86.
 */
static unsigned X_energy_recalc_bin = 0;
void aec_process_frame_1thread(
        aec_state_t *main_state,
        aec_state_t *shadow_state,
        int32_t (*output_main)[AEC_FRAME_ADVANCE],
        int32_t (*output_shadow)[AEC_FRAME_ADVANCE],
        const int32_t (*y_data)[AEC_FRAME_ADVANCE],
        const int32_t (*x_data)[AEC_FRAME_ADVANCE])
{
    (void)shadow_state;
    (void)output_shadow;
    (void)X_energy_recalc_bin;
    aec_process_frame(main_state,
                      output_main,
                      NULL,
                      (int32_t (*)[AEC_FRAME_ADVANCE]) y_data,
                      (int32_t (*)[AEC_FRAME_ADVANCE]) x_data);
}
