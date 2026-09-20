// hideFloatingCaptureButton @ 01d834d0

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::hideFloatingCaptureButton(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineSearchSettingsViewController_026cefb8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchSettingsViewController_026cefb8,
             PTR_s_getGlobalFloatingButton_026c4c40);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,
               PTR_s_setGlobalFloatingButton__026c4c30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchSettingsViewController_026cefb8,
             PTR_s_setCurrentCapturingKey__026c4c20,0);
  _objc_storeStrong(&local_28,0);
  return;
}

