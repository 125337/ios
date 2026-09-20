// FUN_01793794 @ 01793794

void FUN_01793794(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  undefined1 *local_a0;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_68 = local_18;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_68 = &cf___;
  }
  else {
    local_28 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_20;
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    local_a0 = (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 2);
    if ((long)local_a0 < 0) {
      local_a0 = (undefined1 *)0x0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringToIndex__0269d6c0,local_a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_20;
    local_20 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  if (local_20 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_b0);
  return;
}

