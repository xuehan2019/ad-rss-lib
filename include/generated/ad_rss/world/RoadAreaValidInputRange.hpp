/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad_rss/world/RoadArea.hpp"
#include "ad_rss/world/RoadSegmentValidInputRange.hpp"

/*!
 * \brief check if the given RoadArea is within valid input range
 *
 * \param[in] input the RoadArea as an input value
 *
 * \returns \c true if RoadArea is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 50
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad_rss::world::RoadArea const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    bool inValidInputRange = (input.size() <= std::size_t(50));

    if (inValidInputRange)
    {
      for (auto const &member : input)
      {
        inValidInputRange = inValidInputRange && withinValidInputRange(member);
      }
    }
    return inValidInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
