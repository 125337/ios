// FUN_00178b74 @ 00178b74

void FUN_00178b74(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_104;
  uint local_cc;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = local_30, FUN_00180090(), (uVar2 & 1) == 0)) {
    uVar2 = local_30;
    (*DAT_028c88d0)(local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_28 = uVar2;
  }
  else {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028c8901);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRAddedSectionCache_026ce370;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRAddedSectionCache_026ce370,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*DAT_028c88d0)(local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar2;
    }
    else {
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_recentContacts_0269fb08);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_cc = 0;
      if (uVar3 != 0) {
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_recentTitle_0269fa58);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
        local_cc = (uint)uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((local_cc & 1) == 0) {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_earliestContacts_0269fb10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_104 = 0;
        if (uVar3 != 0) {
          uVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_earliestTitle_0269fa60);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
          local_104 = (uint)uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((local_104 & 1) == 0) {
          uVar2 = local_30;
          (*DAT_028c88d0)(local_30,local_38,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_28 = uVar2;
        }
        else {
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_earliestContacts_0269fb10);
          _objc_retainAutoreleasedReturnValue();
          local_28 = uVar2;
        }
      }
      else {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_recentContacts_0269fb08);
        _objc_retainAutoreleasedReturnValue();
        local_28 = uVar2;
      }
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

