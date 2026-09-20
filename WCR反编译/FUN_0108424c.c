// FUN_0108424c @ 0108424c

ulong FUN_0108424c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_60;
  undefined8 local_58;
  uint local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pinned_026ae320);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pinned_026ae320);
  if ((int)uVar1 == (int)uVar2) {
    if (*(long *)(param_1 + 0x30) == 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_attributesOfItemAtPath_error__0269db08);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar6 = *(ulong *)(param_1 + 0x20);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_attributesOfItemAtPath_error__0269db08,uVar1,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_compare__0269cd10,local_58);
      if (uVar1 != 0) {
        local_28 = uVar1;
      }
      local_4c = (uint)(uVar1 != 0);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      if (local_4c != 0) goto LAB_01084624;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
      if (lVar4 != 0) {
        uVar1 = local_38;
        FUN_01084654(local_38,*(undefined8 *)(param_1 + 0x28));
        uVar2 = local_40;
        FUN_01084654(local_40,*(undefined8 *)(param_1 + 0x28));
        if (uVar1 != uVar2) {
          local_28 = 1;
          if ((long)uVar1 < (long)uVar2) {
            local_28 = 0xffffffffffffffff;
          }
          local_4c = 1;
          goto LAB_01084624;
        }
      }
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_localizedStandardCompare__0269e098);
    local_28 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_4c = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pinned_026ae320);
    local_28 = 1;
    if ((uVar1 & 1) != 0) {
      local_28 = 0xffffffffffffffff;
    }
    local_4c = 1;
  }
LAB_01084624:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

