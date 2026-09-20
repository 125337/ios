// FUN_016059fc @ 016059fc

byte FUN_016059fc(long param_1)

{
  ulong uVar1;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_28);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_28);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        goto LAB_01605ad4;
      }
    }
    local_11 = 1;
  }
LAB_01605ad4:
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

