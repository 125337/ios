// fireCgiForUserName: @ 00f78860

/* Function Stack Size: 0x18 bytes */

void WCRefineFriendRelationChecker::fireCgiForUserName_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  dispatch_time_t dVar8;
  char *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  ID local_138;
  undefined8 local_130;
  undefined1 local_123;
  byte local_122;
  byte local_121;
  char *local_120 [3];
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  ID local_d0;
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  ID local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined8 local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_48;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00f79370;
    local_70 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar7 = local_58;
    local_68 = IVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar7;
    _dispatch_async(puVar3,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_8c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
  }
  else {
    uVar7 = local_58;
    FUN_00f73814();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar7;
    FUN_00f74490();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
    local_a0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_98,&cf_currentUserName);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_a0,&cf_currentDisplayName)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_removeObjectForKey__0269d700,&cf_networkRetryAt);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_removeObjectForKey__0269d700,&cf_networkRetryDelay);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_updatedAt);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_a8);
    pcVar4 = "WCPayBeforeTransferCgi";
    _objc_getClass();
    local_b0 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_completeCurrentUser_display_verd_026acbb8,local_98,local_a0,
                 _kWCRFriendRelationVerdictUncertain,&::cf___,0xffffffffffffffff,&cf__eN_jWWNS_u);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_pauseWithReason__026acaf0,_kWCRFriendRelationPauseNetwork);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eN_jWWNS_uhKm_f_P)
      ;
      local_8c = 1;
    }
    else {
      FUN_00f793b8(pcVar4);
      IVar6 = local_48;
      IVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_requestToken_026acb48);
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_setRequestToken__026acb50,IVar5 + 1);
      IVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_requestToken_026acb48);
      local_b8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setWaitingUserName__026acb58,local_98);
      puVar3 = PTR_WCRFriendRelationCgiBridge_026cebd8;
      _objc_alloc_init();
      local_c0 = puVar3;
      _objc_initWeak(auStack_c8,local_48);
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_00f793c8;
      local_f0 = &DAT_02583638;
      _objc_copyWeak(auStack_d8,auStack_c8);
      uVar1 = local_98;
      local_d0 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = local_a0;
      local_e8 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setHandler__0269fb20,&local_108);
      pcVar4 = local_b0;
      _objc_alloc_init();
      local_120[0] = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setUsername__026a2510);
      local_121 = (byte)pcVar4;
      pcVar4 = local_120[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120[0],PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
      local_122 = (byte)pcVar4;
      pcVar4 = local_120[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120[0],PTR_s_respondsToSelector__026ca818,PTR_s_startRequest_026ab160);
      local_123 = SUB81(pcVar4,0);
      if ((((local_120[0] == (char *)0x0) || ((local_121 & 1) == 0)) || ((local_122 & 1) == 0)) ||
         (((ulong)pcVar4 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentBridge__026acb70,local_c0);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentCgi__026acb60,local_120[0]);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_handleCgiResponse_error_userName_026acbc0,0,&cf_no_start,local_98,
                   local_a0);
        local_8c = 1;
      }
      else {
        pcVar4 = local_120[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120[0],PTR_s_respondsToSelector__026ca818,PTR_s_setUsername__026a2510);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_120[0],PTR_s_setUsername__026a2510,local_98);
        }
        pcVar4 = local_120[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120[0],PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_120[0],PTR_s_setDelegate__026ca910,local_c0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentBridge__026acb70,local_c0);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentCgi__026acb60,local_120[0]);
        local_170 = PTR___NSConcreteStackBlock_02578660;
        local_168 = 0xc2000000;
        local_164 = 0;
        local_160 = FUN_00f79780;
        local_158 = &DAT_02583088;
        _objc_copyWeak(auStack_140,auStack_c8);
        uVar1 = local_98;
        local_138 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        uVar7 = local_a0;
        local_150 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar7;
        uVar7 = 0;
        _dispatch_block_create(0,&local_170);
        local_130 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTimeoutBlock__026acb80,uVar7);
        dVar8 = _dispatch_time(0,12000000000);
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar8,puVar3,local_130);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_178 = PTR_s_startRequest_026ab160;
        pcVar4 = local_120[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120[0],PTR_s_respondsToSelector__026ca818,PTR_s_startRequest_026ab160);
        if (((ulong)pcVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_handleCgiResponse_error_userName_026acbc0,0,&cf_no_start,
                     local_98,local_a0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_120[0],local_178);
          pcVar4 = local_120[0];
          local_40 = &cf_username;
          local_38 = &cf_m_username;
          local_30 = &cf_m_nsUsername;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_00f79848();
          _objc_retainAutoreleasedReturnValue();
          local_180 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_180,0);
        }
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_150,0);
        _objc_destroyWeak(auStack_140);
        local_8c = 0;
      }
      _objc_storeStrong(local_120);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_c8);
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

