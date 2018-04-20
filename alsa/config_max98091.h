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

#define MIXER_MAX98091_MIC1_MUX "MIC1 Mux"
#define MIXER_MAX98091_MIC2_MUX "MIC2 Mux"
#define MIXER_MAX98091_MIC1_BOOST_VOL "MIC1 Boost Volume"
#define MIXER_MAX98091_MIC2_BOOST_VOL "MIC2 Boost Volume"
#define MIXER_MAX98091_MIC1_VOL "MIC1 Volume"
#define MIXER_MAX98091_MIC2_VOL "MIC2 Volume"
#define MIXER_MAX98091_ZERO_CROSS_DET "Zero-Crossing Detection"
#define MIXER_MAX98091_LEFT_ADC_MIXER_IN12 "Left ADC Mixer IN12 Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_IN34 "Left ADC Mixer IN34 Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_IN56 "Left ADC Mixer IN56 Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_LINEA "Left ADC Mixer LINEA Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_LINEB "Left ADC Mixer LINEB Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_MIC1 "Left ADC Mixer MIC1 Switch"
#define MIXER_MAX98091_LEFT_ADC_MIXER_MIC2 "Left ADC Mixer MIC2 Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_IN12 "Right ADC Mixer IN12 Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_IN34 "Right ADC Mixer IN34 Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_IN56 "Right ADC Mixer IN56 Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_LINEA "Right ADC Mixer LINEA Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_LINEB "Right ADC Mixer LINEB Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_MIC1 "Right ADC Mixer MIC1 Switch"
#define MIXER_MAX98091_RIGHT_ADC_MIXER_MIC2 "Right ADC Mixer MIC2 Switch"
#define MIXER_MAX98091_ADCHP "ADC High Performance Mode"
#define MIXER_MAX98091_OSR "ADC Oversampling Rate"
#define MIXER_MAX98091_ADC_QUANTIZER_DITHER "ADC Quantizer Dither"
#define MIXER_MAX98091_DMIC_MUX "DMIC Mux"
#define MIXER_MAX98091_FILTER_MODE "Filter Mode"
#define MIXER_MAX98091_REC_DC_BLOCKING "Record Path DC Blocking"
#define MIXER_MAX98091_BIQUAD_SWITCH "Biquad Switch"
#define MIXER_MAX98091_SIDETONE_ENABLE_LEFT "STENL Mux"
#define MIXER_MAX98091_SIDETONE_ENABLE_RIGHT "STENR Mux"
#define MIXER_MAX98091_ADC_BOOST_VOLUME_LEFT "ADCL Boost Volume"
#define MIXER_MAX98091_ADC_BOOST_VOLUME_RIGHT "ADCR Boost Volume"
#define MIXER_MAX98091_ADC_VOLUME_LEFT "ADCL Volume"
#define MIXER_MAX98091_ADC_VOLUME_RIGHT "ADCR Volume"

#define MIXER_MAX98091_RIGHT_SPEAKER_MIXER_RIGHT_DAC_SWITCH \
    "Right Speaker Mixer Right DAC Switch"
#define MIXER_MAX98091_LEFT_SPEAKER_MIXER_LEFT_DAC_SWITCH \
    "Left Speaker Mixer Left DAC Switch"
#define MIXER_MAX98091_RIGHT_HEADPHONE_MIXER_RIGHT_DAC_SWITCH \
    "Right Headphone Mixer Right DAC Switch"
#define MIXER_MAX98091_LEFT_HEADPHONE_MIXER_LEFT_DAC_SWITCH \
    "Left Headphone Mixer Left DAC Switch"

#define MIXER_MAX98091_HEADPHONE_VOLUME "Headphone Volume"
#define MIXER_MAX98091_SPEAKER_VOLUME "Speaker Volume"

#define SND_ROUTE(_ctl_name, _intval, _strval) \
    { .ctl_name = _ctl_name, .intval = _intval, .strval = _strval }
#define SND_ROUTE_INT(_ctl_name, _intval) \
    { .ctl_name = _ctl_name, .intval = _intval, .strval = NULL }
#define SND_ROUTE_STR(_ctl_name, _strval) \
    { .ctl_name = _ctl_name, .intval = 0, .strval = _strval }
#define SND_ROUTE_NULL \
    { .ctl_name = NULL }

