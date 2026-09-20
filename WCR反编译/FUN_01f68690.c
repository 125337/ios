// FUN_01f68690 @ 01f68690

byte FUN_01f68690(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceKeepKeyboardEnabled_026bd520);
  if ((((ulong)puVar1 & 1) == 0) || ((DAT_028e48e0 & 1) == 0)) {
    uVar2 = local_28;
    (**(code **)(param_1 + 0x20))(local_28,PTR_s_resignFirstResponder_0269ea18);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

