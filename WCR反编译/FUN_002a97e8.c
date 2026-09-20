// FUN_002a97e8 @ 002a97e8

double FUN_002a97e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined *local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  
  local_38 = param_6;
  local_30 = param_5;
  (*DAT_028c9760)(param_5,param_6);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarEnabled_0269e4b8);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarShowInMomentsEnabl_026a1c00)
     , uVar2 = local_30, ((ulong)puVar1 & 1) == 0)) {
    local_28 = local_40;
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetHeight();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_68 = param_1;
    if (param_1 <= 0.0) {
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_68 = param_1;
    }
    if (local_40 < local_68) {
      local_28 = local_68;
    }
    else {
      local_28 = local_40;
    }
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48,0);
  return local_28;
}

