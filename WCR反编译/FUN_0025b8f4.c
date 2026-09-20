// FUN_0025b8f4 @ 0025b8f4

void FUN_0025b8f4(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveGroupId_byDelta__026a1088,
             *(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
  pcVar1 = &cf__Ny;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar1 = &cf_elyR;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

