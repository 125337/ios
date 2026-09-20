// FUN_002cff20 @ 002cff20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002cff20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_348;
  double local_228;
  undefined *local_1c0;
  undefined *local_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  double local_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_88;
  double local_80;
  double local_78;
  ulong local_60;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_6);
  local_58 = (undefined *)0x0;
  local_50 = param_5;
  _objc_storeStrong(&local_58,param_7);
  uVar2 = local_48;
  FUN_002c8edc();
  _objc_retainAutoreleasedReturnValue();
  local_80 = 22.0;
  uStack_a8 = uStack_38;
  local_b0 = local_40;
  uStack_98 = uStack_28;
  local_a0 = local_30;
  dVar6 = local_40;
  local_60 = uVar2;
  _CGRectGetHeight(local_40,uStack_38,local_30,uStack_28);
  local_88 = dVar6 * DAT_02323f80;
  local_228 = local_88;
  if (local_88 <= local_80) {
    local_228 = local_80;
  }
  local_b8 = local_228;
  local_78 = local_228;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_c0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
  uStack_f8 = uStack_38;
  local_100 = local_40;
  uStack_e8 = uStack_28;
  local_f0 = local_30;
  dVar6 = local_40;
  uVar7 = uStack_38;
  uVar11 = local_30;
  uVar12 = uStack_28;
  _CGRectInset();
  local_120 = dVar6;
  uStack_118 = uVar7;
  local_110 = uVar11;
  uStack_108 = uVar12;
  local_e0 = dVar6;
  uStack_d8 = uVar7;
  local_d0 = uVar11;
  uStack_c8 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(dVar6,uVar7,uVar11,uVar12,local_60,PTR_s_setFrame__026ca960)
  ;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setClipsToBounds__026ca8c8,0);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uStack_128 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  local_130 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uStack_128;
  local_140 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,uStack_128);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_setHidden__026ca970,local_c0 == (undefined *)0x0);
  uVar7 = 0;
  if (local_c0 != (undefined *)0x0) {
    uVar7 = 0x3ff0000000000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_60,PTR_s_setAlpha__026ca860);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
  pcVar5 = &cf_updateWithContentBounds_cornerRadius_color_animationStyle_;
  _NSSelectorFromString();
  uVar2 = local_60;
  local_148 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar5);
  dVar6 = local_78;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_60,PTR_s_setAlpha__026ca860);
  }
  else {
    uStack_188 = uStack_38;
    local_190 = local_40;
    uStack_178 = uStack_28;
    local_180 = local_30;
    dVar8 = local_40;
    _CGRectGetWidth(local_40,uStack_38,local_30,uStack_28);
    uStack_1a8 = uStack_38;
    local_1b0 = local_40;
    uStack_198 = uStack_28;
    local_1a0 = local_30;
    dVar9 = local_40;
    _CGRectGetHeight(local_40,uStack_38,local_30,uStack_28);
    dVar10 = dVar6;
    FUN_002adf88();
    bVar1 = local_58 == (undefined *)0x0;
    local_168 = dVar6;
    dStack_160 = dVar10;
    local_158 = dVar8;
    dStack_150 = dVar9;
    if (bVar1) {
      local_348 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = local_348;
    }
    else {
      local_348 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = local_348;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_1c0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,dStack_160,local_158,dStack_150,local_50,local_60,local_148,local_1b8,
               local_c0);
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  return;
}

