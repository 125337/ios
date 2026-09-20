// handleExternalSettingsChanged @ 01b7839c

/* Function Stack Size: 0x10 bytes */

void WCRefineLongPressMenuViewController::handleExternalSettingsChanged(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_suppressExternalReload_026bfb90);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadItems_026ae4d8);
  }
  return;
}

