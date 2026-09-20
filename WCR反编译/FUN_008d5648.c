// FUN_008d5648 @ 008d5648

void FUN_008d5648(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  uint local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
    goto LAB_008d59a4;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_accessibilityLabel_0269e1c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_008cb6a0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar3 = local_20;
  pcVar2 = local_38;
  if (pcVar4 == (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentTitle_026a2200);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_008cb6a0();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      pcVar2 = local_40;
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_30 = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_40,0);
      if (local_30 != 0) goto LAB_008d5984;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_30 = 1;
  }
LAB_008d5984:
  _objc_storeStrong(&local_38,0);
LAB_008d59a4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

