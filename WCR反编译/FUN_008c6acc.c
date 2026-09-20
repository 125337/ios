// FUN_008c6acc @ 008c6acc

void FUN_008c6acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  _WCRInputBoxCustomPanIsRecognizing();
  if (((uVar1 & 1) == 0) &&
     ((((DAT_028ce049 & 1) != 0 || ((DAT_028ce04a & 1) != 0)) ||
      (puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678,
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isVoiceRecordHoldActive_026a34a0)
      , ((ulong)puVar3 & 1) != 0)))) {
    FUN_008c9838(local_28);
  }
  (*DAT_028ce0b0)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

