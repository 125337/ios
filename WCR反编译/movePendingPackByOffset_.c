// movePendingPackByOffset: @ 01b72630

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::movePendingPackByOffset_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPackRel_026a3a88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_movePackRel_byOffset__026bfb10,param_1,
             local_28);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
  }
  if ((long)local_28 < 0) {
    pcVar1 = &cf__MRy;
    if (((ulong)puVar2 & 1) == 0) {
      pcVar1 = &cf____f__;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  else {
    pcVar1 = &cf__Ty;
    if (((ulong)puVar2 & 1) == 0) {
      pcVar1 = &cf____f;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

