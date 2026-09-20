// FUN_0045715c @ 0045715c

void FUN_0045715c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_f0;
  ulong local_60 [4];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_emojiInfo_026a3d98);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_60[0] = 0;
    if ((local_40 != 0) &&
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_md5_026a3da0), (uVar1 & 1) != 0)
       ) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_md5_026a3da0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60[0];
      local_60[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_60[0];
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_60[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0), uVar1 == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_md5String);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60[0];
      local_60[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_60[0];
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = local_60[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_f0;
    local_34 = 1;
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

