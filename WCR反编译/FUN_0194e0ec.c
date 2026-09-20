// FUN_0194e0ec @ 0194e0ec

void FUN_0194e0ec(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_deleteGroupId__026a10a0,
             *(undefined8 *)(param_1 + 0x20));
  pcVar1 = &cf__RdR_h_NOYu;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_Rd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

