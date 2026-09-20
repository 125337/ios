// FUN_001cc14c @ 001cc14c

void FUN_001cc14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = param_5;
  (*DAT_028c8ec0)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_001f3300();
  if ((uVar1 & 1) != 0) {
    FUN_00221728(param_5);
  }
  return;
}

