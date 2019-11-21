/* Script2 Bootstrap @version 0.x
@link    https://github.com/kabuki-packages/script2.bootstrap.git
@file    /_seams/main.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2019 (C) [Kabuki Starship](https://kabukistarship.com); all
rights reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include <_config.h>
#include <script2/_impl.inl>
#include "00.core.inl"
#include "release.h"

using namespace _;
using namespace script2::bootstrap;

int main(ISC arg_count, CHA** args) {
#if SEAM == SEAM_N
  return SeamResult(Release(ArgsToString(arg_count, args)));
#else
  return TTestTree<Core>(arg_count, args);
#endif
}
