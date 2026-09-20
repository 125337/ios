// getCurrentUserWxid @ 00faa520

/* Function Stack Size: 0x10 bytes */

ID __thiscall WCRefineHelper::getCurrentUserWxid(WCRefineHelper *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  double in_d0;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  byte local_31;
  double local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _CFAbsoluteTimeGetCurrent();
  local_30 = in_d0;
  _os_unfair_lock_lock(&DAT_028e2f20);
  pcVar1 = DAT_028e2f38;
  local_31 = (DAT_028e2f30 & 1) != 0 && local_30 - DAT_028e2f28 < 1.0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = pcVar1;
  _os_unfair_lock_unlock(&DAT_028e2f20);
  if ((local_31 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_resolveCurrentUserWxidUncach_026acf38);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _os_unfair_lock_lock();
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    pcVar1 = DAT_028e2f38;
    DAT_028e2f38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    DAT_028e2f28 = local_30;
    DAT_028e2f30 = 1;
    _os_unfair_lock_unlock(&DAT_028e2f20);
    pcVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    if (local_40 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    else {
      local_70 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

