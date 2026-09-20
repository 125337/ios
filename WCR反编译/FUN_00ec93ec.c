// FUN_00ec93ec @ 00ec93ec

void FUN_00ec93ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
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
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = &cf_id;
  local_70 = &cf_wcr_attach_plugin_voice_pack;
  local_a0 = &cf_title;
  local_68 = &cf_S;
  local_98 = &cf_sourceTitle;
  local_60 = &cf_S;
  local_90 = &cf_icon;
  local_58 = &cf_icons_filled_song;
  local_88 = &cf_enabled;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_kind;
  local_48 = &cf_plugin;
  local_78 = &cf_action;
  local_40 = &cf_wcr_builtin_voice_pack;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_70,&local_a8);
  _objc_retainAutoreleasedReturnValue();
  local_118 = &cf_id;
  local_e0 = &cf_wcr_attach_plugin_small_signal;
  local_110 = &cf_title;
  local_d8 = &cf__OS;
  local_108 = &cf_sourceTitle;
  local_d0 = &cf__OS;
  local_100 = &cf_icon;
  local_c8 = &cf_bell_on_filled;
  local_f8 = &cf_enabled;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_kind;
  local_b8 = &cf_plugin;
  local_e8 = &cf_action;
  local_b0 = &cf_wcr_builtin_small_signal;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e0,&local_118,7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
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

