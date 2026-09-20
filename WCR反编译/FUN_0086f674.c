// FUN_0086f674 @ 0086f674

byte FUN_0086f674(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd85c & 1) == 0) {
    (*DAT_028cd778)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

