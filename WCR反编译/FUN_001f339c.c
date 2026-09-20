// FUN_001f339c @ 001f339c

void FUN_001f339c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001f3300();
  if (((uVar1 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar4 == 0) {
      local_28 = 1;
    }
    else {
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)();
      uVar3 = local_30;
      FUN_001f362c();
      uVar6 = param_1;
      FUN_001f3728();
      uVar5 = uVar4;
      FUN_001f37c4();
      FUN_001f38a4();
      _objc_retainAutoreleasedReturnValue();
      FUN_001ebf20(param_1,uVar6,uVar3,0,uVar4 & 0xffffffff);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_storeStrong(&local_30,0);
      local_28 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

