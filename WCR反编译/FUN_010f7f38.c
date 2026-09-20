// FUN_010f7f38 @ 010f7f38

void FUN_010f7f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar1 = *(cfstringStruct **)(param_1 + 0x20);
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nativeSVGNameForMenuType__026aecf0,local_b8);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_id;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_title;
  if (local_c0 == (cfstringStruct *)0x0) {
    local_f0 = &cf___;
  }
  else {
    local_f0 = local_c0;
  }
  local_60 = local_f0;
  local_98 = &cf_icon;
  pcVar1 = local_d0;
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_d0;
  }
  local_58 = local_f8;
  local_90 = &cf_detail;
  local_50 = &cf__eUS;
  local_88 = &cf_category;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_supports_sort;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_kind;
  local_38 = &cf_native;
  local_70 = &cf_menuType;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_a8,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar6);
  return;
}

