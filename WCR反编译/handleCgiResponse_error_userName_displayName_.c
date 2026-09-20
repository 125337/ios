// handleCgiResponse:error:userName:displayName: @ 00f79ba8

/* Function Stack Size: 0x30 bytes */

void WCRefineFriendRelationChecker::handleCgiResponse_error_userName_displayName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  dispatch_time_t dVar10;
  double dVar11;
  cfstringStruct *local_360;
  uint local_26c;
  undefined *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  ID local_158;
  undefined8 local_150 [3];
  ID local_138;
  undefined1 auStack_130 [8];
  undefined *local_128;
  double local_120;
  double local_118;
  ID local_110;
  byte local_102;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
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
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_6);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_waitingUserName_026acbc8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = local_d8;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar3 & 1) == 0) {
    local_e4 = 1;
  }
  else {
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_timeoutBlock_026acb78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_timeoutBlock_026acb78);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_block_cancel();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTimeoutBlock__026acb80,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setWaitingUserName__026acb58);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setCurrentCgi__026acb60,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setCurrentBridge__026acb70,0);
    pcVar5 = local_c8;
    local_40 = &cf_retcode;
    local_38 = &cf_errorCode;
    local_30 = &cf_m_errorCode;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40);
    _objc_retainAutoreleasedReturnValue();
    FUN_00f723b8();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar6 = local_c8;
    local_58 = &cf_retmsg;
    local_50 = &cf_errorDesc;
    local_48 = &cf_m_nsErrorDesc;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00f79848();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar6 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    pcVar5 = local_d0;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_78 = &cf_retmsg;
      local_70 = &cf_errorDesc;
      local_68 = &cf_m_nsErrorDesc;
      local_60 = &cf_localizedDescription;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_00f79848();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_f8;
      local_f8 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar5 = local_d0;
    if (local_f0 == (cfstringStruct *)0x0) {
      local_98 = &cf_retcode;
      local_90 = &cf_errorCode;
      local_88 = &cf_m_errorCode;
      local_80 = &cf_code;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_00f723b8();
      local_f0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar5 = local_c8;
    local_b0 = &cf_maskTruename;
    local_a8 = &cf_maskTrueName;
    local_a0 = &cf_receiverMaskTrueName;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00f79848();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar5 = local_d0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)pcVar5 & 1) == 0) ||
       (pcVar5 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_timeout),
       ((ulong)pcVar5 & 1) == 0)) {
      pcVar5 = local_d0;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar5 & 1) != 0) &&
         (pcVar5 = local_d0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_no_start), ((ulong)pcVar5 & 1) != 0
         )) {
        _objc_storeStrong(&local_f8,&cf_C);
        local_f0 = (cfstringStruct *)0xfffffffffffffffd;
      }
    }
    else {
      _objc_storeStrong(&local_f8,&cf_e);
      local_f0 = (cfstringStruct *)0xfffffffffffffffe;
    }
    puVar4 = PTR_WCRefineFriendRelationStore_026cebd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,
               PTR_s_isNotFriendErrorWithCode_message_026acbd0,local_f0,local_f8);
    local_101 = (byte)puVar4;
    local_26c = 0;
    if (((ulong)puVar4 & 1) == 0) {
      pcVar5 = local_d0;
      FUN_00f7aa60(local_d0,local_f0,local_f8);
      local_26c = (uint)pcVar5;
    }
    uVar9 = _kWCRFriendRelationVerdictUncertain;
    local_102 = (byte)local_26c & 1;
    if ((local_26c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = uVar9;
      if ((local_101 & 1) == 0) {
        if ((local_d0 == (cfstringStruct *)0x0) &&
           (puVar4 = PTR_WCRefineFriendRelationStore_026cebd0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_maskLooksValid__026acbe0,
                      local_100), ((ulong)puVar4 & 1) != 0)) {
          _objc_storeStrong(&local_190,_kWCRFriendRelationVerdictNormal);
          puVar4 = PTR_WCRefineAuthNameHelper_026ce2e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_lastCharFromMaskedPayLabel__026ab170,
                     local_100);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_rememberLastChar_forUser__026ab178,
                       local_198,local_d8);
          }
          _objc_storeStrong(&local_198,0);
        }
        else if ((local_d0 == (cfstringStruct *)0x0) &&
                ((local_f0 == (cfstringStruct *)0x0 &&
                 (puVar4 = PTR_WCRefineFriendRelationStore_026cebd0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_maskLooksValid__026acbe0,
                            local_100), ((ulong)puVar4 & 1) == 0)))) {
          _objc_storeStrong(&local_190,_kWCRFriendRelationVerdictSuspected);
          pcVar5 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_360 = &cf__gV_T;
          }
          else {
            local_360 = local_f8;
          }
          _objc_storeStrong(&local_f8,local_360);
        }
      }
      else {
        _objc_storeStrong(&local_190,_kWCRFriendRelationVerdictSuspected);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_completeCurrentUser_display_verd_026acbb8,local_d8,local_e0,
                 local_190,local_100,local_f0,local_f8);
      _objc_storeStrong(&local_190,0);
      local_e4 = 0;
    }
    else {
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_running_026aca70);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = local_b8,
         (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_transportRetryCount_026acbd8),
         1 < IVar1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_pauseWithReason__026acaf0,_kWCRFriendRelationPauseNetwork);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                   &cf__eNQ__NA__hKm_f_PzT__ONS_MR_YS);
        local_e4 = 1;
      }
      else {
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_transportRetryCount_026acbd8);
        IVar1 = local_b8;
        IVar3 = local_b8;
        local_110 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_transportRetryCount_026acbd8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_setTransportRetryCount__026acb18,IVar3 + 1);
        dVar11 = *(double *)(&DAT_0232c3b8 + local_110 * 8);
        puVar7 = PTR_WCRefineFriendRelationStore_026cebd0;
        local_120 = dVar11;
        local_118 = dVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
        local_128 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar11 + local_120,puVar4,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_networkRetryAt);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                   &cf_networkRetryDelay);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_updatedAt);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_128);
        puVar4 = PTR_WCRefineHelper_026ce000;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf__eNQ__A___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_initWeak(auStack_130,local_b8);
        IVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_requestToken_026acb48);
        local_188 = PTR___NSConcreteStackBlock_02578660;
        local_180 = 0xc2000000;
        local_17c = 0;
        local_178 = FUN_00f7ad34;
        local_170 = &DAT_0257c708;
        local_138 = IVar1;
        _objc_copyWeak(auStack_160,auStack_130);
        uVar9 = local_d8;
        local_158 = local_138;
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = uVar9;
        uVar9 = 0;
        _dispatch_block_create(0,&local_188);
        local_150[0] = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setGapBlock__026acb90,uVar9);
        dVar10 = _dispatch_time(0,(long)(local_120 * 1000000000.0));
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar10,puVar4,local_150[0]);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_e4 = 1;
        _objc_storeStrong(local_150);
        _objc_storeStrong(&local_168,0);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_130);
        _objc_storeStrong(&local_128,0);
      }
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

