// verifyHiddenUser:request:attempt: @0x44e80

/* Function Stack Size: 0x28 bytes */

void WCMFeedController::verifyHiddenUser_request_attempt_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  dispatch_time_t dVar12;
  double local_498;
  ulong local_3b8;
  ulong local_3b0;
  long local_300;
  long local_2e0;
  undefined8 local_2a0;
  uint local_284;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 auStack_250 [8];
  unsigned_long_long local_248;
  undefined1 auStack_240 [8];
  double local_238;
  double local_230;
  undefined4 local_224;
  double local_220;
  undefined8 local_218;
  byte local_209;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  byte local_1ad;
  byte local_1ac;
  byte local_1ab;
  byte local_1aa;
  byte local_1a9;
  long local_1a8;
  byte local_199;
  long local_198;
  undefined8 local_190;
  undefined4 local_188;
  byte local_181;
  undefined8 local_180;
  byte local_171;
  undefined8 local_170;
  unsigned_long_long local_168;
  long local_160;
  undefined8 local_158;
  SEL local_150;
  ID local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined8 local_130;
  undefined8 local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [128];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_158 = 0;
  local_150 = param_2;
  local_148 = param_1;
  _objc_storeStrong(&local_158,param_3);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_4);
  local_168 = param_5;
  _objc_msgSend_permissionRequests(local_148,local_2a0);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar5,local_2a0,local_158);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  local_171 = 0;
  local_181 = 0;
  local_284 = 1;
  if (lVar6 == local_160) {
    _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_account);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = uVar7;
    _objc_msgSend_account(local_148,local_2a0);
    local_180 = _objc_retainAutoreleasedReturnValue();
    local_181 = 1;
    local_284 = _objc_msgSend_isEqual_(uVar7,local_2a0);
    local_284 = local_284 ^ 1;
  }
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_170);
  }
  (*(code *)PTR__objc_release_00110458)(lVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((local_284 & 1) != 0) {
    local_188 = 1;
    goto LAB_00045d48;
  }
  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_controller);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_contact);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  local_199 = 0;
  local_2e0 = lVar6;
  if (lVar6 == 0) {
    _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_2a0);
    local_198 = _objc_retainAutoreleasedReturnValue();
    local_2e0 = local_198;
  }
  local_30 = local_2e0;
  local_199 = lVar6 == 0;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_30,1);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar5,&cf_getIsWCBlackSwitchOn_);
  local_190 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar7);
  if ((local_199 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_198);
  }
  (*(code *)PTR__objc_release_00110458)(lVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar5 = local_190;
  uVar7 = _objc_opt_class(&_OBJC_CLASS___NSNumber);
  uVar8 = _objc_opt_isKindOfClass(uVar5,uVar7);
  if ((uVar8 & 1) == 0) {
    _objc_msgSend_facade(local_148,local_2a0);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    local_1a9 = 0;
    local_300 = lVar6;
    if (lVar6 == 0) {
      _Service(&cf_WCFacade);
      local_1a8 = _objc_retainAutoreleasedReturnValue();
      local_300 = local_1a8;
    }
    local_40 = local_158;
    local_38 = &cf_5;
    local_1a9 = lVar6 == 0;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_40,2);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _Call(local_300,&cf_isUserInGroup_GroupID_);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_190;
    local_190 = uVar9;
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    if ((local_1a9 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_1a8);
    }
    (*(code *)PTR__objc_release_00110458)(lVar6);
  }
  uVar5 = local_190;
  uVar7 = _objc_opt_class(&_OBJC_CLASS___NSNumber);
  local_1aa = _objc_opt_isKindOfClass(uVar5,uVar7);
  local_1aa = local_1aa & 1;
  local_1ab = _objc_msgSend_boolValue(local_190,local_2a0);
  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_hidden);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  bVar3 = _objc_msgSend_boolValue(uVar5,local_2a0);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  local_80 = &cf_attempt;
  local_1ac = bVar3;
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2a0,local_168);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_known;
  local_60 = uVar5;
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1aa & 1);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_70 = &cf_actual;
  local_58 = uVar7;
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_desired;
  local_50 = uVar9;
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ac & 1);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar10;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_2a0,&local_60,&local_80,4);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  _Trace(&cf_privacy_native_verify);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((local_1aa & 1) == 0) {
LAB_00045a34:
    if (local_168 < 6) {
      local_224 = 4;
      local_230 = (double)(ulong)(1L << (local_168 & 0x3f)) * 0.25;
      local_498 = local_230;
      if (4.0 < local_230) {
        local_498 = 4.0;
      }
      local_238 = local_498;
      local_220 = local_498;
      _objc_initWeak(auStack_240,local_148);
      dVar12 = _dispatch_time(0,(long)(local_220 * 1000000000.0));
      puVar1 = PTR___dispatch_main_q_00110528;
      _objc_retainAutoreleaseReturnValue();
      uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_280 = PTR___NSConcreteStackBlock_001104f0;
      local_278 = 0xc2000000;
      local_274 = 0;
      local_270 = ___54__WCMFeedController_verifyHiddenUser_request_attempt___block_invoke;
      local_268 = &___block_descriptor_64_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_250,auStack_240);
      local_260 = (*(code *)PTR__objc_retain_00110460)(local_158);
      local_258 = (*(code *)PTR__objc_retain_00110460)(local_160);
      local_248 = local_168;
      _dispatch_after(dVar12,uVar5,&local_280);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_storeStrong(&local_258);
      _objc_storeStrong(&local_260,0);
      _objc_destroyWeak(auStack_250);
      _objc_destroyWeak(auStack_240);
      local_188 = 0;
    }
    else {
      _objc_msgSend_permissionRequests(local_168 - 6,local_148,local_2a0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_removeObjectForKey_(uVar5,local_2a0,local_158);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_140 = &cf_hidden;
      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ac & 1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_138 = &cf_queryAvailable;
      local_130 = uVar5;
      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1aa & 1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      local_128 = uVar7;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_2a0,&local_130,&local_140,2);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _Trace(&cf_privacy_hide_unconfirmed);
      (*(code *)PTR__objc_release_00110458)(uVar9);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_status_(local_148,local_2a0,&cf__O_gnxgSWCgPfezT);
      local_188 = 1;
    }
  }
  else {
    _objc_msgSend_hiddenUsers(local_148,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_containsObject_(uVar5,local_2a0,local_158);
    bVar2 = uVar4 != (local_1ab & 1);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    local_1ad = bVar2;
    if ((local_1ab & 1) == 0) {
      _objc_msgSend_hiddenUsers(local_148,local_2a0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_removeObject_(uVar5,local_2a0,local_158);
      (*(code *)PTR__objc_release_00110458)(uVar5);
    }
    else {
      _objc_msgSend_hiddenUsers(local_148,local_2a0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_2a0,local_158);
      (*(code *)PTR__objc_release_00110458)(uVar5);
    }
    _memset(auStack_1f8,0,0x40);
    _objc_msgSend_cachedRows(local_148,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_allKeys(uVar5,local_2a0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar5);
    local_3b0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar7,local_2a0,auStack_1f8,auStack_100,0x10);
    if (local_3b0 != 0) {
      lVar6 = *local_1e8;
      local_3b8 = 0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,uVar7);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + local_3b8 * 8);
          _objc_msgSend_cachedRows(local_148,local_2a0);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar5,local_2a0,local_1b8);
          local_200 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_msgSend_objectForKeyedSubscript_(local_200,local_2a0,&cf_username);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar8 = _objc_msgSend_isEqual_(uVar5,local_2a0,local_158);
          local_209 = 0;
          bVar2 = false;
          if ((uVar8 & 1) != 0) {
            _objc_msgSend_objectForKeyedSubscript_(local_200,local_2a0,&cf_hidden);
            local_208 = _objc_retainAutoreleasedReturnValue();
            local_209 = 1;
            uVar4 = _objc_msgSend_boolValue(local_208,local_2a0);
            bVar2 = uVar4 != (local_1ab & 1);
          }
          if ((local_209 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_208);
          }
          (*(code *)PTR__objc_release_00110458)(uVar5);
          if (bVar2) {
            local_218 = _objc_msgSend_mutableCopy(local_200,local_2a0);
            _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(local_218,local_2a0,uVar5,&cf_hidden);
            (*(code *)PTR__objc_release_00110458)(uVar5);
            uVar5 = local_218;
            _objc_msgSend_cachedRows(local_148,local_2a0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(uVar9,local_2a0,uVar5,local_1b8);
            (*(code *)PTR__objc_release_00110458)(uVar9);
            local_1ad = 1;
            _objc_storeStrong(&local_218,0);
          }
          _objc_storeStrong(&local_200,0);
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar7,local_2a0,auStack_1f8,auStack_100,0x10);
        local_3b8 = 0;
      } while (local_3b0 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar7);
    if ((local_1ad & 1) != 0) {
      _objc_msgSend_reloadFeed(local_148,local_2a0);
    }
    if ((local_1ab & 1) != (local_1ac & 1)) goto LAB_00045a34;
    _objc_msgSend_permissionRequests(0,local_148,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeObjectForKey_(uVar5,local_2a0,local_158);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    local_120 = &cf_hidden;
    _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_118 = &cf_attempt;
    local_110 = uVar5;
    _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2a0,local_168);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    local_108 = uVar7;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_2a0,&local_110,&local_120,2);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _Trace(&cf_privacy_hide_confirmed);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    local_188 = 1;
  }
  _objc_storeStrong(&local_190,0);
LAB_00045d48:
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

