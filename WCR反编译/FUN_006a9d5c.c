// FUN_006a9d5c @ 006a9d5c

void FUN_006a9d5c(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double local_1a8;
  double local_198;
  double local_190;
  double local_188;
  ulong local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  double dStack_88;
  double local_78;
  byte local_69;
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_3;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_28;
  FUN_006aaaf4();
  _objc_retainAutoreleasedReturnValue();
  local_58 = 0x3ff0000000000000;
  local_60 = local_38 * DAT_02323c70;
  local_188 = local_60;
  if (local_60 <= 1.0) {
    local_188 = 1.0;
  }
  local_68 = local_188;
  local_50 = local_188;
  uVar1 = local_30;
  local_48 = uVar4;
  FUN_006aaf44();
  local_69 = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    local_190 = 0.5;
  }
  else {
    local_190 = local_50 * 0.5;
  }
  local_78 = local_190;
  uVar5 = 0;
  uVar4 = 0;
  dVar6 = local_38;
  dVar7 = local_38;
  FUN_006a9930();
  local_c0 = uVar4;
  local_b8 = uVar5;
  local_b0 = dVar6;
  local_a8 = dVar7;
  _CGRectInset();
  local_a0 = uVar4;
  uStack_98 = uVar5;
  local_90 = dVar6;
  dStack_88 = dVar7;
  if ((dVar6 < 1.0) || (dVar7 < 1.0)) {
    local_e8 = local_38;
    local_f0 = 0x3ff0000000000000;
    if (1.0 <= local_38) {
      local_198 = local_38;
    }
    else {
      local_198 = 1.0;
    }
    local_f8 = local_198;
    local_100 = local_38;
    local_108 = 0x3ff0000000000000;
    if (1.0 <= local_38) {
      local_1a8 = local_38;
    }
    else {
      local_1a8 = 1.0;
    }
    local_110 = local_1a8;
    uVar5 = 0;
    uVar4 = 0;
    FUN_006a9930();
    local_e0 = uVar4;
    uStack_d8 = uVar5;
    local_d0 = local_198;
    dStack_c8 = local_1a8;
    local_a0 = uVar4;
    uStack_98 = uVar5;
    local_90 = local_198;
    dStack_88 = local_1a8;
  }
  uVar1 = local_30;
  FUN_006aafe8(local_a0,uStack_98,local_90,dStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  uVar4 = 0;
  dVar6 = local_38;
  dVar7 = local_38;
  local_118 = uVar1;
  FUN_006a9930();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,dVar6,dVar7,local_48,PTR_s_setFrame__026ca960);
  uVar1 = local_118;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setPath__026caa08,uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinRound_02578418);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapRound_02578408);
  uVar4 = local_40;
  if ((local_69 & 1) == 0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFillColor__026ca948,uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStrokeColor__026caa78,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_48,PTR_s_setLineWidth__026ca9b0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFillColor__026ca948,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_40;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStrokeColor__026caa78,uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_48,PTR_s_setLineWidth__026ca9b0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

