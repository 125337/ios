// FUN_003a7d64 @ 003a7d64

void FUN_003a7d64(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_6c;
  ulong local_40;
  cfstringStruct *local_38;
  uint local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    pcVar2 = &cf_indexPathOfSessionUserName_;
    _NSSelectorFromString();
    uVar3 = local_28;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = 0;
    if (uVar4 != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_38);
      local_6c = (uint)uVar4;
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_20;
    pcVar2 = local_38;
    if ((local_6c & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar3 = local_40;
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar4 = local_40;
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar4;
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(&local_40,0);
      if (local_2c != 0) goto LAB_003a8020;
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_originalIndexPath_026a27d8);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = uVar3;
  }
LAB_003a8020:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

