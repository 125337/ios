// FUN_0033cca4 @ 0033cca4

ulong FUN_0033cca4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_38;
  undefined8 local_18;
  
  (*DAT_028c9f98)(param_1,param_2);
  uVar1 = param_1;
  FUN_00341b9c();
  local_18 = param_1;
  if ((uVar1 & 1) != 0) {
    local_38 = param_1;
    if (param_1 < 0x100000000) {
      local_38 = 0xffffffff;
    }
    local_18 = local_38;
  }
  return local_18;
}

