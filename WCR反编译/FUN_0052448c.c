// FUN_0052448c @ 0052448c

void FUN_0052448c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0052a1d0();
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    FUN_0052a7d4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_0052acd4();
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_startPlayingLivePhoto__026a49f0,(uint)puVar3 & 1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

