// FUN_00394da8 @ 00394da8

byte FUN_00394da8(long param_1)

{
  ulong uVar1;
  undefined8 local_28;
  long local_20;
  bool local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == 0) {
    local_11 = true;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_groupScopeForNativeSession__026a2c60,local_28)
    ;
    if (((*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 3) == 0) &&
       ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 0x1c) != 0)) {
      local_11 = (uVar1 & 0x1c) != 0;
    }
    else if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == 1) {
      local_11 = uVar1 == 1;
    }
    else if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == 2) {
      local_11 = uVar1 == 2;
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

