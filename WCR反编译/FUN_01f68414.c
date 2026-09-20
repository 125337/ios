// FUN_01f68414 @ 01f68414

void FUN_01f68414(long param_1)

{
  undefined *puVar1;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceKeepKeyboardEnabled_026bd520);
  if ((((ulong)puVar1 & 1) == 0) || ((DAT_028e48e0 & 1) == 0)) {
    (**(code **)(param_1 + 0x20))(local_20,PTR_s_hideInputToolView_026c9778);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

