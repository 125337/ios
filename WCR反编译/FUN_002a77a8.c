// FUN_002a77a8 @ 002a77a8

void FUN_002a77a8(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_58;
  ulong local_48;
  ulong local_40 [3];
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c96c8)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_002b7bc4();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar2;
    if (uVar2 == 0) {
      local_48 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = local_a0;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    FUN_002da738(local_40[0],&cf_MMTabBarBase_viewDidDisappear);
    _objc_storeStrong(local_40,0);
  }
  return;
}

