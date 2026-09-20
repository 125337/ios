// FUN_00154810 @ 00154810

void FUN_00154810(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  double dVar9;
  double local_3c0;
  double local_320;
  double local_308;
  double local_2f0;
  double local_2d8;
  ulong local_258;
  long local_250;
  long lStack_248;
  double local_240;
  double dStack_238;
  long local_230;
  long lStack_228;
  double local_220;
  double dStack_218;
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [48];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  ulong local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  byte local_4d;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  dVar6 = DAT_02323dc8;
  local_28 = 0;
  local_2d8 = DAT_02323dc8;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_40 = puVar1;
    FUN_00152c80();
    local_4d = (byte)uVar2;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgAlphaLight_0269f588);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgAlphaDark_0269f580);
    }
    local_58 = local_2d8;
    if ((local_4d & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgScaleLight_0269f598);
      local_2f0 = local_2d8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgScaleDark_0269f590);
      local_2f0 = local_2d8;
    }
    local_60 = local_2f0;
    if ((local_4d & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgOffsetXLight_0269f5a8);
      local_308 = local_2f0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgOffsetXDark_0269f5a0);
      local_308 = local_2f0;
    }
    local_68 = local_308;
    if ((local_4d & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgOffsetYLight_0269f5b8);
      local_320 = local_308;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgAttachmentBgOffsetYDark_0269f5b0);
      local_320 = local_308;
    }
    local_70 = local_320;
    if (local_58 < 0.0) {
      local_58 = 0.0;
    }
    if (1.0 < local_58) {
      local_58 = 1.0;
    }
    if (local_60 < dVar6) {
      local_60 = dVar6;
    }
    dVar6 = 5.0;
    if (5.0 < local_60) {
      local_60 = 5.0;
    }
    uVar2 = local_28;
    dVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = dVar4;
    dStack_88 = dVar6;
    local_80 = param_3;
    dStack_78 = param_4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_80 <= 1.0) || (dStack_78 <= 1.0)) {
      local_34 = 1;
    }
    else {
      uVar2 = local_28;
      FUN_00155eb4();
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar2;
      if (uVar2 == 0) {
        local_34 = 1;
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_98;
        (*(code *)PTR__objc_release_02578630)();
        if (uVar3 == uVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_sendSubviewToBack__0269f5c0,local_30)
          ;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_insertSubview_atIndex__026ca748,local_30,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_30,PTR_s_setAlpha__026ca860);
        dStack_b8 = dStack_88;
        local_c0 = local_90;
        dStack_a8 = dStack_78;
        local_b0 = local_80;
        dStack_d8 = dStack_88;
        local_e0 = local_90;
        dStack_c8 = dStack_78;
        local_d0 = local_80;
        dVar6 = local_90;
        dVar4 = dStack_88;
        dVar7 = local_80;
        dVar9 = dStack_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
        local_130 = dVar6;
        dStack_128 = dVar4;
        local_120 = dVar7;
        dStack_118 = dVar9;
        local_100 = dVar6;
        dStack_f8 = dVar4;
        local_f0 = dVar7;
        dStack_e8 = dVar9;
        _CGRectGetWidth(dVar6,dVar4,dVar7,dVar9);
        dStack_158 = dStack_f8;
        local_160 = local_100;
        dStack_148 = dStack_e8;
        local_150 = local_f0;
        dVar4 = local_100;
        dVar7 = dStack_f8;
        local_108 = dVar6;
        _CGRectGetHeight(local_100,dStack_f8,local_f0,dStack_e8);
        local_138 = dVar4;
        FUN_001568b8(local_30);
        local_178 = local_108;
        local_180 = local_138;
        if ((0.0 < dVar4) && (0.0 < dVar7)) {
          local_190 = local_108 / dVar4;
          local_198 = local_138 / dVar7;
          local_3c0 = local_190;
          if (local_190 < local_198) {
            local_3c0 = local_198;
          }
          local_1a0 = local_3c0;
          local_188 = local_3c0;
          local_178 = dVar4 * local_3c0;
          local_180 = dVar7 * local_3c0;
        }
        local_1a8 = (double)(long)(local_178 * local_60);
        local_1b0 = (double)(long)(local_180 * local_60);
        local_170 = dVar4;
        local_168 = dVar7;
        _memcpy(auStack_1e0,PTR__CGAffineTransformIdentity_025782d8,0x30);
        uVar2 = local_30;
        _memcpy(auStack_210,auStack_1e0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_210);
        lVar5 = (long)(local_68 + (local_108 - local_1a8) * 0.5);
        lVar8 = (long)((local_138 - local_1b0) * 0.5 - local_70);
        dVar6 = local_1a8;
        dVar4 = local_1b0;
        FUN_0013a194();
        local_250 = lVar5;
        lStack_248 = lVar8;
        local_240 = dVar6;
        dStack_238 = dVar4;
        local_230 = lVar5;
        lStack_228 = lVar8;
        local_220 = dVar6;
        dStack_218 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFrame__026ca960);
        uVar2 = local_30;
        puVar1 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRAttachmentVideoBackgroundView_026ce310,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_30;
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_258 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_bounds_026ca548);
          uVar2 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_playerLayer_0269f290);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,lVar8,dVar6,dVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          FUN_00151f80(local_28);
          _objc_storeStrong(&local_258,0);
        }
        local_34 = 0;
      }
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

