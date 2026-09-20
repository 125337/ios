// clearSkippedUpdateVersionIfNeeded @ 01d2c0f0

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::clearSkippedUpdateVersionIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_updateAlertLocalDedupeKey_026c43a0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_skippedUpdateVersion_026c43a8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_shownUpdateVersion_026c43b0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSkippedUpdateVersion__026c43b8,0);
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShownUpdateVersion__026c43c0,0);
    }
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((IVar2 != 0) &&
       (IVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_30),
       (IVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSkippedUpdateVersion__026c43b8,0);
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((IVar2 != 0) &&
       (IVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_30),
       (IVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShownUpdateVersion__026c43c0,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

