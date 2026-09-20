// FUN_007833a8 @ 007833a8

byte FUN_007833a8(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  byte local_1d0;
  uint local_1c4;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_5;
  local_30 = param_4;
  _objc_storeStrong(&local_40,param_6);
  uVar4 = local_40;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrefine_swipeGesture_026a7fb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar4 == uVar1) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      uVar1 = local_30;
      FUN_0077b5c0();
      uVar4 = local_40;
      if ((uVar1 & 1) == 0) {
        local_21 = 0;
        local_50 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_velocityInView__026cabd0,local_30);
        puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        dVar5 = param_3;
        FUN_0077bb2c();
        dVar6 = dVar5;
        FUN_0077bd00(local_58,local_30);
        uVar4 = local_30;
        FUN_0077b6f4(param_1,param_2);
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar1 = uVar4;
        FUN_0077beac(dVar6,param_3,param_3 / 6.0,dVar5,uVar4,puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_1c4 = 0;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_30;
          FUN_0077bf90(local_30,local_58,&cf_base_shouldBegin);
          local_1c4 = (uint)uVar1;
        }
        local_1d0 = 0;
        if ((local_1c4 & 1) != 0) {
          FUN_0077c2bc(param_1,param_2);
          local_1d0 = (byte)uVar4;
        }
        local_21 = local_1d0 & 1;
        local_50 = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  else {
    uVar4 = local_30;
    (*DAT_028cca00)(local_30,local_38,local_40);
    local_21 = (byte)uVar4 & 1;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

