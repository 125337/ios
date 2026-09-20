// FUN_006b8a70 @ 006b8a70

void FUN_006b8a70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = &cf_png;
  local_40 = &cf_jpg;
  local_38 = &cf_jpeg;
  local_30 = &cf_gif;
  local_28 = &cf_webp;
  local_20 = &cf_heic;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cc1a8;
  DAT_028cc1a8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

