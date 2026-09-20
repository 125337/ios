// revertSelfBuildTypeSelectionIfDenied: @ 010d8d2c

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::revertSelfBuildTypeSelectionIfDenied_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedSegmentIndex_0269e998);
    if (uVar2 == 1) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selfBuildTypeAllowed_026ae7f0);
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSelectedSegmentIndex__0269e9e0,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_f_g);
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

