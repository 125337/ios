// FUN_004fc82c @ 004fc82c

void FUN_004fc82c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong local_290;
  ulong local_288;
  ulong local_250;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  byte local_1c2;
  byte local_1c1;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0 [4];
  ulong local_190;
  ulong local_188;
  ulong local_180;
  int local_174;
  undefined8 local_170;
  ulong local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  ulong local_100;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  _objc_storeStrong(&local_168,param_1);
  local_170 = 0;
  _objc_storeStrong(&local_170,param_2);
  uVar2 = local_168;
  if (local_168 == 0) {
    local_160 = (undefined *)0x0;
    local_174 = 1;
  }
  else {
    uVar1 = local_170;
    FUN_004fe524();
    _objc_retainAutoreleasedReturnValue();
    FUN_004fe394();
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_180;
    FUN_004fe694();
    if ((uVar2 & 1) == 0) {
      local_160 = (undefined *)0x0;
      local_174 = 1;
    }
    else {
      local_188 = 0;
      local_190 = 0;
      uVar12 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_190;
      local_190 = uVar12;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
      if ((uVar2 & 1) == 0) {
        local_250 = 0;
      }
      else {
        local_250 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_integerValue_026ca750);
      }
      local_188 = local_250;
      uVar2 = local_168;
      FUN_004fe730(local_168,local_180);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = local_168;
      local_1b0[0] = uVar2;
      FUN_004fe8e0(local_168,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_168;
      local_1b8 = uVar12;
      FUN_004fe8e0(local_168,&cf_m_nsAtUserList);
      _objc_retainAutoreleasedReturnValue();
      local_1c1 = 0;
      local_1c2 = 0;
      uVar12 = local_168;
      local_1c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_IsAtMe_0269d198);
      if ((uVar12 & 1) != 0) {
        uVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_IsAtMe_0269d198);
        local_1c1 = (byte)uVar2;
      }
      uVar2 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_IsAtAll_026a37a8);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_IsAtAll_026a37a8);
        local_1c2 = (byte)uVar2;
      }
      if (((local_1c2 & 1) == 0) &&
         (uVar2 = local_1c0, (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0),
         uVar2 != 0)) {
        _memset(auStack_218,0,0x40);
        uVar2 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_288 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_288 != 0) {
          lVar11 = *local_208;
          local_290 = 0;
          do {
            do {
              if (*local_208 - lVar11 != 0) {
                _objc_enumerationMutation(*local_208 - lVar11,uVar2);
              }
              uVar12 = *(ulong *)(local_210 + local_290 * 8);
              local_1d8 = uVar12;
              FUN_004fe524();
              _objc_retainAutoreleasedReturnValue();
              local_220 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar12,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
              if (((uVar12 & 1) == 0) &&
                 (uVar12 = local_220,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_220,PTR_s_isEqualToString__0269ccc8,&cf__all), (uVar12 & 1) == 0))
              {
                local_174 = 0;
              }
              else {
                local_1c2 = 1;
                local_174 = 4;
              }
              _objc_storeStrong(&local_220,0);
              if (local_174 != 0) goto LAB_004fcd80;
              local_290 = local_290 + 1;
            } while (local_290 < local_288);
            local_288 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                       0x10);
            local_290 = 0;
          } while (local_288 != 0);
        }
        local_174 = 0;
LAB_004fcd80:
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_158 = &cf_session;
      local_100 = local_180;
      local_150 = &cf_sender;
      local_f8 = local_1b0[0];
      local_148 = &cf_messageType;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_188);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_140 = &cf_content;
      local_e8 = local_1b8;
      local_138 = &cf_createTime;
      uVar2 = local_168;
      local_f0 = puVar3;
      FUN_004feaa8(local_168,&cf_m_uiCreateTime);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithLongLong__0269d808,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_130 = &cf_svrID;
      uVar2 = local_168;
      local_e0 = puVar4;
      FUN_004feaa8(local_168,&cf_m_n64MesSvrID);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithLongLong__0269d808,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_128 = &cf_localID;
      uVar2 = local_168;
      local_d8 = puVar5;
      FUN_004feaa8(local_168,&cf_m_uiMesLocalID);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithLongLong__0269d808,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_120 = &cf_isSelfSent;
      uVar2 = local_168;
      local_d0 = puVar6;
      FUN_004fec78(local_168);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithBool__0269ce60,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_118 = &cf_atUserList;
      local_c0 = local_1c0;
      local_110 = &cf_isAtMe;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_c8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_1c1 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_108 = &cf_isAtAll;
      puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_1c2 & 1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_100,&local_158,0xb);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_174 = 1;
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(local_1b0,0);
      _objc_storeStrong(&local_190,0);
    }
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

