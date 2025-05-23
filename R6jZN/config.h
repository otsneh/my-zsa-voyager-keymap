#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 185

#define QUICK_TAP_TERM 0

#define COMBO_TERM 75

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 10

#define SERIAL_NUMBER "R6jZN/pjbYAR"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// Custom QMK configurations.
#define COMBO_MUST_TAP_PER_COMBO
#define COMBO_MUST_PRESS_IN_ORDER_PER_COMBO

#define QUICK_TAP_TERM_PER_KEY

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD