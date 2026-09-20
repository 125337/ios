// FUN_00f53b40 @ 00f53b40

void FUN_00f53b40(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = false;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_description_026ca5f8);
    if ((uVar2 & 1) != 0) {
      local_38 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_28 = local_38;
      goto LAB_00f53bec;
    }
  }
  local_38 = 0;
LAB_00f53bec:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

