// FUN_016aa94c @ 016aa94c

void FUN_016aa94c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_016ac0a4();
  if ((uVar1 & 1) == 0) {
    local_28 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_voiceForwardEnabled_026a9ac8);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setVoiceForwardEnabled__026b2b88,1);
    }
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

