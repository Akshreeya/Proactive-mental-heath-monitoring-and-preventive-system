#ifndef ACQUISITION_CONFIG_H
#define ACQUISITION_CONFIG_H

/* ========= Base Parameters (LOCKED) ========= */
#define PPG_FS          100     // Hz
#define ACC_FS          25      // Hz
#define WINDOW_SEC      30      // seconds
#define OVERLAP_PCT     50      // percent

/* ========= Derived Parameters (DO NOT EDIT) ========= */
#define PPG_WINDOW_SAMPLES   (PPG_FS * WINDOW_SEC)
#define ACC_WINDOW_SAMPLES   (ACC_FS * WINDOW_SEC)

#define STEP_SEC             (WINDOW_SEC * (100 - OVERLAP_PCT) / 100)
#define PPG_STEP_SAMPLES     (PPG_FS * STEP_SEC)
#define ACC_STEP_SAMPLES     (ACC_FS * STEP_SEC)

#endif
