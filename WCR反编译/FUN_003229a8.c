// FUN_003229a8 @ 003229a8

void FUN_003229a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double local_170;
  undefined8 local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  uVar1 = *(ulong *)(param_5 + 0x20);
  local_40 = param_5;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  FUN_00323184(uVar1,param_6);
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    uStack_a8 = uStack_58;
    local_b0 = local_60;
    uStack_98 = uStack_48;
    local_a0 = local_50;
    dVar6 = local_60;
    FUN_0031dc24(local_60,uStack_58,local_50,uStack_48,*(undefined8 *)(param_5 + 0x28));
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = local_50;
    uVar9 = uStack_48;
    local_88 = dVar6;
    FUN_00314638();
    pcVar2 = &cf_WCRefineGlobalCorner_SectionCard_Fill_;
    local_d0 = uVar7;
    uStack_c8 = uVar8;
    local_c0 = uVar3;
    uStack_b8 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefineGlobalCorner_SectionCard_Fill_,PTR_s_stringByAppendingFormat__026a2088,
               &cf__lu);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    local_d8 = pcVar2;
    FUN_00323718(uVar3,pcVar2,1);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uStack_58;
    local_110 = local_60;
    uStack_f8 = uStack_48;
    local_100 = local_50;
    uStack_128 = uStack_58;
    local_130 = local_60;
    uStack_118 = uStack_48;
    local_120 = local_50;
    local_e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,uStack_58,local_50,uStack_48,uVar3,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,0);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setFillColor__026ca948,uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setStrokeColor__026caa78,0);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_e0,PTR_s_setLineWidth__026ca9b0);
    uStack_148 = uStack_c8;
    local_150 = local_d0;
    uStack_138 = uStack_b8;
    local_140 = local_c0;
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,uStack_c8,local_c0,uStack_b8,local_88,
               PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setPath__026caa08,puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar2 = &cf_WCRefineGlobalCorner_SectionCard_Border_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefineGlobalCorner_SectionCard_Border_,PTR_s_stringByAppendingFormat__026a2088,
               &cf__lu);
    _objc_retainAutoreleasedReturnValue();
    local_158 = pcVar2;
    if (0.0 < *(double *)(param_5 + 0x40)) {
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      FUN_00323718(uVar3,pcVar2,0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = local_88 - *(double *)(param_5 + 0x40) / 2.0;
      if (local_170 < 0.0) {
        local_170 = 0.0;
      }
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,uStack_58,local_50,uStack_48,uVar3,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setHidden__026ca970,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setFillColor__026ca948,puVar5);
      (*(code *)PTR__objc_release_02578630)();
      FUN_003160c4();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setStrokeColor__026caa78,puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x40),local_160,PTR_s_setLineWidth__026ca9b0);
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      uVar3 = local_d0;
      uVar9 = uStack_c8;
      uVar7 = local_c0;
      uVar8 = uStack_b8;
      _CGRectInset();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar9,uVar7,uVar8,local_170,puVar4,
                 PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setPath__026caa08,puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_0031dcd0(*(undefined8 *)(param_5 + 0x40),local_160);
      _objc_storeStrong(&local_160,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x38),PTR_s_addIndex__0269fc98,local_30);
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  return;
}

