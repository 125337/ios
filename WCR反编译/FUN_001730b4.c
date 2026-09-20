// FUN_001730b4 @ 001730b4

void FUN_001730b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_18;
  FUN_00174a60();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  if (lVar1 == 0) {
    FUN_00174748(local_18,0,&cf_elSmo_Q_);
  }
  else {
    _objc_setAssociatedObject(local_18,DAT_026df948,lVar1,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestoreConfirmDialog_0269f8d0);
  }
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

