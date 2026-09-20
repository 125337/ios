// FUN_016bc808 @ 016bc808

void FUN_016bc808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_28;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar4;
    local_38 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_016aa360();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_016ac0a4();
    uVar4 = local_28;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar4;
    }
    else {
      uVar3 = local_28;
      FUN_016becbc();
      uVar4 = local_28;
      if ((uVar3 & 1) == 0) {
        FUN_016bf088(local_28,&cf_lS,&cf_share_filled,
                     PTR_s_WCRefine_onLongPressVoiceForward_026a99d0);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar4;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar4;
      }
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

