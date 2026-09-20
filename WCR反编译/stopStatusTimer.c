// stopStatusTimer @ 01955384

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::stopStatusTimer(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_statusTimer),PTR_s_invalidate_026ca758);
  _objc_storeStrong(param_1 + (long)_statusTimer,0);
  return;
}

