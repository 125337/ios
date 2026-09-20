// WCRefine_officialTopSearchSettingsChanged: @ 004cc3f0

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_officialTopSearchSettingsChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_setupMenuBarSearchEntryConfig;
  _NSSelectorFromString();
  IVar2 = local_18;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,local_30);
  }
  FUN_004ca9dc();
  if ((IVar2 & 1) == 0) {
    FUN_004caafc();
    if ((IVar2 & 1) != 0) {
      IVar2 = local_18;
      FUN_004cab6c();
      if ((IVar2 & 1) != 0) {
        FUN_004cabc8(local_18,0);
        local_34 = 1;
        goto LAB_004cc560;
      }
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_mainFrameTableView_026a4070);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    if (IVar2 != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_WCRefine_checkAndUpdateMenuBarIt_026a4098);
      if ((IVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefine_checkAndUpdateMenuBarIt_026a4098,local_40);
      }
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  else {
    FUN_004ca9f8(local_18,0);
    local_34 = 1;
  }
LAB_004cc560:
  _objc_storeStrong(&local_28,0);
  return;
}

