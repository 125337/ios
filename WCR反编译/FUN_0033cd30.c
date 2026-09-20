// FUN_0033cd30 @ 0033cd30

ulong FUN_0033cd30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = param_1;
  FUN_00341b9c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9fa0)(param_1,param_2);
    local_28 = param_1;
  }
  else {
    local_28 = 0xffffffff;
  }
  return local_28;
}

