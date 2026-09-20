// FUN_008a77ac @ 008a77ac

void FUN_008a77ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
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
    FUN_008a7974();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    if (((uVar3 == 0) ||
        (FUN_008a47c0(uVar3,PTR_s_canShowLivePhotoBtn_026a98c0,0), (uVar3 & 1) == 0)) ||
       (uVar3 = local_30, FUN_008a47c0(local_30,PTR_s_isViewApprear_026a98b0,0), (uVar3 & 1) == 0))
    {
      local_28 = 1;
    }
    else {
      FUN_008a6738(local_30);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

