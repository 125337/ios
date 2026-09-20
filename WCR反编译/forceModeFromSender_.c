// forceModeFromSender: @ 01f4c4b4

/* Function Stack Size: 0x18 bytes */

long_long WCRefineVersionController::forceModeFromSender_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  long_long local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedSegmentIndex_0269e998);
  if (((long)lVar1 < 0) || (2 < (long)lVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_applyForceModeAppearanceToContro_026c9108,local_30,0);
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_applyForceModeAppearanceToContro_026c9108,local_30,lVar1);
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

