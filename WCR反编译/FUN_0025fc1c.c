// FUN_0025fc1c @ 0025fc1c

byte FUN_0025fc1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_00264438();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9458)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

