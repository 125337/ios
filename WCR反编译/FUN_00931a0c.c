// FUN_00931a0c @ 00931a0c

/* WARNING: Type propagation algorithm not settling */

void FUN_00931a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_5f8;
  ulong local_5f0;
  ulong local_5a8;
  ulong local_5a0;
  ulong local_468;
  ulong local_460;
  undefined *local_458;
  undefined *local_450;
  undefined1 auStack_448 [8];
  long local_440;
  long *local_438;
  undefined8 local_408;
  ulong local_400;
  undefined1 auStack_3f8 [8];
  long local_3f0;
  long *local_3e8;
  undefined8 local_3b8;
  long local_3b0;
  undefined *local_3a8;
  byte local_399;
  undefined *local_398;
  byte local_389;
  undefined *local_388;
  undefined *local_380;
  undefined *local_378;
  undefined *local_370;
  ulong local_368;
  undefined4 local_360;
  ulong local_350;
  ulong local_348 [4];
  undefined1 auStack_328 [512];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_348[3] = 0;
  _objc_storeStrong(local_348 + 3,param_1);
  local_348[2] = 0;
  _objc_storeStrong(local_348 + 2,param_2);
  local_348[1] = 0;
  _objc_storeStrong(local_348 + 1,param_3);
  local_348[0] = 0;
  _objc_storeStrong(local_348,param_4);
  local_350 = 0;
  _objc_storeStrong(&local_350,param_5);
  uVar2 = local_348[0];
  FUN_00932c58();
  if ((uVar2 & 1) == 0) {
    local_360 = 1;
  }
  else {
    FUN_0092e120();
    _WCRefineCrashReporterLogDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    local_368 = uVar2;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    local_370 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_en_US_POSIX);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_setTimeZone__0269f9d8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_370,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss_SSS);
    puVar3 = local_370;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_378 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_380 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_______wcr________)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendFormat__0269d148,&cf_time___);
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendFormat__0269d148,&cf_name___);
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendFormat__0269d148,&cf_reason___);
    puVar3 = local_380;
    local_389 = 0;
    local_399 = 0;
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
      _objc_retainAutoreleasedReturnValue();
      local_389 = 1;
      local_388 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_399 = 1;
      local_398 = puVar4;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_thread___);
    if ((local_399 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_398);
    }
    if ((local_389 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_388);
    }
    puVar4 = local_380;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_380,PTR_s_appendString__0269ccb0,&cf_wcr_in_stack_yes);
    puVar3 = local_380;
    FUN_009330cc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf___);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0092f0a4();
    _objc_retainAutoreleasedReturnValue();
    local_3a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendString__0269ccb0,&cf_breadcrumbs_)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendString__0269ccb0,local_3a8);
      puVar3 = local_3a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_hasSuffix__0269d018,&cf_newline_s_);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendString__0269ccb0,&cf_newline_s_)
        ;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendString__0269ccb0,&cf_backtrace_);
    local_3b0 = 0;
    _memset(auStack_3f8,0,0x40);
    uVar2 = local_348[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_5a0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,auStack_a8,0x10);
    if (local_5a0 != 0) {
      lVar5 = *local_3e8;
      local_5a8 = 0;
      do {
        do {
          if (*local_3e8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_3e8 - lVar5,uVar2);
          }
          local_3b8 = *(undefined8 *)(local_3f0 + local_5a8 * 8);
          local_3b0 = local_3b0 + 1;
          (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendFormat__0269d148,&cf__2lu__);
          local_5a8 = local_5a8 + 1;
        } while (local_5a8 < local_5a0);
        local_5a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,auStack_a8,0x10
                  );
        local_5a8 = 0;
      } while (local_5a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_350;
    (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_count_0269cfe0);
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_380,PTR_s_appendString__0269ccb0,&cf_ResolvedBacktrace_);
      local_400 = 0;
      _memset(auStack_448,0,0x40);
      uVar2 = local_350;
      (*(code *)PTR__objc_retain_02578638)();
      local_5f0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_128,0x10)
      ;
      if (local_5f0 != 0) {
        lVar5 = *local_438;
        local_5f8 = 0;
        do {
          do {
            if (*local_438 - lVar5 != 0) {
              _objc_enumerationMutation(*local_438 - lVar5,uVar2);
            }
            uVar1 = local_400;
            uVar6 = *(undefined8 *)(local_440 + local_5f8 * 8);
            local_408 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_unsignedIntegerValue_026cabb8);
            FUN_00933218(auStack_328,0x200,uVar1 & 0xffffffff,uVar6);
            (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendFormat__0269d148,&cf__s);
            local_400 = local_400 + 1;
            if (0x27 < local_400) {
              local_360 = 7;
              goto LAB_00932634;
            }
            local_5f8 = local_5f8 + 1;
          } while (local_5f8 < local_5f0);
          local_5f0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_128,
                     0x10);
          local_5f8 = 0;
        } while (local_5f0 != 0);
      }
      local_360 = 0;
LAB_00932634:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_appendString__0269ccb0,&cf_N);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_380,PTR_s_appendString__0269ccb0,&cf_________________________________________);
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    local_450 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_en_US_POSIX);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_450,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_450,PTR_s_setTimeZone__0269f9d8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_450,PTR_s_setDateFormat__0269d1c8,&cf_yyMMddHHmmss);
    puVar3 = local_450;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_458 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar2 = local_368;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_crash____log
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_460 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_380,PTR_s_writeToFile_atomically_encoding__026a33a8,local_460,0,4,0);
    uVar2 = local_368;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_368,PTR_s_stringByAppendingPathComponent__026cab30,&cf_latest_log);
    _objc_retainAutoreleasedReturnValue();
    local_468 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_380,PTR_s_writeToFile_atomically_encoding__026a33a8,uVar2,0,4,0);
    _objc_storeStrong(&local_468);
    _objc_storeStrong(&local_460,0);
    _objc_storeStrong(&local_458,0);
    _objc_storeStrong(&local_450,0);
    _objc_storeStrong(&local_3a8,0);
    _objc_storeStrong(&local_380,0);
    _objc_storeStrong(&local_378,0);
    _objc_storeStrong(&local_370,0);
    _objc_storeStrong(&local_368,0);
    local_360 = 0;
  }
  _objc_storeStrong(&local_350);
  _objc_storeStrong(local_348,0);
  _objc_storeStrong(local_348 + 1,0);
  _objc_storeStrong(local_348 + 2,0);
  _objc_storeStrong(local_348 + 3,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

