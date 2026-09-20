// FUN_01a3ac58 @ 01a3ac58

void FUN_01a3ac58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = &cf_title;
  local_60 = &cf_r;
  local_70 = &cf_lightHex;
  local_58 = &cf__6239FF;
  local_68 = &cf_darkHex;
  local_50 = &cf__6239FF;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_78);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_title;
  local_90 = &cf_r;
  local_a0 = &cf_lightHex;
  local_88 = &cf__D9006C;
  local_98 = &cf_darkHex;
  local_80 = &cf__D9006C;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_90,&local_a8,3);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = &cf_title;
  local_c0 = &cf_r;
  local_d0 = &cf_lightHex;
  local_b8 = &cf__3A7DFF;
  local_c8 = &cf_darkHex;
  local_b0 = &cf__3A7DFF;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_c0,&local_d8,3);
  _objc_retainAutoreleasedReturnValue();
  local_108 = &cf_title;
  local_f0 = &cf_r;
  local_100 = &cf_lightHex;
  local_e8 = &cf__C77DFF;
  local_f8 = &cf_darkHex;
  local_e0 = &cf__C77DFF;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_f0,&local_108,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar5);
  return;
}

