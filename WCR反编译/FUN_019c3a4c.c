// FUN_019c3a4c @ 019c3a4c

void FUN_019c3a4c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_a8;
  undefined *local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
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
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_1);
  pcVar1 = local_68;
  FUN_019c4b14();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
  puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
  if (((ulong)pcVar1 & 1) == 0) {
    local_58 = &cf_png;
    local_50 = &cf_jpg;
    local_48 = &cf_gif;
    local_40 = &cf_webp;
    local_38 = &cf_bmp;
    local_30 = &cf_mp4;
    local_28 = &cf_mov;
    local_20 = &cf_m4v;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsObject__0269cbb8,local_70);
    if (((ulong)puVar4 & 1) == 0) {
      local_a8 = (cfstringStruct *)0x0;
    }
    else {
      local_a8 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a8;
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf_jpg;
    local_74 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_60);
  return;
}

