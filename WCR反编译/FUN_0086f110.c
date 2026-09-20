// FUN_0086f110 @ 0086f110

byte FUN_0086f110(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd85b & 1) == 0) {
    (*DAT_028cd748)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

