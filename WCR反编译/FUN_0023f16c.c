// FUN_0023f16c @ 0023f16c

void FUN_0023f16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_f0;
  long local_d0;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  long local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_3c = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_58 = 0;
  local_49 = param_6;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  lVar1 = local_38;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = local_48;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68;
    local_68 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  lVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_d0);
  if (((ulong)puVar3 & 1) == 0) {
    (*DAT_028c9308)(local_28,local_30,local_38,local_3c,local_48,local_49 & 1,local_58,local_60);
    puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
    lVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = local_68;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_shouldHangupIncomingCallForUsern_026a0cd8,local_f0);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_002408f0(DAT_02323da8,local_68,&cf_cx_incoming,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,
               PTR_s_hideIncomingCallUIFromHintView_u_026a0cf0,0,local_68);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

