// FUN_007bd820 @ 007bd820

byte FUN_007bd820(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_2);
  FUN_007ac894();
  if ((((ulong)puVar1 & 1) == 0) ||
     (FUN_007ae358(), puVar1 != (ulong *)((long)&MACH_HEADER.magic + 1))) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_007bda28(0);
    uVar4 = local_28;
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar4 = local_20;
        FUN_007af1ac(local_20,local_28);
        if ((uVar4 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar4 = local_20;
          FUN_007bdb34(local_20,local_28);
          local_11 = ((byte)uVar4 ^ 1) & 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

