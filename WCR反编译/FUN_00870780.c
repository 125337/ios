// FUN_00870780 @ 00870780

byte FUN_00870780(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd86d & 1) == 0) {
    (*DAT_028cd7f0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

