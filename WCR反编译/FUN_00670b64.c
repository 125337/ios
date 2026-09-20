// FUN_00670b64 @ 00670b64

void FUN_00670b64(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    FUN_00655fa0(local_20,PTR_s_attributedText_0269fcf8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = pcVar2 != (cfstringStruct *)0x0;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar1) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_20;
      FUN_0066cee4();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b8 = &cf___;
      }
      local_58 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_b8;
      local_24 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

