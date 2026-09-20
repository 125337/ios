// FUN_0025ba14 @ 0025ba14

void FUN_0025ba14(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveGroupIdToEnd__026a1090,
             *(undefined8 *)(param_1 + 0x20));
  pcVar1 = &cf__n__;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_elyR;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

