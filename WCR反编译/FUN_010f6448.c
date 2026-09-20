// FUN_010f6448 @ 010f6448

void FUN_010f6448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
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
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_90,param_1);
  local_98 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_98,param_2);
  local_a0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a0,param_3);
  local_88 = &cf_id;
  if (local_90 == (cfstringStruct *)0x0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_90;
  }
  local_58 = local_e8;
  local_80 = &cf_title;
  if (local_98 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_98;
  }
  local_50 = local_f8;
  local_78 = &cf_icon;
  if (local_a0 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_a0;
  }
  local_48 = local_108;
  local_70 = &cf_detail;
  local_40 = &cf___;
  local_68 = &cf_category;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_supports_sort;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_5 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_88,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

