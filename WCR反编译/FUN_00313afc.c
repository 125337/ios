// FUN_00313afc @ 00313afc

void FUN_00313afc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_5d;
  double local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = local_28;
    FUN_0031ca84();
    uVar1 = (uint)lVar2;
    local_80 = param_1;
    uStack_78 = param_2;
    local_70 = param_3;
    uStack_68 = param_4;
    local_50 = param_1;
    uStack_48 = param_2;
    local_40 = param_3;
    uStack_38 = param_4;
    _CGRectIsNull(param_1,param_2,param_3,param_4);
    local_5d = true;
    if ((uVar1 & 1) == 0) {
      uStack_98 = uStack_48;
      local_a0 = local_50;
      uStack_88 = uStack_38;
      local_90 = local_40;
      _CGRectIsEmpty(local_50,uStack_48,local_40,uStack_38);
      local_5d = true;
      if ((uVar1 & 1) == 0) {
        uStack_b8 = uStack_48;
        local_c0 = local_50;
        uStack_a8 = uStack_38;
        local_b0 = local_40;
        dVar7 = local_50;
        _CGRectGetMaxY(local_50,uStack_48,local_40,uStack_38);
        local_5d = true;
        if (-80.0 <= dVar7) {
          uStack_d8 = uStack_48;
          local_e0 = local_50;
          uStack_c8 = uStack_38;
          local_d0 = local_40;
          dVar7 = local_50;
          uVar8 = uStack_48;
          uVar9 = local_40;
          uVar10 = uStack_38;
          _CGRectGetMinY();
          dVar6 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          local_100 = dVar6;
          local_f8 = uVar8;
          local_f0 = uVar9;
          local_e8 = uVar10;
          _CGRectGetHeight(dVar6,uVar8,uVar9,uVar10);
          local_5d = dVar6 + 80.0 < dVar7;
        }
      }
    }
    lVar2 = local_28;
    FUN_0031cff4(0xc059000000000000,local_28,&cf_WCRefineChatRoomInfoMemberSection_Fill);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_108 = lVar2;
    FUN_0031cff4(0x408f400000000000,local_28,&cf_WCRefineChatRoomInfoMemberSection_Border);
    _objc_retainAutoreleasedReturnValue();
    local_110 = lVar3;
    if ((local_5d & 1) == 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uStack_48;
      local_140 = local_50;
      uStack_128 = uStack_38;
      local_130 = local_40;
      dVar7 = local_50;
      local_118 = puVar4;
      FUN_0031dc24(local_50,uStack_48,local_40,uStack_38,puVar4);
      uStack_168 = uStack_48;
      local_170 = local_50;
      uStack_158 = uStack_38;
      local_160 = local_40;
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      local_120 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,uStack_48,local_40,uStack_38,dVar7,PTR__OBJC_CLASS___UIBezierPath_026ce268
                 ,PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_108;
      local_148 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setHidden__026ca970,0);
      FUN_0031245c();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setFillColor__026ca948,lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setStrokeColor__026caa78,0);
      dVar7 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setLineWidth__026ca9b0);
      puVar4 = local_148;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setPath__026caa08,puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_globalCornerStroke_026a2018);
      local_178 = dVar7;
      if (0.0 < dVar7) {
        if (5.0 < dVar7) {
          local_178 = 5.0;
        }
        local_180 = local_178 / 2.0;
        uStack_1b8 = uStack_48;
        local_1c0 = local_50;
        uStack_1a8 = uStack_38;
        local_1b0 = local_40;
        dVar7 = local_50;
        uVar8 = uStack_48;
        uVar9 = local_40;
        uVar10 = uStack_38;
        _CGRectInset();
        local_1c8 = local_120 - local_180;
        if (local_1c8 < 0.0) {
          local_1c8 = 0.0;
        }
        puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        local_1a0 = dVar7;
        uStack_198 = uVar8;
        local_190 = uVar9;
        uStack_188 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar7,uVar8,uVar9,uVar10,local_1c8,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                   PTR_s_bezierPathWithRoundedRect_corner_026ca530);
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setHidden__026ca970,0);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setFillColor__026ca948,puVar5);
        (*(code *)PTR__objc_release_02578630)();
        FUN_003160c4();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setStrokeColor__026caa78,puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_178,local_110,PTR_s_setLineWidth__026ca9b0);
        puVar4 = local_1d0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setPath__026caa08,puVar4);
        FUN_0031dcd0(local_178,local_110);
        _objc_storeStrong(&local_1d0,0);
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setPath__026caa08,0);
        local_2c = 1;
      }
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_118,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setHidden__026ca970,1);
      local_2c = 1;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

