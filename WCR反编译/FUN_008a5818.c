// FUN_008a5818 @ 008a5818

void FUN_008a5818(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38;
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
    FUN_008a4394(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    FUN_008a4394(uVar3,PTR_s_currentMessage_026a9830);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    FUN_008a5a84();
    if (((uVar3 & 1) == 0) || (uVar3 = local_38, FUN_008a5ba8(), (uVar3 & 1) == 0)) {
      local_28 = 1;
    }
    else {
      uVar3 = local_38;
      FUN_008a5d44();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onExpand_026a9838);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onExpand_026a9838);
        }
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

