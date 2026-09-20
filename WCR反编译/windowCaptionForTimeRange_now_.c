// windowCaptionForTimeRange:now: @ 014ded00

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsEngine::windowCaptionForTimeRange_now_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  cfstringStruct *local_168;
  cfstringStruct *local_150;
  uint local_12c;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  double local_e8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  uint local_7c;
  uint local_78;
  byte local_71;
  undefined *local_70;
  double local_68;
  undefined1 *local_60;
  double local_58;
  long_long local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_58 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,param_3);
  local_60 = puVar1;
  if ((dword *)puVar1 == &MACH_HEADER.cputype) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf_hQ_g0WU_;
  }
  else {
    local_71 = 0;
    if (local_58 <= 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_e8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      local_e8 = local_58;
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_68 = local_e8;
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,local_40,PTR_s_windowStartForTimeRange_now__026af740,local_60);
    local_78 = (uint)IVar2;
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,local_40,PTR_s_windowEndForTimeRange_now__026af748,local_60);
    local_7c = (uint)IVar2;
    if (local_7c == 0) {
      local_7c = (uint)local_68;
    }
    local_28 = &DAT_028e36a8;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02585fd8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    uVar6 = NEON_ucvtf((ulong)local_78);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = NEON_ucvtf((ulong)local_7c);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_88 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = DAT_028e36a0;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e36a0,PTR_s_stringFromDate__0269d1d8,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_110 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_110;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = DAT_028e36a0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e36a0,PTR_s_stringFromDate__0269d1d8,local_90);
    _objc_retainAutoreleasedReturnValue();
    local_128 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_128 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_128;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_a9 = 0;
    local_12c = 0;
    if (local_60 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_12c = (uint)puVar1;
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    if ((local_12c & 1) == 0) {
      if (local_60 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_clampedSessionStatsCustomHours__026af730,puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if ((pcVar4 == (cfstringStruct *)0x0) ||
           (pcVar4 = local_98,
           (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_a0),
           ((ulong)pcVar4 & 1) == 0)) {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &::cf_format_s_);
          _objc_retainAutoreleasedReturnValue();
          local_38 = pcVar4;
        }
        else {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &::cf_format_s_);
          _objc_retainAutoreleasedReturnValue();
          local_38 = pcVar4;
        }
      }
      else if (local_60 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_Ne_);
        _objc_retainAutoreleasedReturnValue();
        local_38 = pcVar4;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &::cf_format_s_);
        _objc_retainAutoreleasedReturnValue();
        local_38 = pcVar4;
      }
    }
    else {
      pcVar4 = DAT_028e3698;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3698,PTR_s_stringFromDate__0269d1d8,local_88);
      _objc_retainAutoreleasedReturnValue();
      local_150 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_150 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_150;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = DAT_028e3698;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3698,PTR_s_stringFromDate__0269d1d8,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_168 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_168 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_168;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__V_);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar4;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

