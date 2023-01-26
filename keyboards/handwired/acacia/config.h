/*
Copyright 2022 Jens Peter Secher <jpsecher@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

//#define TAPPING_TERM 200
//#define PERMISSIVE_HOLD

// Makes the lower-row tap-mods work better
#define IGNORE_MOD_TAP_INTERRUPT

// Smart caps lock when both shifts are pressed
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Turn of Layer Lock after 30 seconds
#define LAYER_LOCK_IDLE_TIMEOUT 30000
