// FUN_017296d0 @ 017296d0

void FUN_017296d0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar2 = local_28;
  if (&MACH_HEADER.cputype < pcVar1) {
    local_40 = (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_80 = pcVar1;
    if (local_40 < pcVar1) {
      local_80 = local_40;
    }
    local_50 = local_80;
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringToIndex__0269d6c0,local_80);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_88 = local_28;
    local_61 = pcVar1 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
    if (local_61) {
      local_88 = &cf___;
    }
    else {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6));
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_88;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_88;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf________);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

