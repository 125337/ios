// FUN_0086f0a4 @ 0086f0a4

byte FUN_0086f0a4(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd85b & 1) == 0) {
    (*DAT_028cd740)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

