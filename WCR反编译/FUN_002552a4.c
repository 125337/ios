// FUN_002552a4 @ 002552a4

void FUN_002552a4(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveMd5List_toGroupId__026a0f40,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  pcVar1 = &cf__feR_;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_R_1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

