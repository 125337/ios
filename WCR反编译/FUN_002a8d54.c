// FUN_002a8d54 @ 002a8d54

void FUN_002a8d54(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_58;
  ulong local_40;
  
  uVar1 = param_1;
  FUN_002b7bc4();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  if (uVar1 == 0) {
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_40;
  }
  FUN_002bad18();
  if (uVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_58 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      FUN_002d411c(param_1,&cf_MMTabBarController_onTabBarHiddenChanged_beforeOrig);
    }
    else {
      uVar1 = param_1;
      FUN_002b7bc4();
      _objc_retainAutoreleasedReturnValue();
      FUN_002bf5c8();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    (*DAT_028c9748)(param_1,param_2,param_3 & 1);
    if ((param_3 & 1) == 0) {
      uVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b7184();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((param_3 & 1) == 0) {
      FUN_002d77c4(param_1,0,&cf_MMTabBarController_onTabBarHiddenChanged);
    }
  }
  else {
    (*DAT_028c9748)(param_1,param_2,param_3 & 1);
  }
  return;
}

