// Copyright 2021-2026 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.

#include "aec.h"

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
    aec_process_frame(main_state,
                      output_main,
                      NULL,
                      (int32_t (*)[AEC_FRAME_ADVANCE]) y_data,
                      (int32_t (*)[AEC_FRAME_ADVANCE]) x_data);
}
