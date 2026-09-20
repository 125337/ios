// FUN_01f68798 @ 01f68798

void FUN_01f68798(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceKeepKeyboardEnabled_026bd520);
  if ((((ulong)puVar1 & 1) == 0) || ((DAT_028e48e0 & 1) == 0)) {
    (**(code **)(param_1 + 0x20))(local_20,PTR_s_hideToolView__0269f780,local_21 & 1);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return;
}

