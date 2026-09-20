// FUN_00423eb8 @ 00423eb8

void FUN_00423eb8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_6f8;
  cfstringStruct *local_6e0;
  cfstringStruct *local_568;
  cfstringStruct *local_560;
  cfstringStruct *local_4d8;
  cfstringStruct *local_4c0;
  cfstringStruct *local_440;
  cfstringStruct *local_428;
  cfstringStruct *local_410;
  cfstringStruct *local_350;
  cfstringStruct *local_340;
  cfstringStruct *local_330;
  cfstringStruct *local_320;
  cfstringStruct *local_310;
  cfstringStruct *local_300;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d0;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  cfstringStruct *local_168;
  byte local_15a;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8 [3];
  cfstringStruct *local_d0;
  int local_c4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_b8 == (cfstringStruct *)0x0) {
    local_b0 = (undefined *)0x0;
    local_c4 = 1;
  }
  else {
    pcVar2 = local_c0;
    FUN_00426910();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_b8;
    local_d0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_e8[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsToUsr_0269d090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsRealChatUsr_0269d190);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsPushContent_026a3790);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsLastDisplayContent_026a3798);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_b8;
    FUN_0042698c(local_b8,local_d0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_b8;
    local_118 = pcVar2;
    FUN_00426f20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_120 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar4;
    FUN_004272f0(puVar4,local_f8);
    FUN_004272f0(local_128,local_120);
    FUN_004272f0(local_128,local_118);
    FUN_004272f0(local_128,local_e8[0]);
    FUN_004272f0(local_128,local_f0);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    if (local_d0 == (cfstringStruct *)0x0) {
      local_2d0 = &cf___;
    }
    else {
      local_2d0 = local_d0;
    }
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d0,&cf_sessionHint);
    if (local_e8[0] == (cfstringStruct *)0x0) {
      local_2e0 = &cf___;
    }
    else {
      local_2e0 = local_e8[0];
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_2e0,&cf_fromUserName);
    if (local_f0 == (cfstringStruct *)0x0) {
      local_2f0 = &cf___;
    }
    else {
      local_2f0 = local_f0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_2f0,&cf_toUserName);
    if (local_f8 == (cfstringStruct *)0x0) {
      local_300 = &cf___;
    }
    else {
      local_300 = local_f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_300,&cf_realChatUserName)
    ;
    if (local_100 == (cfstringStruct *)0x0) {
      local_310 = &cf___;
    }
    else {
      local_310 = local_100;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_310,&cf_content);
    if (local_108 == (cfstringStruct *)0x0) {
      local_320 = &cf___;
    }
    else {
      local_320 = local_108;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_320,&cf_pushContent);
    if (local_110 == (cfstringStruct *)0x0) {
      local_330 = &cf___;
    }
    else {
      local_330 = local_110;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_330,&cf_displayContent);
    if (local_118 == (cfstringStruct *)0x0) {
      local_340 = &cf___;
    }
    else {
      local_340 = local_118;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_340,&cf_sessionUserName);
    if (local_120 == (cfstringStruct *)0x0) {
      local_350 = &cf___;
    }
    else {
      local_350 = local_120;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_350,&cf_senderUserName);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_uiMessageType_0269d0a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithInt__0269d810,(ulong)pcVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_messageType);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_n64MesSvrID_0269d3e0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithLongLong__0269d808,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_mesSvrID);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_uiMesLocalID_0269d238);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_localID);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_uiCreateTime_0269d208);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_createTime);
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar1 = SUB84(puVar4,0);
    FUN_00405240();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithBool__0269ce60,uVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_capturedDuringWarmUp
              );
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_100;
    FUN_0042746c();
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_100;
      FUN_0040ca7c();
      local_150 = pcVar2;
      if (pcVar2 == (cfstringStruct *)((long)&MACH_HEADER.ncmds + 3)) {
        pcVar2 = local_100;
        FUN_00427a24(0);
        _objc_retainAutoreleasedReturnValue();
        local_4c0 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_4c0 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_4c0,&cf_appMsgTitle);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_100;
      FUN_00427bbc();
      _objc_retainAutoreleasedReturnValue();
      local_4d8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_4d8 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_4d8,&cf_structuredTexts
                );
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_410 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_410 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_410,&cf_type57Title);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_referContent);
      _objc_retainAutoreleasedReturnValue();
      local_428 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_428 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_428,
                 &cf_type57ReferContent);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_referContentDisplay);
      _objc_retainAutoreleasedReturnValue();
      local_440 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_440 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_440,
                 &cf_type57ReferDisplay);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_140 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_140;
      pcVar2 = local_138;
      local_148 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      FUN_0040d1ec(puVar4,puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar5 = local_140;
      puVar4 = local_148;
      pcVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_referContent);
      _objc_retainAutoreleasedReturnValue();
      FUN_0040d1ec(puVar5,puVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar4 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_structuredTexts);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_140,0);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_b8;
    FUN_0042832c();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithBool__0269ce60,(ulong)pcVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_isSelfSent);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = &cf___;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsAtUserList_026a37a0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsAtUserList_026a37a0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar3;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_158;
      local_158 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_158,&cf_atUserList);
    local_159 = 0;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_IsAtMe_0269d198);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_IsAtMe_0269d198);
      local_159 = (byte)pcVar2;
    }
    local_15a = 0;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_IsAtAll_026a37a8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_IsAtAll_026a37a8);
      local_15a = (byte)pcVar2;
    }
    if (((local_15a & 1) == 0) &&
       (pcVar2 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
       pcVar2 != (cfstringStruct *)0x0)) {
      pcVar2 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_168 = pcVar2;
      _memset(auStack_1b0,0,0x40);
      pcVar2 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_560 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10)
      ;
      if (local_560 != (cfstringStruct *)0x0) {
        lVar7 = *local_1a0;
        local_568 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_1a0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar7,pcVar2);
            }
            uVar8 = *(ulong *)(local_1a8 + (long)local_568 * 8);
            local_170 = uVar8;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
            if (((uVar8 & 1) == 0) &&
               (uVar8 = local_1b8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1b8,PTR_s_isEqualToString__0269ccc8,&cf__all), (uVar8 & 1) == 0)) {
              local_c4 = 0;
            }
            else {
              local_15a = 1;
              local_c4 = 2;
            }
            _objc_storeStrong(&local_1b8,0);
            if (local_c4 != 0) goto LAB_0042560c;
            local_568 = (cfstringStruct *)((long)&local_568->field0_0x0 + 1);
          } while (local_568 < local_560);
          local_560 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_568 = (cfstringStruct *)0x0;
        } while (local_560 != (cfstringStruct *)0x0);
      }
      local_c4 = 0;
