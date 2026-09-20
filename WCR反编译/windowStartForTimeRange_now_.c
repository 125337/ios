// windowStartForTimeRange:now: @ 014de584

/* Function Stack Size: 0x20 bytes */

unsigned_int
WCRefineSessionStatsEngine::windowStartForTimeRange_now_
          (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_128;
  double local_f8;
  uint local_c0;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  double local_80;
  double local_68;
  byte local_59;
  undefined *local_58;
  undefined1 *local_50;
  double local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  unsigned_int local_24;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,param_3);
  if ((dword *)puVar1 == &MACH_HEADER.cputype) {
    local_24 = 0;
  }
  else {
    local_59 = 0;
    local_c0 = 0;
    local_50 = puVar1;
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = (uint)puVar1;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    if ((local_c0 & 1) == 0) {
      if (local_50 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_clampedSessionStatsCustomHours__026af730,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_48 = local_48 - (double)(long)puVar1 * 3600.0;
        if (0.0 <= local_48) {
          local_24 = (unsigned_int)local_48;
        }
        else {
          local_24 = 0;
        }
      }
      else {
        local_89 = 0;
        if (local_48 <= 0.0) {
          puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
          local_f8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        else {
          local_f8 = local_48;
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        local_80 = local_f8;
        puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar1;
        FUN_014dead4();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_b0 = local_a0;
        local_a8 = 0;
        if (local_50 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_a8 = 2;
        }
        else if (local_50 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          local_a8 = 6;
        }
        else if (local_50 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
          local_a8 = 0x1d;
        }
        puVar1 = local_a0;
        (*(code *)PTR__objc_retain_02578638)();
        if (0 < local_a8) {
          FUN_014dead4(local_a8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_128 = local_a0;
          }
          _objc_storeStrong(&local_b0,local_128);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
        if (0.0 <= local_f8) {
          local_24 = (unsigned_int)local_f8;
        }
        else {
          local_24 = 0;
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_68 = param_4;
      if (param_4 < 0.0) {
        local_68 = 0.0;
      }
      local_24 = (unsigned_int)local_68;
    }
  }
  return local_24;
}

