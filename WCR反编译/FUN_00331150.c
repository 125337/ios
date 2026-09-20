// FUN_00331150 @ 00331150

ulong FUN_00331150(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_1;
  FUN_00331804();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9e20)(param_1,param_2);
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

