// FUN_016bab58 @ 016bab58

void FUN_016bab58(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_nil;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_CGColor_026ca470);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_nil;
    }
    else {
      pcVar2 = pcVar1;
      _CGColorGetNumberOfComponents();
      _CGColorGetComponents();
      if ((pcVar1 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_98 = &cf_nil;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_98;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else if (pcVar2 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_g__3f_a__3f);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      else if (pcVar2 < &MACH_HEADER.cputype) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_c8 = &cf_nil;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_c8;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_r__3f_g__3f_b__3f_a__3f);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

