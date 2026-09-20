// FUN_00021ab4 @ 00021ab4

void FUN_00021ab4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_20;
      FUN_0001a198(local_20,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      uVar2 = local_38;
      if (uVar3 == 0) {
        uVar2 = local_20;
        FUN_0001a4fc(local_20,&cf_m_nsContent);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_0001a2e4();
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_30 = 1;
    }
  }
  else {
    uVar2 = local_20;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = 1;
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

