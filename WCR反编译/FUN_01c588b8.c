// FUN_01c588b8 @ 01c588b8

void FUN_01c588b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_nicknameTextColorDark_026c1eb0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_nicknameTextColorLight_026c1eb8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

