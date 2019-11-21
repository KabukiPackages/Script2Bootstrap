/* Script2 Bootstrap @version 0.x
@link    https://github.com/kabuki-packages/script2.bootstrap.git
@file    /_seams/release.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2019 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_config.h>
#include "_release.inl"
using namespace _;
namespace script2 {
namespace bootstrap {
inline const CHA* Release (const CHA* args) {
#if SEAM >= SCRIPT2_BOOTSTRAP_RELEASE
  COut ("Hello, world!")
#endif
  return 0;
}
} //< namespace bootstrap
} //< namespace script2
