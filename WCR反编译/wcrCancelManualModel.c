// wcrCancelManualModel @ 017dd220

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::wcrCancelManualModel(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setManualModelAlert__026b5408);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingModelProviderID__026b5390,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingModelKind__026b5398,0);
  return;
}

