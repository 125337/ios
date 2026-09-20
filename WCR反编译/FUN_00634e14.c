// FUN_00634e14 @ 00634e14

void FUN_00634e14(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cba10)(param_1,param_2,param_3 & 1);
  FUN_0063a16c();
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_30 != 0) {
      uVar1 = local_18;
      FUN_00646f3c();
      if ((uVar1 & 1) == 0) {
        FUN_00636798(local_18,local_30,&cf_home_viewWillDisappear_before_hide,0);
        FUN_006471d4(local_30);
        FUN_00636798(local_18,local_30,&cf_home_viewWillDisappear_after_hide,0);
      }
      else {
        FUN_00636798(local_18,local_30,&cf_home_viewWillDisappear_keep_minitask,1);
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

