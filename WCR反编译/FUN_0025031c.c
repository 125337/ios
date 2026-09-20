// FUN_0025031c @ 0025031c

void FUN_0025031c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_48;
  long local_40;
  uint local_38;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_setSelectedFilterGroupId__026a1060,
                 local_48);
    }
    local_38 = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

