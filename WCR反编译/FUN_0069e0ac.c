// FUN_0069e0ac @ 0069e0ac

byte FUN_0069e0ac(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  byte local_50;
  byte local_4c;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_40 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_40 == (cfstringStruct *)0x0;
  local_20 = local_40;
  if (bVar1) {
    local_40 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,&cf_NewMainFrameViewController);
  if (((((ulong)pcVar2 & 1) == 0) &&
      (pcVar2 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineSearchSettingsViewController),
      ((ulong)pcVar2 & 1) == 0)) &&
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_isEqualToString__0269ccc8,&cf_FTSHomeViewController),
     ((ulong)pcVar2 & 1) == 0)) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_FTS);
    local_4c = 0;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Search);
      local_50 = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Home);
        local_50 = (byte)pcVar2;
      }
      local_4c = local_50;
    }
    local_11 = local_4c & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

