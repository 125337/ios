// FUN_000c0b14 @ 000c0b14

undefined4 FUN_000c0b14(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_14;
  
  uVar1 = param_1;
  FUN_000c151c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8128)(param_1,param_2);
    local_14 = (undefined4)param_1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

