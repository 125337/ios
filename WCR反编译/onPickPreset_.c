// onPickPreset: @ 01bfc4a8

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsTailPickerViewController::onPickPreset_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  uint local_40;
  byte local_39;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_indexFromSender__026b9af0,local_28);
  local_39 = 0;
  bVar1 = true;
  local_30 = IVar2;
  if (-1 < (long)IVar2) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)IVar3 <= (long)IVar2;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (!bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_applyAppID_name__026c0c00,IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = (uint)bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

