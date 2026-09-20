// recordChatSinkHistoryWithCurrentSettingsCustomName: @ 020204f8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::recordChatSinkHistoryWithCurrentSettingsCustomName_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_330;
  undefined *local_310;
  ulong local_2a8;
  ulong local_2a0;
  undefined *local_268;
  byte local_259;
  undefined *local_258;
  byte local_249;
  undefined *local_248;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  ulong local_200;
  undefined4 local_1f4;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined *local_188;
  undefined1 *local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  undefined *local_150;
  SEL local_148;
  ulong local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = (undefined *)0x0;
  local_148 = param_2;
  local_140 = param_1;
  _objc_storeStrong(&local_150,param_3);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_repeatChatRoomSink_0269e820);
  FUN_0201f9c8();
  uVar2 = local_140;
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_repeatPrivateChatSink_0269e828);
  FUN_0201f9c8();
  uVar1 = local_140;
  local_160 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_repeatChatSinkPageRule_0269e840);
  uVar2 = local_140;
  local_168 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_repeatChatSinkSelectedSessions_0269e838);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_02021020();
  _objc_retainAutoreleasedReturnValue();
  local_170 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_repeatChatSinkHistoryItems_026b7b90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_178 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_188 = (undefined *)0x0;
  local_180 = puVar3;
  _memset(auStack_1d0,0,0x40);
  uVar1 = local_178;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
  if (local_2a0 != 0) {
    lVar11 = *local_1c0;
    local_2a8 = 0;
    do {
      do {
        if (*local_1c0 - lVar11 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar11,uVar1);
        }
        uVar12 = *(ulong *)(local_1c8 + local_2a8 * 8);
        local_190 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatRoomSink);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_0201f9c8();
        (*(code *)PTR__objc_release_02578630)(uVar12);
        uVar12 = local_190;
        local_1d8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_privateChatSink);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_0201f9c8();
        (*(code *)PTR__objc_release_02578630)(uVar12);
        uVar12 = local_190;
        local_1e0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_pageRule);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar12);
        uVar12 = local_190;
        local_1e8 = (ulong)(uVar2 == 1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_selectedSessions);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        FUN_02021020();
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar12);
        if ((((local_1d8 == local_158) && (local_1e0 == local_160)) && (local_1e8 == local_168)) &&
           (uVar2 = local_1f0, FUN_020213cc(0,local_1f0,local_170), (uVar2 & 1) != 0)) {
          _objc_storeStrong(&local_188,local_190);
          local_1f4 = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addObject__0269d180,local_190);
          local_1f4 = 0;
        }
        _objc_storeStrong(&local_1f0,0);
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
      local_2a8 = 0;
    } while (local_2a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_158;
  FUN_02021544(local_158,local_160,local_168,local_170);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_150;
  local_200 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  local_211 = 0;
  local_221 = 0;
  local_231 = 0;
  if (puVar3 == (undefined *)0x0) {
    local_310 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
    _objc_retainAutoreleasedReturnValue();
    local_221 = 1;
    local_220 = local_310;
    FUN_020216e0();
    _objc_retainAutoreleasedReturnValue();
    local_231 = 1;
    local_230 = local_310;
  }
  else {
    local_310 = local_150;
    FUN_020216e0(puVar3,local_150,local_200);
    _objc_retainAutoreleasedReturnValue();
    local_211 = 1;
    local_210 = local_310;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_208 = local_310;
  if ((local_231 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  if ((local_221 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_220);
  }
  if ((local_211 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  puVar3 = local_188;
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  local_249 = 0;
  local_259 = 0;
  local_330 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_330 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    local_249 = 1;
    local_248 = local_330;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_258 = local_330;
  }
  local_259 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = local_330;
  if ((local_259 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_258);
  }
  if ((local_249 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_248);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_118 = &cf_id;
  local_e0 = local_240;
  local_110 = &cf_name;
  local_d8 = local_208;
  local_108 = &cf_chatRoomSink;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_158);
  _objc_retainAutoreleasedReturnValue();
  local_100 = &cf_privateChatSink;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_160);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = &cf_pageRule;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_168);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f0 = &cf_selectedSessions;
  local_b8 = local_170;
  local_e8 = &cf_updatedAt;
  puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_c0 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e0,&local_118,7);
  _objc_retainAutoreleasedReturnValue();
  local_268 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_insertObject_atIndex__0269eac0,local_268,0);
  puVar9 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
  puVar10 = local_180;
  if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < puVar9) {
    puVar9 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
    local_138 = puVar9 + -0x1e;
    local_130 = 0x1e;
    local_128 = 0x1e;
    local_120 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar10,PTR_s_removeObjectsInRange__0269dad0,0x1e,local_138);
  }
  puVar10 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setRepeatChatSinkHistoryItems__026ca300);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  _objc_storeStrong(&local_268);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

