// msgBannerApplyOfficialPreviewLayoutToBanner:container: @ 01ba20c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineMessageBannerBeautifyViewController::
     msgBannerApplyOfficialPreviewLayoutToBanner_container_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  double in_d0;
  double dVar10;
  double dVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  undefined8 uVar13;
  double in_d2;
  double in_d3;
  double local_368;
  double local_360;
  undefined8 local_208;
  double local_200;
  double local_1d8;
  undefined *local_160;
  double local_158;
  double local_150;
  double local_138;
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  cfstringStruct *local_b0;
  char *local_a8;
  ID local_a0;
  byte local_92;
  byte local_91;
  undefined8 local_88;
  double local_50;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((local_38 == 0) || (local_40 == 0)) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    _CGRectGetWidth(in_d0,in_d1);
    uVar12 = 0x4054000000000000;
    local_50 = in_d0;
    if (in_d0 < 80.0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = uVar12;
      local_50 = in_d2;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (80.0 <= local_50) {
      local_91 = 0;
      local_92 = 0;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_a0 = IVar5;
      if (IVar5 != 0) {
        local_92 = 1;
        FUN_01ba2a98();
        local_91 = (byte)IVar5;
      }
      if ((local_92 & 1) == 0) {
        pcVar6 = "UiUtil";
        _objc_getClass();
        pcVar7 = &cf_isStatusBarLandscape;
        local_a8 = pcVar6;
        _NSSelectorFromString();
        local_b0 = pcVar7;
        if ((local_a8 != (char *)0x0) &&
           (pcVar6 = local_a8,
           (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,pcVar7)
           , ((ulong)pcVar6 & 1) != 0)) {
          pcVar6 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_b0);
          local_91 = (byte)pcVar6;
        }
      }
      if ((local_91 & 1) == 0) {
        local_360 = local_50 - 32.0;
      }
      else {
        local_360 = local_50 * 0.6;
      }
      local_c0 = 0x4054000000000000;
      local_c8 = local_360;
      if (local_360 <= 80.0) {
        local_368 = 80.0;
      }
      else {
        local_368 = local_360;
      }
      local_d0 = local_368;
      local_b8 = local_368;
      _memcpy(auStack_100,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar8 = local_38;
      _memcpy(auStack_130,auStack_100,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_setTransform__026caad0,auStack_130);
      _WCRMsgBannerResetStoredFrames(local_38);
      uVar8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_sizeToFitWidth__026c0210);
      if ((uVar8 & 1) != 0) {
        local_368 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sizeToFitWidth__026c0210);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_158 = local_368;
      local_150 = local_360;
      _CGRectGetWidth(local_368,local_360);
      uVar12 = 0x4054000000000000;
      local_138 = local_368;
      if (local_368 < 80.0) {
        local_138 = local_b8;
      }
      uVar8 = local_38;
      dVar10 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_updateMaxWidth__026c0218);
      if ((uVar8 & 1) != 0) {
        dVar10 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateMaxWidth__026c0218);
      }
      puVar9 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_msgBannerWidth_026a0698);
      bVar1 = false;
      if (0.0 < dVar10) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_msgBannerHeight_026a06a0);
        bVar1 = 0.0 < dVar10;
      }
      dVar11 = dVar10;
      uVar13 = uVar12;
      if (!bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        dVar11 = in_d3;
        uVar13 = 0x404c400000000000;
        if (56.5 < in_d3) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBounds__026ca8a0);
          dVar11 = dVar10;
          uVar13 = uVar12;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      _CGRectGetHeight(dVar11,uVar13);
      uVar12 = 0x4000000000000000;
      local_200 = 12.0;
      local_1d8 = 16.0;
      local_208 = 0x4030000000000000;
      uVar8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTop__026a10f0);
      if ((uVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
        uVar12 = 0x4028000000000000;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTop__026a10f0);
        local_1d8 = local_200;
      }
      uVar8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setCenterX__026a10e0);
      if ((uVar8 & 1) != 0) {
        uVar12 = 0x3fe0000000000000;
        local_1d8 = local_50 * 0.5;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCenterX__026a10e0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      _CGRectGetWidth(local_1d8,uVar12);
      uVar12 = 0x4054000000000000;
      local_138 = local_1d8;
      if ((80.0 <= local_1d8) &&
         (uVar8 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_updateMaxWidth__026c0218),
         (uVar8 & 1) != 0)) {
        local_1d8 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateMaxWidth__026c0218);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layoutIfNeeded_026ca790);
      uVar8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar8 != 0) {
        local_1d8 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAlpha__026ca860);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      _CGRectGetHeight(local_1d8,uVar12);
      if (local_1d8 < 2.0) {
        local_1d8 = 56.0;
      }
      dVar11 = local_1d8 + 12.0 + 16.0;
      dVar10 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar10,local_208,local_50,dVar11,local_40,PTR_s_setFrame__026ca960);
      _objc_storeStrong(&local_160,0);
      local_44 = 0;
    }
    else {
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

