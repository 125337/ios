// normalizedTask: @ 014b40a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineScheduledTask::normalizedTask_
          (WCRefineScheduledTask *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  double in_d0;
  double local_318;
  undefined1 *local_2e0;
  undefined1 *local_2c0;
  undefined1 *local_2a0;
  undefined1 *local_280;
  undefined1 *local_260;
  undefined1 *local_240;
  undefined1 *local_210;
  undefined1 *local_1b0;
  undefined4 local_174;
  undefined1 *local_120;
  double local_f8;
  undefined1 *local_e8;
  undefined1 *local_d8;
  undefined1 *local_c8;
  undefined1 *local_b8;
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 *local_80;
  bool local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  bool local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined *local_48;
  undefined1 *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined1 *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_120 = *(undefined1 **)PTR____NSDictionary0___02578288;
  }
  else {
    local_120 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_120;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_40;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (puVar4 == (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_50;
    local_50 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_id);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_name);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_59 = ((ulong)puVar5 & 1) == 0;
  if (local_59) {
    local_174 = 1;
  }
  else {
    local_58 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_174 = SUB84(puVar5,0);
  }
  local_59 = !local_59;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInt__0269d810,local_174);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_59) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b56f0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_targets);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_71 = ((ulong)puVar5 & 1) == 0;
  if (local_71) {
    local_1b0 = (undefined1 *)0x0;
  }
  else {
    local_70 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_71 = !local_71;
  if (local_71) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_68 = local_1b0;
  puVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_isEqualToString__0269ccc8,&cf_wcr_auto_clear_chat_records);
  if (((ulong)puVar4 & 1) == 0) {
    if (((long)local_1b0 < 0) || (1 < (long)local_1b0)) {
      local_68 = (undefined1 *)0x0;
    }
  }
  else {
    local_68 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_contentMode);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_textContent);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b56f0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_repositoryCodes);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scheduleMode);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (((ulong)puVar5 & 1) == 0) {
    local_210 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    local_80 = local_210;
  }
  else {
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scheduleMode);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((long)local_80 < 0) || (5 < (long)local_80)) {
    local_80 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_80);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_scheduleMode);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_dayOfMonth);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_240 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    local_98 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_dayOfMonth);
    _objc_retainAutoreleasedReturnValue();
    local_240 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_240,1,0x1f);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_240);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_dayOfMonth);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_weekday);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_260 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    local_a8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_weekday);
    _objc_retainAutoreleasedReturnValue();
    local_260 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_260,1,7);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_260);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_weekday);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_hour);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_280 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
  }
  else {
    local_b8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_hour)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_280 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_280,0,0x17,9);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_280);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_hour);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_minute)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_2a0 = (undefined1 *)0x0;
  }
  else {
    local_c8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_minute);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_2a0,0,0x3b);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_2a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_minute);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalHours);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_2c0 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    local_d8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalHours);
    _objc_retainAutoreleasedReturnValue();
    local_2c0 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_2c0,1,0x17);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_2c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_intervalHours);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalMinutes);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_2e0 = (undefined1 *)((long)&MACH_HEADER.reserved + 2);
  }
  else {
    local_e8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalMinutes);
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  FUN_014b5a00(local_2e0,1,0x3b,0x1e);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,local_2e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_intervalMinutes);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_onceDateText);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastFiredAt);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (((ulong)puVar5 & 1) == 0) {
    local_318 = 0.0;
    local_f8 = local_318;
  }
  else {
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastFiredAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_f8 = in_d0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_lastFiredAt);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

