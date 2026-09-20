// FUN_008c8294 @ 008c8294

byte FUN_008c8294(undefined8 param_1,undefined8 param_2)

{
  (*DAT_028ce1b8)(param_1,param_2);
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 1;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  FUN_008c58c4(2,0);
  FUN_008c58c4(4,0,0);
  return (byte)param_1 & 1;
}

