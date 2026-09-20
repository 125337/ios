// FUN_001e5800 @ 001e5800

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001e5800(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,ulong param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_370;
  double local_368;
  double local_318;
  double local_310;
  double local_2c0;
  double local_2b8;
  double local_288;
  double local_268;
  double local_258;
  double local_250;
  double local_248;
  undefined *local_120;
  byte local_114;
  byte local_113;
  byte local_112;
  byte local_111;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_98;
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_68;
  double local_60;
  ulong local_58;
  ulong local_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_28;
  
  uVar2 = DAT_02323e28;
  uVar6 = DAT_02323e20;
  uVar1 = DAT_02323cb0;
  local_90 = param_1;
  uStack_88 = param_2;
  local_80 = param_3;
  uStack_78 = param_4;
  local_60 = param_5;
  local_58 = param_6;
  local_50 = param_7;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uStack_b8 = uStack_40;
  local_c0 = local_48;
  uStack_a8 = uStack_30;
  local_b0 = local_38;
  dVar5 = local_48;
  local_68 = param_1;
  _CGRectGetHeight(local_48,uStack_40,local_38,uStack_30);
  local_98 = dVar5;
  if ((local_68 <= 1.0) || (dVar5 <= 1.0)) {
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
  }
  else {
    local_d8 = local_60;
    local_dc = 0;
    if (0.0 <= local_60) {
      local_248 = local_60;
    }
    else {
      local_248 = 0.0;
    }
    local_e8 = local_248;
    local_d0 = local_248;
    local_f8 = local_68;
    local_250 = dVar5;
    if (local_68 < dVar5) {
      local_250 = local_68;
    }
    local_108 = local_250;
    local_f0 = local_250 * 0.5;
    local_258 = local_f0;
    if (local_248 < local_f0) {
      local_258 = local_248;
    }
    local_110 = local_258;
    local_c8 = local_258;
    local_111 = (local_50 & 1) != 0;
    local_112 = (local_50 & 2) != 0;
    local_113 = (local_50 & 4) != 0;
    local_114 = (local_50 & 8) != 0;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_100 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar3;
    if ((local_58 & 1) != 0) {
      if ((local_111 & 1) == 0) {
        local_268 = 0.0;
      }
      else {
        local_268 = local_c8;
      }
      uVar7 = 0;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)(local_268,uVar7,puVar3,PTR_s_moveToPoint__026a01b0);
      puVar3 = local_120;
      if ((local_112 & 1) == 0) {
        local_288 = local_68;
      }
      else {
        local_288 = local_68 - local_c8;
      }
      uVar7 = 0;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)(local_288,uVar7,puVar3,PTR_s_addLineToPoint__026a01b8);
    }
    puVar3 = local_120;
    if ((((local_58 & 1) != 0) && ((local_58 & 0x1000000) != 0)) && ((local_112 & 1) != 0)) {
      dVar4 = local_68 - local_c8;
      dVar5 = local_c8;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar5,local_c8,uVar2,0,puVar3,PTR_s_addArcWithCenter_radius_startAng_026a01c0
                 ,1);
    }
    puVar3 = local_120;
    if ((local_58 & 0x1000000) != 0) {
      if (((local_58 & 1) == 0) || ((local_112 & 1) == 0)) {
        local_2b8 = 0.0;
      }
      else {
        local_2b8 = local_c8;
      }
      if (((local_58 & 0x10000) == 0) || ((local_114 & 1) == 0)) {
        local_2c0 = local_98;
      }
      else {
        local_2c0 = local_98 - local_c8;
      }
      if ((((local_58 & 1) == 0) || ((local_58 & 0x1000000) == 0)) || ((local_112 & 1) == 0)) {
        dVar5 = local_68;
        FUN_001e6228();
        (*(code *)PTR__objc_msgSend_02578628)(dVar5,local_2b8,puVar3,PTR_s_moveToPoint__026a01b0);
      }
      puVar3 = local_120;
      dVar5 = local_68;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)(dVar5,local_2c0,puVar3,PTR_s_addLineToPoint__026a01b8);
    }
    puVar3 = local_120;
    if ((((local_58 & 0x1000000) != 0) && ((local_58 & 0x10000) != 0)) && ((local_114 & 1) != 0)) {
      dVar5 = local_68 - local_c8;
      dVar4 = local_98 - local_c8;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar4,local_c8,0,uVar6,puVar3,PTR_s_addArcWithCenter_radius_startAng_026a01c0
                 ,1);
    }
    puVar3 = local_120;
    if ((local_58 & 0x10000) != 0) {
      if (((local_58 & 0x1000000) == 0) || ((local_114 & 1) == 0)) {
        local_310 = local_68;
      }
      else {
        local_310 = local_68 - local_c8;
      }
      if (((local_58 & 0x100) == 0) || ((local_113 & 1) == 0)) {
        local_318 = 0.0;
      }
      else {
        local_318 = local_c8;
      }
      if ((((local_58 & 0x1000000) == 0) || ((local_58 & 0x10000) == 0)) || ((local_114 & 1) == 0))
      {
        dVar5 = local_98;
        FUN_001e6228();
        (*(code *)PTR__objc_msgSend_02578628)(local_310,dVar5,puVar3,PTR_s_moveToPoint__026a01b0);
      }
      puVar3 = local_120;
      dVar5 = local_98;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)(local_318,dVar5,puVar3,PTR_s_addLineToPoint__026a01b8);
    }
    puVar3 = local_120;
    if ((((local_58 & 0x100) != 0) && ((local_58 & 0x10000) != 0)) && ((local_113 & 1) != 0)) {
      dVar4 = local_98 - local_c8;
      dVar5 = local_c8;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar4,local_c8,uVar6,uVar1,puVar3,
                 PTR_s_addArcWithCenter_radius_startAng_026a01c0,1);
    }
    puVar3 = local_120;
    if ((local_58 & 0x100) != 0) {
      if (((local_58 & 0x10000) == 0) || ((local_113 & 1) == 0)) {
        local_368 = local_98;
      }
      else {
        local_368 = local_98 - local_c8;
      }
      if (((local_58 & 1) == 0) || ((local_111 & 1) == 0)) {
        local_370 = 0.0;
      }
      else {
        local_370 = local_c8;
      }
      if ((((local_58 & 0x100) == 0) || ((local_58 & 0x10000) == 0)) || ((local_113 & 1) == 0)) {
        uVar6 = 0;
        FUN_001e6228();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,local_368,puVar3,PTR_s_moveToPoint__026a01b0);
      }
      puVar3 = local_120;
      uVar6 = 0;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,local_370,puVar3,PTR_s_addLineToPoint__026a01b8);
    }
    puVar3 = local_120;
    if ((((local_58 & 0x100) != 0) && ((local_58 & 1) != 0)) && ((local_111 & 1) != 0)) {
      dVar5 = local_c8;
      dVar4 = local_c8;
      FUN_001e6228();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar4,local_c8,uVar1,uVar2,puVar3,
                 PTR_s_addArcWithCenter_radius_startAng_026a01c0,1);
    }
    puVar3 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    _objc_storeStrong(&local_120,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

