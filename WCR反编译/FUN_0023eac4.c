// FUN_0023eac4 @ 0023eac4

void FUN_0023eac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5
                 )

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_98;
  long local_70;
  long local_38;
  byte local_2a;
  byte local_29;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  local_2a = param_5;
  local_29 = param_4;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_shouldHangupIncomingCallForUsern_026a0cd8,local_70);
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  if (((ulong)puVar2 & 1) == 0) {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_98);
    if (((ulong)puVar3 & 1) == 0) {
      (*DAT_028c92f8)(local_18,local_20,local_28,local_29 & 1,local_2a & 1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineDoNotDisturbSupport_026ce118,
                 PTR_s_hideIncomingCallUIFromHintView_u_026a0cf0,0,local_38);
    }
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineDoNotDisturbSupport_026ce118,
                 PTR_s_hangupIncomingCallAndReplyIfNeed_026a0cf8,local_38);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

