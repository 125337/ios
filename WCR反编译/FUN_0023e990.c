// FUN_0023e990 @ 0023e990

byte FUN_0023e990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,
             PTR_s_shouldHangupIncomingCallForUsern_026a0cd8,local_30);
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,
             PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_30);
  if ((((ulong)puVar1 & 1) == 0) && (((ulong)puVar2 & 1) == 0)) {
    uVar3 = local_20;
    (*DAT_028c92f0)(local_20,local_28,local_30);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

