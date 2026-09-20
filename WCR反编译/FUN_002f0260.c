// FUN_002f0260 @ 002f0260

void FUN_002f0260(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_6;
  local_28 = param_5;
  _objc_storeStrong(&local_38,param_7);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotEnabled_026a1ed8);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_gestureScreenshotTripleTapEnable_026a1f48),
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
        dStack_58 = param_2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        dStack_68 = dStack_58;
        local_70 = local_60;
        uVar4 = uVar3;
        FUN_002f6170();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar4 & 1) == 0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if ((local_60 < param_3 / 5.0) || ((param_3 * 4.0) / 5.0 < local_60)) {
            local_48 = 1;
          }
          else if (dStack_58 <= param_4 / 4.0) {
            FUN_002ef120();
            local_48 = 0;
          }
          else {
            local_48 = 1;
          }
        }
        else {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,dStack_58);
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
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

