// FUN_0157fcac @ 0157fcac

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0157fcac(void)

{
  undefined *puVar1;
  undefined *puVar2;
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
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = &cf__A16BFF;
  local_40 = &cf__FF5A6E;
  local_38 = &cf__2CBF6F;
  local_30 = &cf__2E8CFF;
  local_28 = &cf__FF7A3C;
  local_20 = &cf__E85AD8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e3a60;
  DAT_028e3a60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_78 = &cf__A98CFF;
  local_70 = &cf__FF6B7C;
  local_68 = &cf__34C978;
  local_60 = &cf__56A2FF;
  local_58 = &cf__FF9452;
  local_50 = &cf__45D08A;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e3a68;
  DAT_028e3a68 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

