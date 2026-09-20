// FUN_0025bdc0 @ 0025bdc0

void FUN_0025bdc0(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_clearMembersOfGroupId__026a1098,
             *(undefined8 *)(param_1 + 0x20));
  pcVar1 = &cf__nzz;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_nzz1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

