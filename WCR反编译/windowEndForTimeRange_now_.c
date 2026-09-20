// windowEndForTimeRange:now: @ 014deb48

/* Function Stack Size: 0x20 bytes */

unsigned_int
WCRefineSessionStatsEngine::windowEndForTimeRange_now_
          (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_5c;
  double local_58;
  unsigned_int local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_58 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,param_3);
  local_5c = 0;
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_5c = (uint)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_5c & 1) == 0) {
    if (1.0 <= param_4) {
      local_14 = (unsigned_int)param_4;
    }
    else {
      local_14 = 0;
    }
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_58 < 1.0) {
      local_58 = param_4;
    }
    local_14 = (unsigned_int)local_58;
  }
  return local_14;
}

