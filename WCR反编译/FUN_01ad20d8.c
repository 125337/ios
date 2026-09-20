// FUN_01ad20d8 @ 01ad20d8

void FUN_01ad20d8(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_58;
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (local_58 != (cfstringStruct *)0x0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      goto LAB_01ad2294;
    }
  }
  pcVar2 = local_38;
  if (*(long *)(param_1 + 0x20) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
LAB_01ad2294:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

