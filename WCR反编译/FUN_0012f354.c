// FUN_0012f354 @ 0012f354

void FUN_0012f354(uint param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_30;
  undefined *local_28;
  uint local_1c;
  cfstringStruct *local_18;
  
  uVar4 = NEON_ucvtf((ulong)param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_1c = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_30 != (cfstringStruct *)0x0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__O_);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_30;
        _WCRefineDateFormatLooksLikePattern();
        local_18 = local_30;
        if (((ulong)pcVar2 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          pcVar2 = local_30;
          _WCRefineFormatDateWithChatTimeRules(local_30,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_<STATUS_PLACEHOLDER>;
      }
      goto LAB_0012f5a0;
    }
  }
  pcVar2 = &cf_HH_mm_ss;
  _WCRefineFormatDateWithChatTimeRules(0,&cf_HH_mm_ss,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
LAB_0012f5a0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

