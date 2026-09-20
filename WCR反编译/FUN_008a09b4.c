// FUN_008a09b4 @ 008a09b4

void FUN_008a09b4(ulong param_1,ulong param_2,ulong param_3,long param_4,byte param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  uint local_64;
  ulong local_60;
  uint local_54 [5];
  undefined8 local_40;
  byte local_31;
  long local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_40 = 0;
  local_31 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_18;
  FUN_008a0bb0();
  if ((uVar2 & 1) == 0) {
    local_54[0] = 0;
    uVar2 = local_18;
    _class_copyMethodList(local_18,local_54);
    local_60 = uVar2;
    for (local_64 = 0; local_64 < local_54[0]; local_64 = local_64 + 1) {
      uVar2 = *(ulong *)(local_60 + (ulong)local_64 * 8);
      local_70 = uVar2;
      _method_getImplementation();
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      local_80 = uVar2;
      local_78 = uVar2;
      if (((uVar2 != 0) &&
          (((uVar1 = local_20, uVar2 < local_20 || (uVar1 = local_28, local_28 <= uVar2)) &&
           (_dladdr(uVar2 - uVar1,uVar2,&local_a0), (int)uVar2 != 0)))) &&
         (((local_31 & 1) != 0 || (lStack_98 == local_30)))) {
        local_b8 = local_18;
        uVar2 = local_70;
        _method_getName();
        local_a8 = local_78;
        local_b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_appendBytes_length__026a9628,&local_b8,0x18);
      }
    }
    _free(local_64 - local_54[0],local_60);
    local_54[1] = 0;
  }
  else {
    local_54[1] = 1;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

