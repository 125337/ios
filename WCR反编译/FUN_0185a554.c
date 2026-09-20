// FUN_0185a554 @ 0185a554

void FUN_0185a554(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_f8;
  byte local_e9;
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
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_3);
  pcVar2 = local_e0;
  local_40 = &cf_m_nsAliasName;
  local_38 = &cf_m_nsAlias;
  local_30 = &cf_getAlias;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_e9 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0185bb64();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_d0 = &cf_id;
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_140 = &cf___;
  }
  local_88 = local_140;
  local_c8 = &cf_userName;
  pcVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_userName_0269f7b8);
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_150 = &cf___;
  }
  local_80 = local_150;
  local_c0 = &cf_displayName;
  pcVar5 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  local_160 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_160 = &cf___;
  }
  local_78 = local_160;
  local_b8 = &cf_nickName;
  pcVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_nickName_026af388);
  _objc_retainAutoreleasedReturnValue();
  local_170 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_170 = &cf___;
  }
  local_70 = local_170;
  local_b0 = &cf_remark;
  pcVar7 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_currentRemark_026b6a58);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_180 = &cf___;
  }
  local_68 = local_180;
  local_a8 = &cf_aliasName;
  if (local_f8 == (cfstringStruct *)0x0) {
    local_190 = &cf___;
  }
  else {
    local_190 = local_f8;
  }
  local_60 = local_190;
  local_a0 = &cf_sourceTitle;
  if (local_e8 == (cfstringStruct *)0x0) {
    local_1a0 = &cf___;
  }
  else {
    local_1a0 = local_e8;
  }
  local_58 = local_1a0;
  local_98 = &cf_retainChatHistory;
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_e9 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_90 = &cf_deletedAt;
  puVar9 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_50 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_88,&local_d0,9);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

