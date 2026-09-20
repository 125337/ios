// FUN_00528d0c @ 00528d0c

void FUN_00528d0c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint local_e4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined **local_c0;
  undefined4 local_b8;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  undefined **local_38;
  ulong local_30;
  undefined **local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined **)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_81 = 0;
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  local_e4 = 1;
  if (local_38 != (undefined **)0x0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_request_026a1c88);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_request_026a1c88);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e4 = 1;
      if ((uVar1 & 1) != 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e4 = (uint)puVar2 ^ 1;
      }
    }
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  ppuVar3 = local_38;
  if ((local_e4 & 1) == 0) {
    ppuVar4 = &local_e0;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_0052938c;
    local_c8 = &DAT_0257db98;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = ppuVar3;
    _objc_retainBlock();
    local_28 = ppuVar4;
    _objc_storeStrong(&local_c0,0);
  }
  else {
    _objc_retainBlock();
    local_28 = ppuVar3;
  }
  local_b8 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

