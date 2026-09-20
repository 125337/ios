// enterRegionShapePrefsIfNeeded @ 0166ea68

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::enterRegionShapePrefsIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropUsingFullScreenPrefs_026b24e0);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistCropShapePreferences_026b24e8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropUsingFullScreenPrefs__026b24f0,0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadCropShapePreferences_026b1b50);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshShapeAttrBarUI_026b25c8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshCropChrome_026b1e98);
  }
  return;
}

