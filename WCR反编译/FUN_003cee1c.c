// FUN_003cee1c @ 003cee1c

void FUN_003cee1c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_78;
  ulong local_40 [4];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_currentTitle_026a2200);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTitle_026a2200);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_titleLabel);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar2;
    FUN_003612b8(uVar2,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(local_40,0);
  }
  uVar1 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_accessibilityLabel);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) == 0) {
    local_78 = 0;
  }
  else {
    local_78 = local_20;
  }
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

