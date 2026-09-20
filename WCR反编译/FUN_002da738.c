// FUN_002da738 @ 002da738

byte FUN_002da738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_4c;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_4c = 1;
  if (local_20 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_4c & 1) == 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar3 = local_20;
      FUN_002d47d8();
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
      }
      else {
        FUN_002da398(local_20,0,local_28);
        FUN_002dab68(local_20,local_28);
        local_11 = 1;
      }
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

