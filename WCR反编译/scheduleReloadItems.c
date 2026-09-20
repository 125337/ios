// scheduleReloadItems @ 01b5fa18

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::scheduleReloadItems(ID param_1,SEL param_2)

{
  if ((*(byte *)(param_1 + (long)_suppressReloadForImport) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               param_1,PTR_s_reloadItems_026ae4d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
               PTR_s_reloadItems_026ae4d8,0);
  }
  return;
}

