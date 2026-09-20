// FUN_019e0b50 @ 019e0b50

void FUN_019e0b50(long param_1)

{
  long lVar1;
  undefined8 local_38;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar1 == 2) {
    local_38 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

