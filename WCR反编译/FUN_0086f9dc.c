// FUN_0086f9dc @ 0086f9dc

byte FUN_0086f9dc(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd85d & 1) == 0) {
    (*DAT_028cd798)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

