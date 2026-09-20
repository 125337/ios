// FUN_001f8ab0 @ 001f8ab0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001f8ab0(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,double param_6,ulong param_7,byte param_8,byte param_9,
                 byte param_10)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_2f0;
  double local_2e0;
  double local_2c8;
  undefined *local_268;
  undefined *local_218;
  undefined *local_1f0;
  ulong local_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  double local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined4 local_11c;
  double local_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  double local_a8;
  double local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  double local_58;
  undefined8 local_50;
  double local_48;
  undefined8 uStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined *local_28;
  
  dVar6 = DAT_02323e30;
  local_59 = (byte)param_7;
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_5c = param_10;
  local_5b = param_9;
  local_5a = param_8;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if ((param_7 & 1) == 0) {
    local_a8 = local_58;
    if (local_58 < 0.0) {
      local_a8 = 0.0;
    }
    if (local_38 * dVar6 < local_a8) {
      local_a8 = local_38 * dVar6;
    }
    uStack_c8 = uStack_40;
    local_d0 = local_48;
    uStack_b8 = uStack_30;
    local_c0 = local_38;
    dStack_e8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_f0 = *(double *)PTR__CGRectZero_025782f0;
    uStack_d8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_e0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    if ((local_a8 <= 0.5) || ((local_59 & 1) == 0)) {
      if (0.5 < local_a8) {
        local_198 = local_38 - local_a8;
        local_19c = 0x3f800000;
        local_2e0 = local_198;
        if (local_198 < 1.0) {
          local_2e0 = 1.0;
        }
        local_1a8 = local_2e0;
        uVar9 = 0;
        dVar6 = local_a8;
        uVar12 = uStack_30;
        FUN_001f91b8();
        dVar10 = 0.0;
        dVar5 = dVar10;
        dVar8 = local_a8;
        uVar7 = uStack_30;
        local_190 = dVar6;
        uStack_188 = uVar9;
        local_180 = local_2e0;
        uStack_178 = uVar12;
        local_d0 = dVar6;
        uStack_c8 = uVar9;
        local_c0 = local_2e0;
        uStack_b8 = uVar12;
        FUN_001f91b8();
        local_1c8 = dVar10;
        dStack_1c0 = dVar5;
        local_1b8 = dVar8;
        uStack_1b0 = uVar7;
        local_f0 = dVar10;
        dStack_e8 = dVar5;
        local_e0 = dVar8;
        uStack_d8 = uVar7;
      }
    }
    else {
      local_118 = local_38 - local_a8;
      local_11c = 0x3f800000;
      local_2c8 = local_118;
      if (local_118 < 1.0) {
        local_2c8 = 1.0;
      }
      local_128 = local_2c8;
      uVar7 = 0;
      dVar5 = 0.0;
      uVar12 = uStack_30;
      FUN_001f91b8();
      local_170 = dVar5;
      uStack_168 = uVar7;
      local_160 = local_2c8;
      uStack_158 = uVar12;
      local_110 = dVar5;
      uStack_108 = uVar7;
      local_100 = local_2c8;
      uStack_f8 = uVar12;
      local_d0 = dVar5;
      uStack_c8 = uVar7;
      local_c0 = local_2c8;
      uStack_b8 = uVar12;
      _CGRectGetMaxX(dVar5,uVar7,local_2c8,uVar12);
      dVar8 = 0.0;
      dVar6 = local_a8;
      uVar12 = uStack_30;
      FUN_001f91b8();
      local_148 = dVar5;
      dStack_140 = dVar8;
      local_138 = dVar6;
      uStack_130 = uVar12;
      local_f0 = dVar5;
      dStack_e8 = dVar8;
      local_e0 = dVar6;
      uStack_d8 = uVar12;
    }
    uStack_1d8 = uStack_b8;
    local_1e0 = local_c0;
    uVar9 = local_50;
    FUN_001d5f20(local_50,local_c0,uStack_b8);
    uVar7 = uStack_b8;
    dVar5 = local_c0;
    uVar12 = uStack_c8;
    dVar6 = local_d0;
    local_2f0 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_1e8 = 0;
    if ((local_5a & 1) != 0) {
      local_1e8 = 3;
    }
    if ((local_5b & 1) != 0) {
      local_1e8 = local_1e8 | 0xc;
    }
    uVar2 = local_1e8;
    bVar1 = local_1e8 != 0;
    local_1d0 = uVar9;
    if (bVar1) {
      uVar11 = uVar9;
      FUN_001ebe58();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,uVar12,dVar5,uVar7,uVar9,uVar11,local_2f0,
                 PTR_s_bezierPathWithRoundedRect_byRoun_026a0400,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_268 = local_2f0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,uStack_c8,local_c0,uStack_b8,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
      local_218 = local_2f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = local_2f0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)();
    }
    else {
      local_268._0_4_ = (uint)local_218;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (((local_5c & 1) == 0) &&
       (_CGRectIsEmpty(local_f0,dStack_e8,local_e0,uStack_d8), puVar3 = local_1f0,
       ((uint)local_268 & 1) == 0)) {
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,dStack_e8,local_e0,uStack_d8,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendPath__026a0408);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar3 = local_1f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    _objc_storeStrong(&local_1f0,0);
  }
  else {
    uStack_98 = uStack_40;
    local_a0 = local_48;
    uStack_88 = uStack_30;
    local_90 = local_38;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,uStack_40,local_38,uStack_30,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRect__026a03f8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

