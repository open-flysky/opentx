/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x 
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "opentx.h"

void pushPrompt(uint16_t value)
{
  TRACE("pushPrompt %u", value);
}

void pushCustomPrompt(uint8_t value)
{
  pushPrompt(PROMPT_CUSTOM_BASE + value);
}

void pushNumberPrompt(uint8_t value)
{
  pushPrompt(PROMPT_I18N_BASE + value);
}

void pushUnit(uint8_t unit, uint8_t idx, uint8_t id){
  TRACE("pushUnit %u", unit);
}

void audioEvent(unsigned int index){
  TRACE("audioEvent %u", index);
}

bool isPlaying(){
  TRACE("isPlaying");
	return false;
}
