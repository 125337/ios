// normalizedRule: @ 010ab294

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::normalizedRule_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_518;
  undefined *local_510;
  undefined *local_4f8;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4c0;
  undefined *local_4b0;
  undefined *local_488;
  undefined *local_468;
  undefined *local_438;
  undefined *local_430;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined4 local_36c;
  undefined *local_338;
  undefined *local_320;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined4 local_2f4;
  undefined *local_2f0;
  undefined4 local_2e4;
  undefined *local_2e0;
  undefined *local_2d8;
  byte local_2c9;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined4 local_2ac;
  undefined *local_2a8;
  undefined4 local_29c;
  undefined *local_298;
  undefined *local_290;
  byte local_281;
  undefined *local_280;
  undefined *local_278;
  byte local_269;
  undefined *local_268;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  undefined *local_248;
  byte local_239;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined *local_188;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = (undefined *)0x0;
  local_138 = param_2;
  local_130 = (undefined *)param_1;
  _objc_storeStrong(&local_140,param_3);
  puVar2 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_320 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_320 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_320;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_148;
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  local_161 = 0;
  local_171 = 0;
  if (puVar2 == (undefined *)0x0) {
    local_338 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = local_338;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_170 = local_338;
  }
  else {
    local_338 = local_158;
  }
  local_171 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_338,&cf_id);
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_name);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_180 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if (((ulong)puVar1 & 1) == 0) {
    local_36c = 1;
  }
  else {
    puVar1 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_boolValue_026ca540);
    local_36c = SUB84(puVar1,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInt__0269d810,local_36c);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_enabled);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  _memset(auStack_1d0,0,0x40);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceGroups);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_3a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
  if (local_3a0 != (undefined *)0x0) {
    lVar3 = *local_1c0;
    local_3a8 = (undefined *)0x0;
    do {
      do {
        if (*local_1c0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar3,puVar1);
        }
        uVar4 = *(ulong *)(local_1c8 + (long)local_3a8 * 8);
        local_190 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_addObject__0269d180,local_190);
        }
        local_3a8 = local_3a8 + 1;
      } while (local_3a8 < local_3a0);
      local_3a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10)
      ;
      local_3a8 = (undefined *)0x0;
    } while (local_3a0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_188;
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_sourceGroups);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_senderUsers);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_targets);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_130;
  local_1d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_allTypeKeys_026ae488);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar1;
  _memset(auStack_228,0,0x40);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_types)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_430 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10);
  if (local_430 != (undefined *)0x0) {
    lVar3 = *local_218;
    local_438 = (undefined *)0x0;
    do {
      do {
        if (*local_218 - lVar3 != 0) {
          _objc_enumerationMutation(*local_218 - lVar3,puVar1);
        }
        local_1e8 = *(undefined8 *)(local_220 + (long)local_438 * 8);
        puVar2 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_containsObject__0269cbb8,local_1e8);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_1e8);
        }
        local_438 = local_438 + 1;
      } while (local_438 < local_430);
      local_430 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10
                );
      local_438 = (undefined *)0x0;
    } while (local_430 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_types);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderMode);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_239 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_468 = (undefined *)0x0;
  }
  else {
    local_468 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderMode);
    _objc_retainAutoreleasedReturnValue();
    local_239 = 1;
    local_238 = local_468;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_239 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_238);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_230 = local_468;
  if (((long)local_468 < 0) || (3 < (long)local_468)) {
    local_230 = (undefined *)0x0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_senderMode);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendMode);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_251 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_488 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    local_488 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendMode);
    _objc_retainAutoreleasedReturnValue();
    local_251 = 1;
    local_250 = local_488;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_251 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_250);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_248 = local_488;
  FUN_010aca54(local_488);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,local_488);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_sendMode);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_format);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_260 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
  local_269 = 0;
  if (puVar2 == (undefined *)0x0) {
    local_4b0 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_defaultFormat_026ca5e8);
    _objc_retainAutoreleasedReturnValue();
    local_268 = local_4b0;
  }
  else {
    local_4b0 = local_260;
  }
  local_269 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_4b0,&cf_format);
  if ((local_269 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_268);
  }
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_withinMinutes);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_281 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_4c0 = (undefined *)((long)&MACH_HEADER.cpusubtype + 2);
  }
  else {
    local_4c0 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_withinMinutes);
    _objc_retainAutoreleasedReturnValue();
    local_281 = 1;
    local_280 = local_4c0;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_281 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_280);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_278 = local_4c0;
  local_298 = local_4c0;
  local_29c = 0;
  if ((long)local_4c0 < 0) {
    local_4d8 = (undefined *)0x0;
  }
  else {
    local_4d8 = local_4c0;
  }
  local_2a8 = local_4d8;
  local_290 = local_4d8;
  local_2ac = 0x2760;
  if ((long)local_4d8 < 0x2760) {
    local_4e0 = local_4d8;
  }
  else {
    local_4e0 = &DAT_00002760;
  }
  local_2b8 = local_4e0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_4e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_withinMinutes);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_delaySeconds);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2c9 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_4f8 = (undefined *)0x0;
  }
  else {
    local_4f8 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_delaySeconds);
    _objc_retainAutoreleasedReturnValue();
    local_2c9 = 1;
    local_2c8 = local_4f8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_2c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_2c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_2c0 = local_4f8;
  local_2e0 = local_4f8;
  local_2e4 = 0;
  if ((long)local_4f8 < 0) {
    local_510 = (undefined *)0x0;
  }
  else {
    local_510 = local_4f8;
  }
  local_2f0 = local_510;
  local_2d8 = local_510;
  local_2f4 = 300;
  if ((long)local_510 < 300) {
    local_518 = local_510;
  }
  else {
    local_518 = (undefined *)((long)&section_00000108.addr + 4);
  }
  local_300 = local_518;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_518);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_delaySeconds);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_dailyStart);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_308 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_dailyEnd);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_310 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_minuteOfDayFromTimeText__026ae5d0,local_308)
  ;
  if (((long)puVar2 < 0) ||
     (puVar2 = local_130,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_130,PTR_s_minuteOfDayFromTimeText__026ae5d0,local_310), (long)puVar2 < 0)) {
    _objc_storeStrong(&local_308);
    _objc_storeStrong(&local_310,&::cf___);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_308,&cf_dailyStart);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_310,&cf_dailyEnd);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_includeKeywords);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_excludeKeywords);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_310);
  _objc_storeStrong(&local_308,0);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

