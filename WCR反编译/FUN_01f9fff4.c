// FUN_01f9fff4 @ 01f9fff4

byte FUN_01f9fff4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_40;
  long local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_1;
  local_2c = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voicePlayBypassEnabled_026bd510);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_28;
    (**(code **)(param_1 + 0x20))(local_28,*(undefined8 *)(param_1 + 0x28),local_2c);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

