// FUN_0023db0c @ 0023db0c

byte FUN_0023db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_30;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,
               PTR_s_sessionUserNameFromWrap_sessionH_026a0cc0,local_38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  uVar3 = local_38;
  FUN_00240240(local_38,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_58[0] = uVar3;
  FUN_00240100(local_40,0,uVar3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028c92c0)(local_20,local_28,local_30,local_38);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

