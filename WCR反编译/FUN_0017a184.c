// FUN_0017a184 @ 0017a184

void FUN_0017a184(uint param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  cfstringStruct *local_1c0;
  cfstringStruct *local_188;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8 [2];
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined1 local_b1;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  byte local_89;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70 [3];
  undefined *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  uint local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_48 = 0;
  local_3c = param_1;
  _objc_storeStrong(&local_48);
  if (local_3c == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
    local_4c = 1;
  }
  else {
    local_28 = &DAT_028c88e8;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257a8d0);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    uVar7 = NEON_ucvtf((ulong)local_3c);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = &cf___;
      local_4c = 1;
    }
    else {
      FUN_0017c27c();
      _objc_retainAutoreleasedReturnValue();
      local_70[0] = puVar2;
      FUN_0017c420();
      _objc_retainAutoreleasedReturnValue();
      local_80 = (undefined *)0x0;
      local_78 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = &cf___;
      local_89 = 0;
      local_98 = local_80;
      local_a0 = &cf___;
      FUN_0017c42c(local_70[0],&local_98,&local_a0,&local_89);
      _objc_storeStrong(&local_80,local_98);
      _objc_storeStrong(&local_88,local_a0);
      puVar3 = PTR_WCRefineAuthNameHelper_026ce2e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_quoteAuthNameTokenForDateFormat__0269f9c8
                 ,local_80);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_80;
      local_80 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_a8 = (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_b1 = 0;
      local_c0 = local_a8;
      local_c8 = &cf___;
      FUN_0017c42c(local_78,&local_c0,&local_c8,&local_b1);
      _objc_storeStrong(&local_a8,local_c0);
      _objc_storeStrong(&local_b0,local_c8);
      pcVar1 = DAT_028c88d8;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(pcVar1);
      puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c88d8,PTR_s_setTimeZone__0269f9d8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((DAT_028c88e0 == (undefined *)0x0) ||
         (puVar2 = DAT_028c88e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (DAT_028c88e0,PTR_s_isEqualToString__0269ccc8,local_80), ((ulong)puVar2 & 1) == 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c88d8,PTR_s_setDateFormat__0269d1c8,local_80);
        puVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
        puVar2 = DAT_028c88e0;
        DAT_028c88e0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      pcVar4 = DAT_028c88d8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c88d8,PTR_s_stringFromDate__0269d1d8,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_188 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_188 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8[0] = local_188;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_length_0269cca0);
      if ((pcVar4 == (cfstringStruct *)0x0) &&
         (puVar2 = DAT_028c88e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (DAT_028c88e0,PTR_s_isEqualToString__0269ccc8,local_a8), ((ulong)puVar2 & 1) == 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c88d8,PTR_s_setDateFormat__0269d1c8,local_a8);
        puVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_copy_0269d150);
        puVar2 = DAT_028c88e0;
        DAT_028c88e0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar4 = DAT_028c88d8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c88d8,PTR_s_stringFromDate__0269d1d8,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1c0 = &cf___;
        }
        _objc_storeStrong(local_d8,local_1c0);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if ((((local_89 & 1) != 0) &&
            (pcVar4 = local_88,
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
            pcVar4 == (cfstringStruct *)0x0)) &&
           (pcVar4 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0)
           , pcVar4 != (cfstringStruct *)0x0)) {
          _objc_storeStrong(pcVar4,&local_88,local_b0);
        }
      }
      pcVar4 = local_d8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar4;
      if ((local_89 & 1) != 0) {
        uVar5 = (ulong)local_3c;
        FUN_0017c6c8();
        if (0 < (long)uVar5) {
          pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf____ld__);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_e0;
          local_e0 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      pcVar4 = (cfstringStruct *)PTR_WCRefineAuthNameHelper_026ce2e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_replaceAuthNameTokenInText_userN_0269f9e0
                 ,local_e0,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_38 = pcVar4;
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(local_d8,0);
      _objc_sync_exit(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(local_70,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