/* These are values that never change */
static struct route_setting defaults_MAX98091[] = {
    SND_ROUTE_STR(MIXER_MAX98091_MIC1_MUX, "IN12"),
    SND_ROUTE_STR(MIXER_MAX98091_MIC2_MUX, "IN56"),
    SND_ROUTE_INT(MIXER_MAX98091_ZERO_CROSS_DET, 0), // Negative bit - ENABLED
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_IN12, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_IN34, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_IN56, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_LINEA, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_LINEB, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_MIC1, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_MIC2, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_IN12, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_IN34, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_IN56, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_LINEA, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_LINEB, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_MIC1, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_MIC2, 0),
    SND_ROUTE_STR(MIXER_MAX98091_ADCHP, "High Performance"),
    SND_ROUTE_STR(MIXER_MAX98091_OSR, "128*fs"),
    SND_ROUTE_INT(MIXER_MAX98091_ADC_QUANTIZER_DITHER, 1), // This may introduce a noise
    SND_ROUTE_STR(MIXER_MAX98091_DMIC_MUX, "ADC"),
    SND_ROUTE_STR(MIXER_MAX98091_FILTER_MODE, "Music"),
    SND_ROUTE_INT(MIXER_MAX98091_REC_DC_BLOCKING, 1),
    SND_ROUTE_INT(MIXER_MAX98091_BIQUAD_SWITCH, 0),
    SND_ROUTE_STR(MIXER_MAX98091_SIDETONE_ENABLE_LEFT, "Normal"),
    SND_ROUTE_STR(MIXER_MAX98091_SIDETONE_ENABLE_RIGHT, "Normal"),

    /*
     * This controls are not properly implemented in MAX98090 codec
     * so the values of these are code pernamentyl in codec register.
     */
    // SND_ROUTE_INT(MIXER_MAX98091_MIC2_BOOST_VOL, 0),
    // SND_ROUTE_INT(MIXER_MAX98091_MIC2_VOL, 0),

    /*
     * ADC Boost Left/Right Volume is mapped as below:
     *
     * CTRL  AMP
     * ----------
     * 0     0db
     * 1    +6db
     * 2    +12db
     * 3    +18db
     * 4    +24db
     * 5    +30db
     * 6    +36db
     * 7    +43db
     */
    SND_ROUTE_INT(MIXER_MAX98091_ADC_BOOST_VOLUME_LEFT, 1),
    SND_ROUTE_INT(MIXER_MAX98091_ADC_BOOST_VOLUME_RIGHT, 1),

    /*
     * ADC Volume Left/Right controls are managed in stupid way.
     *
     * First in maxim spec register 0x17 (Left) and 0x18 (Right) ADC
     * Gain Configurations have amplifier values from +3db (0x0) to
     * -12db (0xF). Second the mixer control give ability to set a value
     * since 0 to 15 but it's not translate in linear way to register value.
     *
     * After few dumps i2c register the control values are mapped as below:
     *
     * CTRL  REG   AMP
     * -----------------
     *  0    0xf  -12db
     *  1    0xe  -11db
     *  2    0xd  -10db
     *  3    0xc  -9db
     *  4    0xb  -8db
     *  5    0xa  -7db
     *  6    0x9  -6db
     *  7    0x8  -5db
     *  8    0x7  -4db
     *  9    0x6  -3db
     *  10   0x5  -2db
     *  11   0x4  -1db
     *  12   0x3   0b
     *  13   0x2  +1db
     *  14   0x1  +2db
     *  15   0x0  +3db
     */
    SND_ROUTE_INT(MIXER_MAX98091_ADC_VOLUME_LEFT, 12),
    SND_ROUTE_INT(MIXER_MAX98091_ADC_VOLUME_RIGHT, 12),

    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_SPEAKER_MIXER_RIGHT_DAC_SWITCH, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_SPEAKER_MIXER_LEFT_DAC_SWITCH, 0),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_HEADPHONE_MIXER_RIGHT_DAC_SWITCH, 0),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_HEADPHONE_MIXER_LEFT_DAC_SWITCH, 0),
    SND_ROUTE_INT(MIXER_MAX98091_HEADPHONE_VOLUME, 26),
    SND_ROUTE_INT(MIXER_MAX98091_SPEAKER_VOLUME, 20),
    SND_ROUTE_NULL
};

static struct route_setting speaker_output_MAX98091[] = {
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_SPEAKER_MIXER_RIGHT_DAC_SWITCH, 1),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_SPEAKER_MIXER_LEFT_DAC_SWITCH, 1),
    SND_ROUTE_NULL
};

static struct route_setting hs_output_MAX98091[] = {
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_HEADPHONE_MIXER_RIGHT_DAC_SWITCH, 1),
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_HEADPHONE_MIXER_LEFT_DAC_SWITCH, 1),
    SND_ROUTE_NULL
};

static struct route_setting mm_main_mic_input_MAX98091[] = {
    SND_ROUTE_INT(MIXER_MAX98091_LEFT_ADC_MIXER_MIC2, 1),
    SND_ROUTE_INT(MIXER_MAX98091_RIGHT_ADC_MIXER_MIC2, 1),
    SND_ROUTE_NULL
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
    .speaker_output      = speaker_output_MAX98091,
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