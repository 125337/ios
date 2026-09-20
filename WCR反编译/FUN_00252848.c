// FUN_00252848 @ 00252848

byte FUN_00252848(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028c93f8 & 1) == 0) {
    (*DAT_028c93e0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

