// setScheduledTasks: @ 01febeac

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineConfig::setScheduledTasks_(WCRefineConfig *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  SEL SVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  double in_d0;
  double local_458;
  undefined1 *local_410;
  undefined1 *local_3f0;
  undefined1 *local_3d0;
  undefined1 *local_3b0;
  undefined1 *local_390;
  undefined1 *local_370;
  undefined1 *local_350;
  undefined1 *local_2f0;
  undefined4 local_2b4;
  ulong local_240;
  ulong local_238;
  bool local_211;
  undefined1 *local_210;
  double local_208;
  bool local_1f9;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  bool local_1e1;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  bool local_1c9;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  bool local_1b1;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  bool local_199;
  undefined1 *local_198;
  undefined1 *local_190;
  bool local_181;
  undefined1 *local_180;
  undefined1 *local_178;
  bool local_169;
  undefined1 *local_168;
  undefined1 *local_160;
  bool local_151;
  undefined1 *local_150;
  undefined1 *local_148;
  bool local_139;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined1 *local_d8;
  undefined1 *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar5;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_238 != 0) {
    lVar8 = *local_108;
    local_240 = 0;
    do {
      do {
        local_208 = in_d0;
        if (*local_108 - lVar8 != 0) {
          _objc_enumerationMutation(*local_108 - lVar8,uVar1);
          local_208 = in_d0;
        }
        puVar9 = *(undefined1 **)(local_110 + local_240 * 8);
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
        puVar6 = local_d8;
        if (((ulong)puVar9 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = puVar6;
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_120;
          local_128 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar9;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (puVar6 == (undefined1 *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_130;
            local_130 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,local_130,&cf_id);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_name);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_139 = ((ulong)puVar9 & 1) == 0;
          if (local_139) {
            local_2b4 = 1;
          }
          else {
            local_138 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2b4 = SUB84(puVar9,0);
          }
          local_139 = !local_139;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInt__0269d810,local_2b4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_enabled);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (local_139) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_targets);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_151 = ((ulong)puVar9 & 1) == 0;
          if (local_151) {
            local_2f0 = (undefined1 *)0x0;
          }
          else {
            local_150 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
            _objc_retainAutoreleasedReturnValue();
            local_2f0 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_151 = !local_151;
          if (local_151) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_148 = local_2f0;
          if (((long)local_2f0 < 0) || (2 < (long)local_2f0)) {
            local_148 = (undefined1 *)0x0;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_148
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_contentMode);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_textContent);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                     &cf_repositoryCodes);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_scheduleMode);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_169 = ((ulong)puVar9 & 1) == 0;
          if (local_169) {
            local_350 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          else {
            local_168 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_scheduleMode);
            _objc_retainAutoreleasedReturnValue();
            local_350 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_169 = !local_169;
          if (local_169) {
            (*(code *)PTR__objc_release_02578630)(local_168);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_160 = local_350;
          if (((long)local_350 < 0) || (5 < (long)local_350)) {
            local_160 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_160
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_scheduleMode);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_dayOfMonth);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_181 = ((ulong)puVar9 & 1) == 0;
          if (local_181) {
            local_370 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          else {
            local_180 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_dayOfMonth);
            _objc_retainAutoreleasedReturnValue();
            local_370 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_181 = !local_181;
          if (local_181) {
            (*(code *)PTR__objc_release_02578630)(local_180);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_178 = local_370;
          if ((long)local_370 < 1) {
            local_178 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          if (0x1f < (long)local_178) {
            local_178 = (undefined1 *)((long)&MACH_HEADER.reserved + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_178
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_dayOfMonth);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_weekday);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_199 = ((ulong)puVar9 & 1) == 0;
          if (local_199) {
            local_390 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          else {
            local_198 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_weekday);
            _objc_retainAutoreleasedReturnValue();
            local_390 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_199 = !local_199;
          if (local_199) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_190 = local_390;
          if ((long)local_390 < 1) {
            local_190 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          if (7 < (long)local_190) {
            local_190 = (undefined1 *)((long)&MACH_HEADER.cputype + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_190
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_weekday);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_hour);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b1 = ((ulong)puVar9 & 1) == 0;
          if (local_1b1) {
            local_3b0 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
          }
          else {
            local_1b0 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_hour);
            _objc_retainAutoreleasedReturnValue();
            local_3b0 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_1b1 = !local_1b1;
          if (local_1b1) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_1a8 = local_3b0;
          if ((long)local_3b0 < 0) {
            local_1a8 = (undefined1 *)0x0;
          }
          if (0x17 < (long)local_1a8) {
            local_1a8 = (undefined1 *)((long)&MACH_HEADER.sizeofcmds + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1a8
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_hour);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_minute);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1c9 = ((ulong)puVar9 & 1) == 0;
          if (local_1c9) {
            local_3d0 = (undefined1 *)0x0;
          }
          else {
            local_1c8 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_minute);
            _objc_retainAutoreleasedReturnValue();
            local_3d0 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_1c9 = !local_1c9;
          if (local_1c9) {
            (*(code *)PTR__objc_release_02578630)(local_1c8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_1c0 = local_3d0;
          if ((long)local_3d0 < 0) {
            local_1c0 = (undefined1 *)0x0;
          }
          if (0x3b < (long)local_1c0) {
            local_1c0 = (undefined1 *)((long)&segment_command_00000020.vmaddr + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1c0
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_minute);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalHours);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1e1 = ((ulong)puVar9 & 1) == 0;
          if (local_1e1) {
            local_3f0 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          else {
            local_1e0 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalHours);
            _objc_retainAutoreleasedReturnValue();
            local_3f0 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_1e1 = !local_1e1;
          if (local_1e1) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_1d8 = local_3f0;
          if ((long)local_3f0 < 1) {
            local_1d8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          if (0x17 < (long)local_1d8) {
            local_1d8 = (undefined1 *)((long)&MACH_HEADER.sizeofcmds + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1d8
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_intervalHours)
          ;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalMinutes);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1f9 = ((ulong)puVar9 & 1) == 0;
          if (local_1f9) {
            local_410 = (undefined1 *)((long)&MACH_HEADER.reserved + 2);
          }
          else {
            local_1f8 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_intervalMinutes);
            _objc_retainAutoreleasedReturnValue();
            local_410 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_1f9 = !local_1f9;
          if (local_1f9) {
            (*(code *)PTR__objc_release_02578630)(local_1f8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_1f0 = local_410;
          if ((long)local_410 < 1) {
            local_1f0 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          if (0x3b < (long)local_1f0) {
            local_1f0 = (undefined1 *)((long)&segment_command_00000020.vmaddr + 3);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1f0
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                     &cf_intervalMinutes);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_onceDateText);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastFiredAt);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_211 = ((ulong)puVar9 & 1) == 0;
          if (local_211) {
            local_458 = 0.0;
          }
          else {
            local_210 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastFiredAt);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_458 = local_208;
          }
          local_211 = !local_211;
          if (local_211) {
            (*(code *)PTR__objc_release_02578630)(local_210);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_208 = local_458;
          if (local_458 < 0.0) {
            local_208 = 0.0;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_lastFiredAt);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_d0;
          puVar5 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
          bVar3 = segment_command_00000020.segname + 10 <= puVar6;
          puVar6 = puVar6 + -0x32;
          if (bVar3) {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          _objc_storeStrong(puVar6,&local_130);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_120,0);
          if (bVar3) goto LAB_01fed510;
        }
        local_240 = local_240 + 1;
        in_d0 = local_208;
      } while (local_240 < local_238);
      local_238 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_240 = 0;
      in_d0 = local_208;
    } while (local_238 != 0);
  }
LAB_01fed510:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  SVar2 = local_b8;
  IVar4 = local_c8;
  if (puVar6 == (undefined1 *)0x0) {
    FUN_01fd95c0(0,local_c8,local_b8,0);
  }
  else {
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    FUN_01fd95c0(IVar4,SVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01fe8ca8();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

