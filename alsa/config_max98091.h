/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2012 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_MAX98091_H
#define ANDROID_INCLUDE_IMX_CONFIG_MAX98091_H

#include "audio_hardware.h"

/* These are values that never change */
static struct route_setting defaults_MAX98091[] = {
    {   
        .ctl_name = "Headphone Volume",
        .intval = 26,
    },
    {
        .ctl_name = "Speaker Volume",
        .intval = 20,
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting speaker_output_MAX98091[] = {
    {
        .ctl_name = "Right Speaker Mixer Right DAC Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left Speaker Mixer Left DAC Switch",
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting hs_output_MAX98091[] = {
    {
        .ctl_name = "Right Headphone Mixer Right DAC Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left Headphone Mixer Left DAC Switch",
        .intval = 1,
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting mm_main_mic_input_MAX98091[] = {
    {
        .ctl_name = "MIC2 Volume",
        .intval = 18,
    },
    {
        .ctl_name = "ADCL Volume",
        .intval = 12,
    },
    {
        .ctl_name = "ADCR Volume",
        .intval = 12,
    },
    {
        .ctl_name = "Record Path DC Blocking",
        .intval = 1,
    },
    {
        .ctl_name = "MIC2 Mux",
        .strval = "IN56",
    },
    {
        .ctl_name = "Right ADC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right ADC Mixer MIC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left ADC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left ADC Mixer MIC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "DMIC Mux",
        .strval = "ADC",
    },
    {
        .ctl_name = NULL,
    },
};

/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  max98091_card = {
    .name = "max98091-audio",
    .driver_name = "max98091-audio",
    .supported_out_devices = (
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_DEFAULT ),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_WIRED_HEADSET |
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults            = defaults_MAX98091,
    .bt_output           = NULL,
    .speaker_output      = hs_output_MAX98091,
    .hs_output           = hs_output_MAX98091,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_hs_mic_input     = NULL,
    .vx_main_mic_input   = NULL,
    .mm_main_mic_input   = mm_main_mic_input_MAX98091,
    .vx_bt_mic_input     = NULL,
    .mm_bt_mic_input     = NULL,
    .card                = 0,
    .out_rate            = 0,
    .out_channels        = 0,
    .out_format          = 0,
    .in_rate             = 0,
    .in_channels         = 0,
    .in_format           = 0,
};

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_MAX98091_H */
