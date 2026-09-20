// FUN_002f0ea0 @ 002f0ea0

void FUN_002f0ea0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotEnabled_026a1ed8);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_gestureScreenshotTwoFingerDouble_026a1f50),
       ((ulong)puVar2 & 1) == 0)) {
      local_48 = 1;
    }
    else {
      uVar3 = local_28;
      FUN_002f59b4();
      lVar1 = local_38;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_locationInView__026ca798);
        local_60 = param_1;
        uStack_58 = param_2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uStack_58;
        local_70 = local_60;
        uVar4 = uVar3;
        FUN_002f64b8(local_60,uStack_58);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar4 & 1) == 0) {
          FUN_002ef120();
          local_48 = 0;
        }
        else {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,uStack_58);
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_48 = 1;
          _objc_storeStrong(&local_78,0);
        }
      }
      else {
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar1 != 4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    }
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

