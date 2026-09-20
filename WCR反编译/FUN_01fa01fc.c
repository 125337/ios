// FUN_01fa01fc @ 01fa01fc

byte FUN_01fa01fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voicePlayBypassEnabled_026bd510);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_28;
    (**(code **)(param_1 + 0x20))(local_28,*(undefined8 *)(param_1 + 0x28),local_30,local_38);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

