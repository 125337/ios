// FUN_0221a854 @ 0221a854

undefined1  [16] FUN_0221a854(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_38 = 0x13f;
  FUN_0221a978();
  local_30 = 0x3f;
  if (param_2 < 0x40) {
    local_28 = *(long *)(local_38 + -8) + 0x40;
    local_38 = 0x13f;
    FUN_0221aa08();
    uVar2 = 0x3f;
    local_30 = 0x3f;
    if (param_2 < 0x40) {
      local_20 = *(long *)(local_38 + -8) + 0x40;
      local_38 = 0x13f;
      FUN_0221aa98();
      local_30 = 0x3f;
      if (uVar2 < 0x40) {
        local_18 = *(long *)(local_38 + -8) + 0x40;
        local_30 = 0x100;
        _swift_updateClassMetadata2(param_1,0x100,3,&local_28,param_1 + 0x50);
        local_38 = param_1;
        if (param_1 == 0) {
          local_38 = 0;
          local_30 = 0;
        }
      }
    }
  }
  auVar1._8_8_ = local_30;
  auVar1._0_8_ = local_38;
  return auVar1;
}

