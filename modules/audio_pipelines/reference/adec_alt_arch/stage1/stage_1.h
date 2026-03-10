// Copyright 2022-2026 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.

#ifndef STAGE1_COMPAT_H
#define STAGE1_COMPAT_H

#include "stage1.h"

typedef stage1_t stage_1_state_t;

static inline void stage_1_init(stage_1_state_t *state, aec_conf_t *de_conf, aec_conf_t *non_de_conf, adec_config_t *adec_config)
{
    stage1_init(state, de_conf, non_de_conf, adec_config);
}

static inline void stage_1_process_frame(stage_1_state_t *state, int32_t (*output_frame)[AEC_FRAME_ADVANCE],
    float_s32_t *max_ref_energy, float_s32_t *aec_corr_factor, int32_t *ref_active_flag,
    int32_t (*input_y)[AEC_FRAME_ADVANCE], int32_t (*input_x)[AEC_FRAME_ADVANCE])
{
    stage1_process_frame(state, output_frame, max_ref_energy, aec_corr_factor, ref_active_flag, input_y, input_x);
}

#endif
