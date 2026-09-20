// FUN_00750c8c @ 00750c8c

void FUN_00750c8c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double local_1f8;
  int local_1c4;
  cfstringStruct *local_158;
  cfstringStruct *local_140;
  undefined *local_f8;
  undefined *local_e8;
  cfstringStruct *local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  if ((local_b8 == (cfstringStruct *)0x0) ||
     (lVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_b0 = (undefined *)0x0;
  }
  else {
    pcVar3 = local_b8;
    FUN_00748ad4(local_b8,&cf_m_uiCreateTime);
    iVar1 = (int)pcVar3;
    local_a8 = &cf_sessionUserName;
    local_68 = local_c0;
    local_a0 = &cf_senderUserName;
    if (local_c8 == (cfstringStruct *)0x0) {
      local_140 = &cf___;
    }
    else {
      local_140 = local_c8;
    }
    local_60 = local_140;
    local_98 = &cf_content;
    pcVar4 = local_b8;
    FUN_007520f0(local_b8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_158 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_158 = &cf___;
    }
    local_58 = local_158;
    local_90 = &cf_localID;
    pcVar5 = local_b8;
    FUN_00748ad4(local_b8,&cf_m_uiMesLocalID);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar5 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_88 = &cf_mesSvrID;
    pcVar5 = local_b8;
    local_50 = puVar6;
    FUN_0074d000(local_b8,&cf_m_n64MesSvrID);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithLongLong__0269d808,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_80 = &cf_messageType;
    pcVar5 = local_b8;
    local_48 = puVar7;
    FUN_00748ad4(local_b8,&cf_m_uiMessageType);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar5 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_78 = &cf_createTime;
    local_1c4 = iVar1;
    local_40 = puVar8;
    if (iVar1 == 0) {
      local_e8 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1c4 = (int)param_1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_numberWithUnsignedInt__0269d800,local_1c4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = &cf_time;
    local_38 = puVar9;
    if (iVar1 == 0) {
      local_f8 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1f8 = param_1;
    }
    else {
      local_1f8 = (double)NEON_ucvtf((ulong)pcVar3 & 0xffffffff);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,puVar10,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_a8,8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar11;
    (*(code *)PTR__objc_release_02578630)(puVar10);
    if (iVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar9);
    if (iVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

