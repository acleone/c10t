#ifndef _BLOCKS_H_
#define _BLOCKS_H_

#include "Color.h"

namespace mc {
  enum {
    Air = 0x00,
    Stone = 0x01,
    Grass = 0x02,
    Dirt = 0x03,
    Cobblestone = 0x04,
    Wood = 0x05,
    Sapling = 0x06,
    Bedrock = 0x07,
    Water = 0x08,
    StationaryWater = 0x09,
    Lava = 0x0A,
    StationaryLava = 0x0B,
    Sand = 0x0C,
    Gravel = 0x0D,
    GoldOre = 0x0E,
    IronOre = 0x0F,
    CoalOre = 0x10,
    Log = 0x11,
    Leaves = 0x12,
    Sponge = 0x13,
    Glass = 0x14,
    RedCloth = 0x15,
    OrangeCloth = 0x16,
    YellowCloth = 0x17,
    LimeCloth = 0x18,
    GreenCloth = 0x19,
    AquaGreenCloth = 0x1A,
    CyanCloth = 0x1B,
    BlueCloth = 0x1C,
    PurpleCloth = 0x1D,
    IndigoCloth = 0x1E,
    VioletCloth = 0x1F,
    MagentaCloth = 0x20,
    PinkCloth = 0x21,
    BlackCloth = 0x22,
    GrayCloth = 0x23,
    WhiteCloth = 0x24,
    YellowFlower = 0x25,
    RedRose = 0x26,
    BrownMushroom = 0x28,
    RedMushroom = 0x27,
    GoldBlock = 0x29,
    IronBlock = 0x2A,
    DoubleStep = 0x2B,
    Step = 0x2C,
    Brick = 0x2D,
    TNT = 0x2E,
    Bookcase = 0x2F,
    MossyCobblestone = 0x30,
    Obsidian = 0x31,
    Torch = 0x32,
    Fire = 0x33,
    MobSpawner = 0x34,
    WoodenStairs = 0x35,
    Chest = 0x36,
    RedstoneWire = 0x37,
    DiamondOre = 0x38,
    DiamondBlock = 0x39,
    Workbench = 0x3A,
    Crops = 0x3B,
    Soil = 0x3C,
    Furnace = 0x3D,
    BurningFurnace = 0x3E,
    SignPost = 0x3F,
    WoodenDoor = 0x40,
    Ladder = 0x41,
    MinecartTracks = 0x42,
    CobblestoneStairs = 0x43,
    WallSign = 0x44,
    Lever = 0x45,
    StonePressurePlate = 0x46,
    IronDoor = 0x47,
    WoodenPressurePlate = 0x48,
    RedstoneOre = 0x49,
    GlowingRedstoneOre = 0x4A,
    RedstoneTorchOff = 0x4B,
    RedstoneTorchOn = 0x4C,
    StoneButton = 0x4D,
    Snow = 0x4E,
    Ice = 0x4F,
    SnowBlock = 0x50,
    Cactus = 0x51,
    Clay = 0x52,
    Reed = 0x53,
    Jukebox = 0x54,
    Fence = 0x55
  };

  void initialize_constants();
  
  extern int MaterialCount;
  extern int MapZ;
  extern int MapX;
  extern int MapY;
  extern const char **MaterialName;
  extern Color **MaterialColor;
  extern Color **MaterialSideColor;
};

#endif /* _BLOCKS_H_ */
