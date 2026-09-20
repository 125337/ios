// addRepositoryItemWithName:author:html:storage:pinned: @ 01eebab0

/* Function Stack Size: 0x34 bytes */

ID WCRefineToDoHTMLRepositoryViewController::addRepositoryItemWithName_author_html_storage_pinned_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long local_1e8;
  long local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined *local_140;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  byte local_d1;
  long local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  SEL local_b0;
  ID local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  local_b0 = param_2;
  local_a8 = param_1;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_4);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_5);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_6);
  local_d1 = (byte)param_7;
  lVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_a0 = (undefined *)0x0;
    local_d8 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e9 = 0;
    local_140 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_140 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_140;
    }
    local_e9 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_140;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _arc4random_uniform(10000);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_WCR_HTML__lld__u);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_98 = &cf_id;
    local_60 = local_f8;
    local_90 = &cf_name;
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_168 = &cf__g_TTNx;
    }
    else {
      local_168 = local_b8;
    }
    local_58 = local_168;
    local_88 = &cf_author;
    pcVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_170 = &cf_WCR;
    }
    else {
      local_170 = local_c0;
    }
    local_50 = local_170;
    local_80 = &cf_html;
    local_48 = local_c8;
    local_78 = &cf_storage;
    if (local_d0 == 0) {
      local_180 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_180 = local_d0;
    }
    local_40 = local_180;
    local_70 = &cf_createdAt;
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_pinned;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_d1 & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_insertObject_atIndex__0269eac0,local_100,0)
    ;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01eec144(local_f8,local_c8,1);
    if (local_d0 == 0) {
      local_1e8 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_1e8 = local_d0;
    }
    FUN_01eec2f0(local_f8,local_1e8);
    puVar2 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar2;
    local_d8 = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_a0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

