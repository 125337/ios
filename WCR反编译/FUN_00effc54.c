// FUN_00effc54 @ 00effc54

void FUN_00effc54(long param_1)

{
  ulong uVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

