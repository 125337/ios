// FUN_0058020c @ 0058020c

void FUN_0058020c(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_480;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined1 *local_440;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3c0;
  double local_388;
  undefined1 *local_380;
  undefined1 *local_378;
  double local_358;
  undefined1 *local_350;
  undefined1 *local_348;
  double local_328;
  undefined1 *local_320;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2c0;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined *local_250;
  undefined1 *local_248;
  long local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  int local_21c;
  undefined1 *local_218;
  int local_20c;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  int local_1c4;
  undefined1 *local_1c0;
  int local_1b4;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  double local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  int local_174;
  undefined1 *local_170;
  int local_164;
  undefined1 *local_160;
  double local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  int local_134;
  undefined1 *local_130;
  int local_124;
  undefined1 *local_120;
  int local_114;
  double local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  int local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  bool local_79;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  double local_58;
  undefined1 *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = (undefined1 *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (undefined1 *)0x0;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_50[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_30;
  local_58 = param_1;
  FUN_005820e8(local_30,&cf_hour,0xffffffffffffffff);
  puVar2 = local_30;
  local_60 = puVar3;
  FUN_005820e8(local_30,&cf_minute,0xffffffffffffffff);
  local_68 = puVar2;
  if (((long)local_60 < 0) || ((long)puVar2 < 0)) {
    local_79 = false;
    bVar1 = local_58 <= 0.0;
    param_1 = local_58;
    if (bVar1) {
      local_2c0 = local_38;
    }
    else {
      local_2c0 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_2c0;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_2c0;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    puVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50[0],PTR_s_components_fromDate__026a44c0,0x60,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_hour_026a44c8);
    puVar5 = local_88;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_minute_026a44d0);
    local_68 = puVar5;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
  }
  local_8c = 0;
  local_9c = 0x17;
  local_a8 = local_60;
  if ((long)local_60 < 0x18) {
    local_2f0 = local_60;
  }
  else {
    local_2f0 = (undefined1 *)((long)&MACH_HEADER.sizeofcmds + 3);
  }
  local_b0 = local_2f0;
  local_98 = local_2f0;
  if ((long)local_2f0 < 1) {
    local_2f8 = (undefined1 *)0x0;
  }
  else {
    local_2f8 = local_2f0;
  }
  local_b8 = local_2f8;
  local_60 = local_2f8;
  local_bc = 0;
  local_cc = 0x3b;
  local_d8 = local_68;
  if ((long)local_68 < 0x3c) {
    local_300 = local_68;
  }
  else {
    local_300 = (undefined1 *)((long)&segment_command_00000020.vmaddr + 3);
  }
  local_e0 = local_300;
  local_c8 = local_300;
  if ((long)local_300 < 1) {
    local_308 = (undefined1 *)0x0;
  }
  else {
    local_308 = local_300;
  }
  local_e8 = local_308;
  local_68 = local_308;
  puVar3 = local_30;
  FUN_00588d98();
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50[0],PTR_s_components_fromDate__026a44c0,0x1c,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHour__026a52f0,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setMinute__026a52f8,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setSecond__026a5308,0);
    puVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_dateFromComponents__026a52c8,local_1a0);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar4;
    if ((puVar4 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_timeIntervalSinceDate__0269cb78,local_38)
       , param_1 <= 1.0)) {
      if (local_1a8 == (undefined1 *)0x0) {
        local_3c0 = local_38;
      }
      else {
        local_3c0 = local_1a8;
      }
      puVar5 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,1,local_3c0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_1a8;
      local_1a8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_114 = 1;
    _objc_storeStrong(&local_1a8);
    _objc_storeStrong(&local_1a0,0);
  }
  else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_164 = 1;
    local_174 = 0x17;
    puVar3 = local_30;
    FUN_005820e8(local_30,&cf_intervalHours,2);
    local_378 = puVar3;
    if ((long)local_174 < (long)puVar3) {
      local_378 = (undefined1 *)(long)local_174;
    }
    local_188 = local_378;
    local_170 = local_378;
    if ((long)local_164 < (long)local_378) {
      local_380 = local_378;
    }
    else {
      local_380 = (undefined1 *)(long)local_164;
    }
    local_190 = local_380;
    local_160 = local_380;
    local_180 = puVar3;
    if (local_58 <= 0.0) {
      local_388 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_timeIntervalSince1970_0269cfc8);
    }
    else {
      local_388 = local_58;
    }
    local_198 = local_388;
    puVar3 = local_38;
    FUN_0058aeac(local_388,(double)(long)local_160 * 3600.0);
    _objc_retainAutoreleasedReturnValue();
    local_114 = 1;
    local_28 = puVar3;
  }
  else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_124 = 1;
    local_134 = 0x3b;
    puVar3 = local_30;
    FUN_005820e8(local_30,&cf_intervalMinutes,0x1e);
    local_348 = puVar3;
    if ((long)local_134 < (long)puVar3) {
      local_348 = (undefined1 *)(long)local_134;
    }
    local_148 = local_348;
    local_130 = local_348;
    if ((long)local_124 < (long)local_348) {
      local_350 = local_348;
    }
    else {
      local_350 = (undefined1 *)(long)local_124;
    }
    local_150 = local_350;
    local_120 = local_350;
    local_140 = puVar3;
    if (local_58 <= 0.0) {
      local_358 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_timeIntervalSince1970_0269cfc8);
    }
    else {
      local_358 = local_58;
    }
    local_158 = local_358;
    puVar3 = local_38;
    FUN_0058aeac(local_358,(double)(long)local_120 * 60.0);
    _objc_retainAutoreleasedReturnValue();
    local_114 = 1;
    local_28 = puVar3;
  }
  else if ((dword *)puVar3 == &MACH_HEADER.cputype) {
    local_1b4 = 1;
    local_1c4 = 7;
    puVar3 = local_30;
    FUN_005820e8(local_30,&cf_weekday,1);
    local_1e8 = local_38;
    local_3f0 = puVar3;
    if ((long)local_1c4 < (long)puVar3) {
      local_3f0 = (undefined1 *)(long)local_1c4;
    }
    local_1d8 = local_3f0;
    local_1c0 = local_3f0;
    if ((long)local_1b4 < (long)local_3f0) {
      local_3f8 = local_3f0;
    }
    else {
      local_3f8 = (undefined1 *)(long)local_1b4;
    }
    local_1e0 = local_3f8;
    local_1b0 = local_3f8;
    local_1d0 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    for (local_1f0 = 0; local_1f0 < 8; local_1f0 = local_1f0 + 1) {
      puVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_components_fromDate__026a44c0,0x1c,local_1e8);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHour__026a52f0,local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_setMinute__026a52f8,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_setSecond__026a5308,0);
      puVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_dateFromComponents__026a52c8,local_1f8);
      _objc_retainAutoreleasedReturnValue();
      local_200 = puVar4;
      if (((puVar4 == (undefined1 *)0x0) || (FUN_0058afac(), puVar4 != local_1b0)) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (local_200,PTR_s_timeIntervalSinceDate__0269cb78,local_38), puVar4 = local_200,
         param_1 <= 1.0)) {
        puVar4 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,1,local_1e8,0);
        _objc_retainAutoreleasedReturnValue();
        local_440 = puVar4;
        if (puVar4 == (undefined1 *)0x0) {
          local_440 = local_1e8;
        }
        _objc_storeStrong(&local_1e8,local_440);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_114 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar4;
        local_114 = 1;
      }
      _objc_storeStrong(&local_200);
      _objc_storeStrong(&local_1f8,0);
      if (local_114 != 0) goto LAB_0058102c;
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4122750000000000,local_38,PTR_s_dateByAddingTimeInterval__0269cd18);
    _objc_retainAutoreleasedReturnValue();
    local_114 = 1;
    local_28 = puVar3;
