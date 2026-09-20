// FUN_01f9fe60 @ 01f9fe60

byte FUN_01f9fe60(ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_60;
  undefined4 local_54;
  code *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_38 = 0;
  local_2c = param_3;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar1 = param_1;
  local_48 = param_1;
  FUN_01fa0320();
  if ((uVar1 & 1) == 0) {
    local_50 = *(code **)(param_1 + 0x20);
    uVar3 = local_28;
    (*local_50)(local_28,*(undefined8 *)(param_1 + 0x28),local_2c,local_38,local_40);
    local_11 = (byte)uVar3 & 1;
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_voicePlayBypassEnabled_026bd510);
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = local_28;
      (**(code **)(param_1 + 0x20))
                (local_28,*(undefined8 *)(param_1 + 0x28),local_2c,local_38,local_40);
      local_11 = (byte)uVar3 & 1;
    }
    else {
      local_11 = 1;
    }
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

