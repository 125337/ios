// FUN_014ba8ec @ 014ba8ec

void FUN_014ba8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint local_7c;
  uint local_54;
  long local_50;
  int local_48;
  byte local_41;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_description_026ca5f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_containsString__0269d0b0,*(undefined8 *)(param_1 + 0x20));
  local_54 = 1;
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    local_7c = 0;
    if (lVar3 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_containsString__0269d0b0,*(undefined8 *)(param_1 + 0x28));
      local_7c = (uint)uVar1;
    }
    local_54 = local_7c;
  }
  local_41 = (byte)local_54 & 1;
  if ((local_54 & 1) == 0) {
    local_48 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_014b5580();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      lVar4 = local_20;
      FUN_014b87d8(local_20,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_50;
      local_50 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    lVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_50);
    }
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_48 == 0) {
    local_48 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

