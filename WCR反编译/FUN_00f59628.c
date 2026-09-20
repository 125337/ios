// FUN_00f59628 @ 00f59628

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00f59628(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = &cf_clicfg_ad_forbid_boss_comment_force_first;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_clicfg_ad_forbid_hide_first_boss_comment;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,1);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_clicfg_sub_list_expose_logic_ban;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x20);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_clicfg_timeline_support_ad_comment_emoticon_img_post;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_clicfg_search_comment_use_auto_load_emojis_ios;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_20 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_68,5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e2de8;
  DAT_028e2de8 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

