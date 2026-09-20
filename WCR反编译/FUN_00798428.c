// FUN_00798428 @ 00798428

void FUN_00798428(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined *local_c0;
  ulong local_98;
  double local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  double local_58;
  undefined4 local_50;
  undefined *local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_3;
  local_28 = param_2;
  (*DAT_028ccb08)(param_2,param_3);
  local_31 = (byte)param_2;
  FUN_007a53b0();
  FUN_007a57b8(local_28,local_31 & 1);
  if ((local_31 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mainFrameCornerEnabled_026a1ff0),
       ((ulong)puVar1 & 1) == 0)) {
      local_50 = 1;
    }
    else {
      _objc_storeWeak(&DAT_028cca90,local_28);
      FUN_007a5a88(local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_globalCornerPinButtonV2_026a80f0);
      local_58 = param_1;
      if (param_1 < 0.0) {
        local_58 = 0.0;
      }
      if (1.0 < local_58) {
        local_58 = 1.0;
      }
      local_69 = 0;
      local_79 = 0;
      local_c0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tpModeCornerEnabled_026a0230);
      if (((ulong)local_c0 & 1) == 0) {
        FUN_007991a4();
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_c0;
      }
      else {
        FUN_00799150();
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_c0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c0;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,local_60,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar1;
      FUN_007993a0(local_28,puVar1);
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_globalCornerRadius_026a2040);
      local_90 = (double)(long)puVar1;
      if (local_90 <= 0.0) {
        local_90 = 20.0;
      }
      if (40.0 < local_90) {
        local_90 = 40.0;
      }
      FUN_0079ace8(local_28);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = local_90;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_0079ab34(uVar2,uVar4,1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_bannerBtn_026a80f8);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bannerBtn_026a80f8);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar2;
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_alpha_026ca4d8);
          FUN_00798f28(dVar5,0x3ff0000000000000);
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_98,PTR_s_setAlpha__026ca860);
          }
          uVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          dVar5 = local_90;
          FUN_0079ace8(local_98);
          uVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          FUN_0079ab34(dVar5,uVar2,uVar4,1);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_98;
          puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          FUN_007993a0(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

