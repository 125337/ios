// FUN_00957358 @ 00957358

void FUN_00957358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_170;
  undefined *local_110;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
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
  puVar1 = PTR_WCRClipboardHistoryStore_026ce680;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d9 = 0;
  local_110 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_110 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_110;
  }
  local_d9 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_110;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if ((puVar1 == (undefined *)0x0) && (FUN_00957fd0(), ((ulong)puVar1 & 1) == 0)) {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar4;
    FUN_00956b08();
    puVar2 = local_d0;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_170 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_170 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_170;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      puVar2 = local_d0;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if (pcVar4 != (cfstringStruct *)0x0) {
        local_c8 = &cf_id;
        local_a0 = &cf___current__;
        local_c0 = &cf_type;
        local_98 = &cf_text;
        local_b8 = &cf_text;
        local_90 = local_f0;
        local_b0 = &cf_time;
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = &cf_pinned;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_88 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_80 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a0,&local_c8,5);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_f0,0);
    }
    else {
      local_78 = &cf_id;
      local_50 = &cf___current__;
      local_70 = &cf_type;
      local_48 = &cf_image;
      local_68 = &cf_text;
      local_40 = &cf___;
      local_60 = &cf_time;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = &cf_pinned;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_e8,0);
  }
  puVar1 = local_d0;
  FUN_0095e50c();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

