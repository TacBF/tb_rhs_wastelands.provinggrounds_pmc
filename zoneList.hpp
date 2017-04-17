#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}         , {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE   , SPAWN_XRAY,    {2}        , {}    , 1      , {}        , 0    , "%3: US" },

{ 2, TEAM_BLUE   , SPAWN_NEVER,   {1,3,4}    , {}    , 1      , {}        , 0    , "%1" },

{ 3, TEAM_BLUE   , SPAWN_NEVER,   {2,5}      , {4}   , 1      , {}        , 0    , "%1" },
{ 4, TEAM_BLUE   , SPAWN_NEVER,   {2,6}      , {3}   , 1      , {}        , 0    , "%1" },
{ 5, TEAM_BLUE   , SPAWN_NEVER,   {3,7}      , {6}   , 1      , {}        , 0    , "%1" },
{ 6, TEAM_BLUE   , SPAWN_NEVER,   {4,7}      , {5}   , 1      , {}        , 0    , "%1" },

{ 7, TEAM_NEUTRAL, SPAWN_NEVER,   {5,6,8}    , {}    , 1      , {}        , 0    , "%1" },
{ 8, TEAM_NEUTRAL, SPAWN_NEVER,   {7,9}      , {}    , 1      , {}        , 0    , "%1" },
{ 9, TEAM_NEUTRAL, SPAWN_NEVER,   {8,10}     , {}    , 1      , {}        , 0    , "%1" },
{10, TEAM_NEUTRAL, SPAWN_NEVER,   {9,11}     , {}    , 1      , {}        , 0    , "%1" },
{11, TEAM_NEUTRAL, SPAWN_NEVER,   {10,12,13} , {}    , 1      , {}        , 0    , "%1" },

{12, TEAM_RED    , SPAWN_NEVER,   {11,14}    , {13}  , 1      , {}        , 0    , "%1" },
{13, TEAM_RED    , SPAWN_NEVER,   {11,15}    , {12}  , 1      , {}        , 0    , "%1" },
{14, TEAM_RED    , SPAWN_NEVER,   {12,16}    , {15}  , 1      , {}        , 0    , "%1" },
{15, TEAM_RED    , SPAWN_NEVER,   {13,16}    , {14}  , 1      , {}        , 0    , "%1" },

{16, TEAM_RED    , SPAWN_NEVER,   {14,15,17} , {}    , 1      , {}        , 0    , "%1" },

{17, TEAM_RED    , SPAWN_XRAY,    {16}       , {}    , 1      , {}        , 0    , "%3: RU" },

// FB's
{18, TEAM_NEUTRAL, SPAWN_INSTANT, {}         , {}    , 1      , {1,7}     , 2    , "%4: %1" },
{19, TEAM_NEUTRAL, SPAWN_INSTANT, {}         , {}    , 1      , {1,11}    , 2    , "%4: %1" },
{20, TEAM_NEUTRAL, SPAWN_INSTANT, {}         , {}    , 1      , {17,7}    , 2    , "%4: %1" },
{21, TEAM_NEUTRAL, SPAWN_INSTANT, {}         , {}    , 1      , {17,11}   , 2    , "%4: %1" }
};
