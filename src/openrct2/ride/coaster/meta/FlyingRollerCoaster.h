/*****************************************************************************
 * Copyright (c) 2014-2024 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../../sprites.h"
#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
// Non-inverted variant
constexpr RideTypeDescriptor FlyingRollerCoasterRTD =
{
    .Category = RIDE_CATEGORY_ROLLERCOASTER,
    .StartTrackPiece = TrackElemType::EndStation,
    .TrackPaintFunctions = TrackDrawerDescriptor({
        .Drawer = GetTrackPaintFunctionFlyingRC,
        .EnabledTrackPieces = {TRACK_STRAIGHT, TRACK_FLAT_ROLL_BANKING, TRACK_SLOPE, TRACK_SLOPE_STEEP_UP, TRACK_SLOPE_STEEP_DOWN, TRACK_SLOPE_CURVE, TRACK_SLOPE_CURVE_STEEP, TRACK_S_BEND, TRACK_CURVE_SMALL, TRACK_CURVE, TRACK_CURVE_LARGE, TRACK_HELIX_DOWN_BANKED_HALF, TRACK_HELIX_UP_BANKED_HALF, TRACK_BRAKES, TRACK_ON_RIDE_PHOTO, TRACK_BLOCK_BRAKES, TRACK_SLOPE_ROLL_BANKING, TRACK_INLINE_TWIST_UNINVERTED, TRACK_FLYING_HALF_LOOP_UNINVERTED_UP, TRACK_QUARTER_LOOP_UNINVERTED_UP, TRACK_FLYING_LARGE_HALF_LOOP_UNINVERTED_UP, TRACK_SLOPE_VERTICAL, TRACK_SLOPE_CURVE_BANKED, TRACK_DIAG_BRAKES, TRACK_DIAG_BLOCK_BRAKES},
        .ExtraTrackPieces = {TRACK_BOOSTER, TRACK_SLOPE_STEEP_LONG, TRACK_FLYING_LARGE_HALF_LOOP_UNINVERTED_DOWN, TRACK_FLYING_HALF_LOOP_UNINVERTED_DOWN, TRACK_STATION_END, TRACK_VERTICAL_LOOP, TRACK_POWERED_LIFT},
    }),
    .InvertedTrackPaintFunctions = TrackDrawerDescriptor({
        .Drawer = GetTrackPaintFunctionFlyingRC,
        .EnabledTrackPieces = {TRACK_STRAIGHT, TRACK_STATION_END, TRACK_LIFT_HILL, TRACK_FLAT_ROLL_BANKING, TRACK_SLOPE, TRACK_SLOPE_STEEP_UP, TRACK_SLOPE_STEEP_DOWN, TRACK_SLOPE_CURVE, TRACK_SLOPE_CURVE_STEEP, TRACK_S_BEND, TRACK_CURVE_SMALL, TRACK_CURVE, TRACK_CURVE_LARGE, TRACK_HELIX_DOWN_BANKED_QUARTER, TRACK_HELIX_UP_BANKED_QUARTER, TRACK_BRAKES, TRACK_ON_RIDE_PHOTO, TRACK_BLOCK_BRAKES, TRACK_SLOPE_ROLL_BANKING, TRACK_INLINE_TWIST_INVERTED, TRACK_FLYING_HALF_LOOP_INVERTED_DOWN, TRACK_QUARTER_LOOP_INVERTED_DOWN, TRACK_FLYING_LARGE_HALF_LOOP_INVERTED_DOWN, TRACK_BOOSTER, TRACK_DIAG_BRAKES, TRACK_DIAG_BLOCK_BRAKES},
        .ExtraTrackPieces = {TRACK_FLYING_LARGE_HALF_LOOP_INVERTED_UP, TRACK_FLYING_HALF_LOOP_INVERTED_UP},
    }),
    .Flags = RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAGS_COMMON_COASTER | RIDE_TYPE_FLAGS_COMMON_COASTER_NON_ALT |
                     RIDE_TYPE_FLAG_HAS_ALTERNATIVE_TRACK_TYPE | RIDE_TYPE_FLAG_PEEP_CHECK_GFORCES |
                     RIDE_TYPE_FLAG_ALLOW_MULTIPLE_CIRCUITS | RIDE_TYPE_FLAG_START_CONSTRUCTION_INVERTED,
    .RideModes = EnumsToFlags(RideMode::ContinuousCircuit, RideMode::ContinuousCircuitBlockSectioned),
    .DefaultMode = RideMode::ContinuousCircuit,
    .OperatingSettings = { 10, 27, 30, 25, 25, 0 },
    .Naming = { STR_RIDE_NAME_FLYING_ROLLER_COASTER, STR_RIDE_DESCRIPTION_FLYING_ROLLER_COASTER },
    .NameConvention = { RideComponentType::Train, RideComponentType::Track, RideComponentType::Station },
    .EnumName = nameof(RIDE_TYPE_FLYING_ROLLER_COASTER),
    .AvailableBreakdowns = (1 << BREAKDOWN_SAFETY_CUT_OUT) | (1 << BREAKDOWN_RESTRAINTS_STUCK_CLOSED) | (1 << BREAKDOWN_RESTRAINTS_STUCK_OPEN) | (1 << BREAKDOWN_VEHICLE_MALFUNCTION) | (1 << BREAKDOWN_BRAKES_FAILURE),
    .Heights = { 30, 24, 8, 11, },
    .MaxMass = 35,
    .LiftData = { OpenRCT2::Audio::SoundId::LiftBM, 4, 6 },
    .RatingsMultipliers = { 50, 30, 10 },
    .UpkeepCosts = { 49, 20, 90, 11, 3, 15 },
    .BuildCosts = { 62.50_GBP, 2.50_GBP, 50, },
    .DefaultPrices = { 20, 20 },
    .DefaultMusic = MUSIC_OBJECT_ROCK_1,
    .PhotoItem = ShopItem::Photo2,
    .BonusValue = 100,
    .ColourPresets = TRACK_COLOUR_PRESETS(
        { COLOUR_OLIVE_GREEN, COLOUR_OLIVE_GREEN, COLOUR_TEAL },
        { COLOUR_TEAL, COLOUR_TEAL, COLOUR_BORDEAUX_RED },
        { COLOUR_BRIGHT_RED, COLOUR_BRIGHT_RED, COLOUR_DARK_PURPLE },
        { COLOUR_DULL_GREEN_DARK, COLOUR_SATURATED_GREEN_LIGHT, COLOUR_AQUA_DARK },
        { COLOUR_BORDEAUX_RED_DARK, COLOUR_BORDEAUX_RED_DARK, COLOUR_SATURATED_BROWN }, // FLY
        { COLOUR_LIGHT_BLUE, COLOUR_DARK_BLUE, COLOUR_ICY_BLUE }, // Manta
        { COLOUR_YELLOW, COLOUR_BRIGHT_RED, COLOUR_LIGHT_ORANGE } // Tatsu
    ),
    .ColourPreview = { SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_TRACK, SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_SUPPORTS },
    .ColourKey = RideColourKey::Ride,
    .Name = "flying_rc",
    .RatingsData = 
    {
        RatingsCalculationType::Normal,
        { RIDE_RATING(4, 35), RIDE_RATING(1, 85), RIDE_RATING(4, 33) },
        17,
        -1,
        false,
        {
            { RatingsModifierType::BonusLength,           6000,             764, 0, 0 },
            { RatingsModifierType::BonusSynchronisation,  0,                RIDE_RATING(0, 40), RIDE_RATING(0, 05), 0 },
            { RatingsModifierType::BonusTrainLength,      0,                187245, 0, 0 },
            { RatingsModifierType::BonusMaxSpeed,         0,                44281, 88562, 35424 },
            { RatingsModifierType::BonusAverageSpeed,     0,                291271, 436906, 0 },
            { RatingsModifierType::BonusDuration,         150,              26214, 0, 0 },
            { RatingsModifierType::BonusGForces,          0,                24576, 38130, 49648 },
            { RatingsModifierType::BonusTurns,            0,                26749, 34767, 45749 },
            { RatingsModifierType::BonusDrops,            0,                29127, 46811, 49152 },
            { RatingsModifierType::BonusSheltered,        0,                15420, 32768, 35108 },
            { RatingsModifierType::BonusProximity,        0,                20130, 0, 0 },
            { RatingsModifierType::BonusScenery,          0,                6693, 0, 0 },
            { RatingsModifierType::RequirementInversions, 1,                2, 1, 1 },
            { RatingsModifierType::RequirementMaxSpeed,   0xA0000,          2, 1, 1 },
            { RatingsModifierType::RequirementNegativeGs, FIXED_2DP(0, 40), 2, 1, 1 },
            { RatingsModifierType::RequirementNumDrops,   2,                2, 1, 1 },
            { RatingsModifierType::PenaltyLateralGs,      0,                24576, 38130, 49648 },
        },
    },
};

constexpr RideTypeDescriptor FlyingRollerCoasterAltRTD =
{
    .Category = RIDE_CATEGORY_NONE,
    .StartTrackPiece = TrackElemType::EndStation,
    .TrackPaintFunctions = TrackDrawerDescriptor({ 
        .Drawer = nullptr,
        .EnabledTrackPieces = {  },
        .ExtraTrackPieces = {  },
    }),
    .InvertedTrackPaintFunctions = TrackDrawerDescriptor({
        .Drawer = nullptr,
        .EnabledTrackPieces = {  },
        .ExtraTrackPieces = {  },
    }),
    .Flags = RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAGS_COMMON_COASTER | RIDE_TYPE_FLAG_START_CONSTRUCTION_INVERTED,
    .RideModes = EnumsToFlags(RideMode::ContinuousCircuit, RideMode::ContinuousCircuitBlockSectioned),
    .DefaultMode = RideMode::ContinuousCircuit,
    .OperatingSettings = { 10, 27, 30, 25, 25, 0 },
    .Naming = { STR_RIDE_NAME_3A, STR_RIDE_DESCRIPTION_UNKNOWN },
    .NameConvention = { RideComponentType::Train, RideComponentType::Track, RideComponentType::Station },
    .EnumName = nameof(RIDE_TYPE_FLYING_ROLLER_COASTER_ALT),
    .AvailableBreakdowns = (1 << BREAKDOWN_SAFETY_CUT_OUT) | (1 << BREAKDOWN_RESTRAINTS_STUCK_CLOSED) | (1 << BREAKDOWN_RESTRAINTS_STUCK_OPEN) | (1 << BREAKDOWN_VEHICLE_MALFUNCTION) | (1 << BREAKDOWN_BRAKES_FAILURE),
    .Heights = { 30, 24, 8, 11, },
    .MaxMass = 35,
    .LiftData = { OpenRCT2::Audio::SoundId::LiftBM, 4, 6 },
    .RatingsMultipliers = { 50, 30, 10 },
    .UpkeepCosts = { 49, 20, 90, 11, 3, 15 },
    .BuildCosts = { 62.50_GBP, 2.50_GBP, 50, },
    .DefaultPrices = { 20, 20 },
    .DefaultMusic = MUSIC_OBJECT_ROCK_1,
    .PhotoItem = ShopItem::Photo2,
    .BonusValue = 100,
    .ColourPresets = TRACK_COLOUR_PRESETS(
        { COLOUR_OLIVE_GREEN, COLOUR_OLIVE_GREEN, COLOUR_TEAL },
        { COLOUR_TEAL, COLOUR_TEAL, COLOUR_BORDEAUX_RED },
        { COLOUR_BRIGHT_RED, COLOUR_BRIGHT_RED, COLOUR_DARK_PURPLE },
    ),
    .ColourPreview = { SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_TRACK, SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_SUPPORTS },
    .ColourKey = RideColourKey::Ride,
    .Name = "flying_rc_alt",
    .RatingsData = 
    {
        RatingsCalculationType::Normal,
        { RIDE_RATING(4, 35), RIDE_RATING(1, 85), RIDE_RATING(4, 33) },
        17,
        -1,
        false,
        {
            { RatingsModifierType::BonusLength,           6000,             764, 0, 0 },
            { RatingsModifierType::BonusSynchronisation,  0,                RIDE_RATING(0, 40), RIDE_RATING(0, 05), 0 },
            { RatingsModifierType::BonusTrainLength,      0,                187245, 0, 0 },
            { RatingsModifierType::BonusMaxSpeed,         0,                44281, 88562, 35424 },
            { RatingsModifierType::BonusAverageSpeed,     0,                291271, 436906, 0 },
            { RatingsModifierType::BonusDuration,         150,              26214, 0, 0 },
            { RatingsModifierType::BonusGForces,          0,                24576, 38130, 49648 },
            { RatingsModifierType::BonusTurns,            0,                26749, 34767, 45749 },
            { RatingsModifierType::BonusDrops,            0,                29127, 46811, 49152 },
            { RatingsModifierType::BonusSheltered,        0,                15420, 32768, 35108 },
            { RatingsModifierType::BonusProximity,        0,                20130, 0, 0 },
            { RatingsModifierType::BonusScenery,          0,                6693, 0, 0 },
            { RatingsModifierType::RequirementInversions, 1,                2, 1, 1 },
            { RatingsModifierType::RequirementMaxSpeed,   0xA0000,          2, 1, 1 },
            { RatingsModifierType::RequirementNegativeGs, FIXED_2DP(0, 40), 2, 1, 1 },
            { RatingsModifierType::RequirementNumDrops,   2,                2, 1, 1 },
            { RatingsModifierType::PenaltyLateralGs,      0,                24576, 38130, 49648 },
        },
    },
};
// clang-format on
