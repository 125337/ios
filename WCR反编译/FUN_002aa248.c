// FUN_002aa248 @ 002aa248

void FUN_002aa248(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong local_70;
  ulong local_58;
  ulong local_48;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9780)(param_1,param_2,param_3 & 1);
  DAT_028c9839 = 0;
  FUN_002d524c();
  if ((param_1 & 1) != 0) {
    FUN_002b64a4();
    _objc_retainAutoreleasedReturnValue();
    local_70 = param_1;
    if (param_1 == 0) {
      local_48 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_70;
    if (param_1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(param_1);
    FUN_002dab68(local_30,&cf_WCTimeLineViewController_viewWillDisappear_covered);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

