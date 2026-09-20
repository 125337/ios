// FUN_00692a38 @ 00692a38

void FUN_00692a38(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_00692e90();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_00693174();
    if ((uVar1 & 1) == 0) {
      local_1c = 1;
    }
    else {
      FUN_00693578(local_28);
      uVar1 = local_18;
      FUN_00693da8(local_18,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_1c = 1;
      }
      else {
        uVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_0068c480();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        FUN_0068cf24(local_48,2);
        uVar1 = local_48;
        FUN_0068e36c();
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar1;
        if (uVar1 != 0) {
          FUN_0068d2e0(uVar1);
        }
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_0068b784();
        _objc_retainAutoreleasedReturnValue();
        FUN_0067f32c();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_50 != 0) {
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          FUN_0068b784();
          _objc_retainAutoreleasedReturnValue();
          FUN_0067f32c();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        local_1c = 0;
      }
      _objc_storeStrong(local_40,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

