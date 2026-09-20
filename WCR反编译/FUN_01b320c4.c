// FUN_01b320c4 @ 01b320c4

void FUN_01b320c4(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setLocatingHistoryRecord__026beeb8,0);
    if ((local_19 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__MO1Y_zT);
      _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,0);
    }
    else {
      if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
        lVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shouldHideDuplicateRecords_026bea60);
        lVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_removeHistoryRecordsForRecord_re_026beba8,
                   *(undefined8 *)(param_1 + 0x20),(byte)lVar1 & 1);
        if (lVar2 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__MObRFOSSRd1Y_)
          ;
        }
      }
      _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

