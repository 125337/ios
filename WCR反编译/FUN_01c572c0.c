// FUN_01c572c0 @ 01c572c0

void FUN_01c572c0(long param_1)

{
  long lVar1;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_38;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar1 != 2) {
    local_60 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nicknameTextColorLight_026c1eb8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_60;
  }
  else {
    local_60 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nicknameTextColorDark_026c1eb0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (lVar1 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

