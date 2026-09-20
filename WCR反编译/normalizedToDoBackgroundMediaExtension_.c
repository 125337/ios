// normalizedToDoBackgroundMediaExtension: @ 01ecda68

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListSettingsViewController::normalizedToDoBackgroundMediaExtension_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  pcVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
  if (((ulong)pcVar1 & 1) == 0) {
    local_60 = &cf_png;
    local_58 = &cf_jpg;
    local_50 = &cf_gif;
    local_48 = &cf_webp;
    local_40 = &cf_bmp;
    local_38 = &cf_heic;
    local_30 = &cf_mp4;
    local_28 = &cf_mov;
    local_20 = &cf_m4v;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_88;
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &::cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf_jpg;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_68;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

