// FUN_0025b868 @ 0025b868

void FUN_0025b868(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveGroupIdToFront__026a1080,
             *(undefined8 *)(param_1 + 0x20));
  pcVar1 = &cf__n_v;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_elyR;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

