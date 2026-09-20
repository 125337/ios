// FUN_0024d7d0 @ 0024d7d0

byte FUN_0024d7d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte local_11;
  
  if (param_3 == 6) {
    local_11 = 0;
  }
  else {
    (*DAT_028c93c8)(param_1,param_2,param_3);
    local_11 = (byte)param_1 & 1;
  }
  return local_11;
}

