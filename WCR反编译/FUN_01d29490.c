// FUN_01d29490 @ 01d29490

void FUN_01d29490(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined1 local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateVersionLabelWithNewVersion_026c4368);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showRemoteUpdateAlertIfNeeded_026c4370);
  _objc_storeStrong(&local_28,0);
  return;
}

