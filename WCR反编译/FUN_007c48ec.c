// FUN_007c48ec @ 007c48ec

byte FUN_007c48ec(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  byte local_11;
  
  (*DAT_028ccdd0)(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((DAT_028cce69 & 1) == 0) {
    local_11 = (byte)param_1 & 1;
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    local_11 = 0;
  }
  return local_11;
}

