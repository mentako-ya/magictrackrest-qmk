/**
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

// clang-format off

#define LAYOUT_6x2(                  \
  k10, k09,      k04, k03, k02, k01, \
  k12, k11,      k08, k07, k06, k05  \
)                                    \
{                                    \
  {   k01,   k02,   k03,   k04, },   \
  {   k05,   k06,   k07,   k08, },   \
  {   k09,   k10,   k11,  k12, },                \
}

#define LAYOUT LAYOUT_6x2
// clang-format on
