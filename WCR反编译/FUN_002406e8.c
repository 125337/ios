// FUN_002406e8 @ 002406e8

void FUN_002406e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long local_78;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  lVar1 = local_18;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,
             PTR_s_shouldHangupIncomingCallForUsern_026a0cd8,local_78);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,
               PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_38);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_00240bc0(local_30,local_18,local_20,local_28);
    }
  }
  else {
    FUN_002408f0(local_30,local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

