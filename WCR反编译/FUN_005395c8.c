// FUN_005395c8 @ 005395c8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005395c8(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)();
  if ((DAT_028cb268 == (cfstringStruct *)0x0) ||
     ((DAT_028cb260 != local_20 &&
      (pcVar2 = DAT_028cb260,
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb260,PTR_s_isEqualToString__0269ccc8,local_20),
      ((ulong)pcVar2 & 1) == 0)))) {
    FUN_00539f64();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_00539cd4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__RT);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__RT,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_38 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
    pcVar2 = DAT_028cb260;
    DAT_028cb260 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = DAT_028cb268;
    DAT_028cb268 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = DAT_028cb268;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_38,0);
  }
  else {
    pcVar2 = DAT_028cb268;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

