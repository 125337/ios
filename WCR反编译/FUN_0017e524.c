// FUN_0017e524 @ 0017e524

void FUN_0017e524(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0017b8cc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 3)) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,0);
    local_46 = SUB82(pcVar1,0);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,1);
    local_48 = SUB82(pcVar1,0);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,2);
    local_4a = SUB82(pcVar1,0);
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__C_C_C_C_C_C
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.cputype + 2)) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789ABCDEF);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_28 = local_38;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_50 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

