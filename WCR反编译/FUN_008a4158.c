// FUN_008a4158 @ 008a4158

void FUN_008a4158(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_008a4394(local_18,PTR_s_controlCenter_026a9798);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_18;
    local_30 = uVar3;
    FUN_008a4488(local_18,uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = local_18;
      FUN_008a4608(local_18,local_30);
      if ((uVar3 & 1) == 0) {
        local_28 = 1;
      }
      else {
        uVar3 = local_30;
        FUN_008a47c0(local_30,PTR_s_hideOriginButton_026a2198,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onOriginImageCheck__026a97b0)
          ;
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOriginImageCheck__026a97b0,0);
          }
          local_28 = 0;
        }
        else {
          local_28 = 1;
        }
      }
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

