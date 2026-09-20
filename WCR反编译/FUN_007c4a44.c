// FUN_007c4a44 @ 007c4a44

byte FUN_007c4a44(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cce69 & 1) == 0) {
    (*DAT_028ccde0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

