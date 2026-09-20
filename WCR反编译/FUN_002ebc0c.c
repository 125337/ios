// FUN_002ebc0c @ 002ebc0c

void FUN_002ebc0c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_a0;
  cfstringStruct *local_68;
  undefined4 local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_60 = 1;
  }
  else {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a0 = &cf_ttf;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_40 = &cf_ttf;
    local_38 = &cf_otf;
    local_30 = &cf_ttc;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _objc_storeStrong(&local_68,&cf_ttf);
    }
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar2 = local_50;
    FUN_002e98f0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_stringWithFormat__0269cca8,&cf______font_font____v___);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

