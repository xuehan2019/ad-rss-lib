/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/world/LaneDrivingDirection.hpp"

TEST(LaneDrivingDirectionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("Bidirectional"),
            ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("::ad_rss::world::LaneDrivingDirection::Bidirectional"),
            ::ad_rss::world::LaneDrivingDirection::Bidirectional);

  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("Positive"),
            ::ad_rss::world::LaneDrivingDirection::Positive);
  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("::ad_rss::world::LaneDrivingDirection::Positive"),
            ::ad_rss::world::LaneDrivingDirection::Positive);

  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("Negative"),
            ::ad_rss::world::LaneDrivingDirection::Negative);
  ASSERT_EQ(fromString<::ad_rss::world::LaneDrivingDirection>("::ad_rss::world::LaneDrivingDirection::Negative"),
            ::ad_rss::world::LaneDrivingDirection::Negative);

  EXPECT_ANY_THROW({ fromString<::ad_rss::world::LaneDrivingDirection>("NOT A VALID ENUM LITERAL"); });
}

TEST(LaneDrivingDirectionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::world::LaneDrivingDirection::Bidirectional),
            "::ad_rss::world::LaneDrivingDirection::Bidirectional");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Bidirectional));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Bidirectional));

  ASSERT_EQ(toString(::ad_rss::world::LaneDrivingDirection::Positive),
            "::ad_rss::world::LaneDrivingDirection::Positive");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Positive));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Positive));

  ASSERT_EQ(toString(::ad_rss::world::LaneDrivingDirection::Negative),
            "::ad_rss::world::LaneDrivingDirection::Negative");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Negative));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Negative));

  ASSERT_EQ(toString(static_cast<::ad_rss::world::LaneDrivingDirection>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::world::LaneDrivingDirection>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
