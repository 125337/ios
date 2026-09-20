// wcrGrouping_moreMenuEntries @ 0035c3cc

/* Function Stack Size: 0x10 bytes */

ID WCRGroupingSessionListViewController::wcrGrouping_moreMenuEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  SEL local_100;
  ID local_f8;
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
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = param_2;
  local_f8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sortMode_026a26b0);
  local_101 = param_1 == 1;
  local_110 = &cf__g_WMR;
  if (!(bool)local_101) {
    local_110 = &cf__g_WMR;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = &cf_e_WMR;
  if ((local_101 & 1) == 0) {
    local_118 = &cf_e_WMR;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = &cf_title;
  local_60 = local_110;
  local_68 = &cf_kind;
  local_58 = &cf_sortUnread;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_70);
  _objc_retainAutoreleasedReturnValue();
  local_90 = &cf_title;
  local_80 = local_118;
  local_88 = &cf_kind;
  local_78 = &cf_sortRecent;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_90,2);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_title;
  local_a0 = &cf_d__S_u;
  local_a8 = &cf_kind;
  local_98 = &cf_searchPage;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a0,&local_b0,2);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_title;
  local_c0 = &cf_Y6RR_I;
  local_c8 = &cf_kind;
  local_b8 = &cf_copyGroupId;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_c0,&local_d0,2);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_title;
  local_e0 = &cf_TekebXT;
  local_e8 = &cf_kind;
  local_d8 = &cf_syncMembers;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e0,&local_f0,2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar6;
}