LAB_0042560c:
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_168,0);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_159 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_isAtMe);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_15a & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_isAtAll);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = &cf___;
    local_1d8 = (cfstringStruct *)0x0;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_patMessageWrap_026a37b0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_patMessageWrap_026a37b0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1d8;
      local_1d8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    local_1e0 = (cfstringStruct *)0x0;
    if ((local_1d8 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_1d8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_1d8,PTR_s_respondsToSelector__026ca818,PTR_s_patWraps_026a37b8),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_patWraps_026a37b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1e8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar2 = local_1e8, (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0),
         pcVar2 != (cfstringStruct *)0x0)) {
        pcVar3 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1e0;
        local_1e0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_1e8,0);
    }
    if (local_1e0 != (cfstringStruct *)0x0) {
      pcVar2 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_fromUserName_026a37c0);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_fromUserName_026a37c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1c0;
        local_1c0 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar2 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_pattedUserName_026a37c8);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_pattedUserName_026a37c8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1c8;
        local_1c8 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar2 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_contentId_026a37d0);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_createTime_0269f088);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_createTime_0269f088);
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1f0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__llu);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_1d0;
          local_1d0 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      else {
        pcVar3 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_contentId_026a37d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1d0;
        local_1d0 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    pcVar2 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_100;
      FUN_00428728(local_100,&cf_pattedusername);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1c8;
      local_1c8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar3 = local_100;
        FUN_00428728(local_100,&cf_pattedUserName);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1c8;
        local_1c8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar2 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_100;
      FUN_00428728(local_100,&cf_fromusername);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1c0;
      local_1c0 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar3 = local_100;
        FUN_00428728(local_100,&cf_fromUserName);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1c0;
        local_1c0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c0,&cf_patFromUserName);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c8,&cf_patPattedUserName
              );
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,&cf_patContentId);
    pcVar2 = local_100;
    FUN_00428dc4();
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_6e0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_6e0 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_6e0,
                 &cf_miniProgramTitle);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_6f8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_6f8 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,local_6f8,
                 &cf_miniProgramContent);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    puVar4 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_stripIdentifiers);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
    local_c4 = 1;
    local_b0 = puVar4;
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(local_e8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

