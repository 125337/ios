// FUN_0050509c @ 0050509c

byte FUN_0050509c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_005055f8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028caf78)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

