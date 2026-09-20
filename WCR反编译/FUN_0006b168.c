// FUN_0006b168 @ 0006b168

undefined8 FUN_0006b168(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_2;
  FUN_00077bac();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c7db0)(param_2,param_3);
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

