// openLocalEmoticonLibrary @ 019494a8

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonFunctionViewController::openLocalEmoticonLibrary(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensureRootDirectoryExists__026a3c70);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonLibraryViewController_026ce6c8,
             PTR_s_presentFromHost_sendChatVC__026a3c78,param_1,0);
  return;
}