LAB_0058102c:
    _objc_storeStrong(&local_1e8,0);
  }
  else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
    local_20c = 1;
    local_21c = 0x1f;
    puVar3 = local_30;
    FUN_005820e8(local_30,&cf_dayOfMonth,1);
    local_460 = puVar3;
    if ((long)local_21c < (long)puVar3) {
      local_460 = (undefined1 *)(long)local_21c;
    }
    local_230 = local_460;
    local_218 = local_460;
    if ((long)local_20c < (long)local_460) {
      local_468 = local_460;
    }
    else {
      local_468 = (undefined1 *)(long)local_20c;
    }
    local_238 = local_468;
    local_208 = local_468;
    local_228 = puVar3;
    for (local_240 = 0; local_240 < 0x18; local_240 = local_240 + 1) {
      puVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,8,local_240,local_38,0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_480 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_480 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_248 = local_480;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_50[0];
      puVar3 = PTR_s_rangeOfUnit_inUnit_forDate__026a52d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_rangeOfUnit_inUnit_forDate__026a52d0,0x10,8,local_248);
      local_258 = puVar4;
      local_250 = puVar3;
      if ((long)puVar3 < (long)local_208) {
        local_114 = 8;
      }
      else {
        puVar4 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_components_fromDate__026a44c0,0xc,local_248);
        _objc_retainAutoreleasedReturnValue();
        local_260 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDay__026a52b8,local_208);
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setHour__026a52f0,local_60);
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setMinute__026a52f8,local_68);
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setSecond__026a5308,0);
        puVar4 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_dateFromComponents__026a52c8,local_260);
        _objc_retainAutoreleasedReturnValue();
        local_268 = puVar4;
        if ((puVar4 == (undefined1 *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_timeIntervalSinceDate__0269cb78,local_38), puVar4 = local_268,
           param_1 <= 1.0)) {
          local_114 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar4;
          local_114 = 1;
        }
        _objc_storeStrong(&local_268);
        _objc_storeStrong(&local_260,0);
      }
      _objc_storeStrong(&local_248,0);
      if ((local_114 != 0) && (local_114 != 8)) goto LAB_00581470;
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4143c68000000000,local_38,PTR_s_dateByAddingTimeInterval__0269cd18);
    _objc_retainAutoreleasedReturnValue();
    local_114 = 1;
    local_28 = puVar3;
  }
  else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
    local_f4 = 1;
    puVar3 = local_30;
    FUN_00582d30();
    local_320 = puVar3;
    if ((long)puVar3 <= (long)local_f4) {
      local_320 = (undefined1 *)(long)local_f4;
    }
    local_108 = local_320;
    local_f0 = local_320;
    local_100 = puVar3;
    if (local_58 <= 0.0) {
      local_328 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_timeIntervalSince1970_0269cfc8);
    }
    else {
      local_328 = local_58;
    }
    local_110 = local_328;
    puVar3 = local_38;
    FUN_0058aeac(local_328,(double)(long)local_f0 * 60.0);
    _objc_retainAutoreleasedReturnValue();
    local_114 = 1;
    local_28 = puVar3;
  }
  else {
    local_28 = (undefined1 *)0x0;
    local_114 = 1;
  }
LAB_00581470:
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

