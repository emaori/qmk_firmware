#pragma once

#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

#undef CAPS_LOCK_INDEX
#define CAPS_LOCK_INDEX 1 // Set F1 LED. Original was 61
