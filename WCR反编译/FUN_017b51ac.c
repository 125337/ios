// FUN_017b51ac @ 017b51ac

void FUN_017b51ac(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar1 = local_20;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_description_026ca5f8);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_30 = 1;
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_38 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        local_88 = &cf___;
      }
      else {
        local_88 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_88;
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

