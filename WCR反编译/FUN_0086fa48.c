// FUN_0086fa48 @ 0086fa48

byte FUN_0086fa48(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028cd85d & 1) == 0) {
    (*DAT_028cd7a0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

