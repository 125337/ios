// FUN_002b1d4c @ 002b1d4c

void FUN_002b1d4c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_118;
  cfstringStruct *local_a8;
  undefined *local_98;
  undefined4 local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_78,param_1);
  if (local_78 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_78;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  if (((ulong)pcVar2 & 1) == 0) {
    local_68 = &cf_png;
    local_60 = &cf_jpg;
    local_58 = &cf_gif;
    local_50 = &cf_webp;
    local_48 = &cf_bmp;
    local_40 = &cf_mp4;
    local_38 = &cf_mov;
    local_30 = &cf_m4v;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_containsObject__0269cbb8,local_80);
    if (((ulong)puVar1 & 1) == 0) {
      local_118 = (cfstringStruct *)0x0;
    }
    else {
      local_118 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_118;
    local_90 = 1;
    _objc_storeStrong(&local_98,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &cf_jpg;
    local_90 = 1;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

