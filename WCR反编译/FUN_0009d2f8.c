// FUN_0009d2f8 @ 0009d2f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0009d2f8(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double local_420;
  double local_3b8;
  undefined1 auStack_360 [48];
  undefined1 auStack_330 [48];
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  double local_250;
  double local_248;
  undefined1 auStack_240 [48];
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [55];
  byte local_179;
  undefined1 auStack_178 [48];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  long local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  double local_28;
  long *plVar4;
  
  plVar4 = &local_48;
  local_48 = 0;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  _objc_storeStrong(plVar4,param_5);
  uVar3 = (uint)plVar4;
  if ((local_48 == 0) || (FUN_0009d25c(), (uVar3 & 1) == 0)) {
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    dVar8 = param_3;
    local_80 = param_1;
    local_78 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    if (param_3 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      local_3b8 = param_2;
      local_c0 = param_3;
      local_b8 = dVar8;
      local_b0 = param_2;
      local_a8 = param_1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      local_3b8 = param_2;
      local_a0 = param_3;
      local_98 = dVar8;
      local_90 = param_2;
      local_88 = param_1;
    }
    local_60 = local_3b8;
    dVar9 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_e8 = local_3b8;
    local_e0 = dVar9;
    local_d8 = dVar8;
    local_d0 = param_3;
    if (param_3 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      local_420 = local_3b8;
      local_128 = param_3;
      local_120 = dVar8;
      local_118 = dVar9;
      local_110 = local_3b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      local_420 = local_3b8;
      local_108 = param_3;
      local_100 = dVar8;
      local_f8 = dVar9;
      local_f0 = local_3b8;
    }
    local_c8 = local_420;
    if ((((local_60 <= 0.0) || (local_420 <= 0.0)) || (local_30 <= 0.0)) || (local_28 <= 0.0)) {
      local_58 = 1;
    }
    else {
      dVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      local_138 = local_60;
      dStack_130 = local_c8;
      uVar10 = 0x4000000000000000;
      local_148 = (local_30 - local_60) / 2.0;
      dVar6 = (local_28 - local_c8) / 2.0;
      dVar9 = local_c8;
      dStack_140 = dVar6;
      if (local_48 == 0) {
        _memset(auStack_178,0,0x30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(auStack_178,local_48,PTR_s_transform_0269e178);
      }
      puVar5 = auStack_1b0;
      _memcpy(puVar5,auStack_178,0x30);
      _memcpy(auStack_1e0,PTR__CGAffineTransformIdentity_025782d8,0x30);
      _CGAffineTransformEqualToTransform(puVar5,auStack_1e0);
      local_179 = ((byte)puVar5 ^ 1) & 1;
      if (local_179 != 0) {
        _memcpy(auStack_210,PTR__CGAffineTransformIdentity_025782d8,0x30);
        lVar2 = local_48;
        _memcpy(auStack_240,auStack_210,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_240);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      dVar7 = ABS(dVar6 - local_148);
      dVar11 = 0.25;
      bVar1 = true;
      local_260 = dVar6;
      local_258 = uVar10;
      local_250 = dVar9;
      local_248 = dVar8;
      if (dVar7 <= 0.25) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
        dVar8 = ABS(dVar11 - dStack_140);
        uVar12 = 0x3fd0000000000000;
        bVar1 = true;
        local_280 = dVar7;
        local_278 = dVar11;
        local_270 = uVar10;
        local_268 = dVar6;
        if (dVar8 <= 0.25) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
          dVar9 = ABS(dVar11 - local_138);
          uVar10 = 0x3fd0000000000000;
          bVar1 = true;
          local_2a0 = dVar8;
          local_298 = uVar12;
          local_290 = dVar11;
          local_288 = dVar7;
          if (dVar9 <= 0.25) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
            bVar1 = 0.25 < ABS(dVar8 - dStack_130);
            local_2c0 = dVar9;
            local_2b8 = uVar10;
            local_2b0 = uVar12;
            local_2a8 = dVar8;
          }
        }
      }
      if (bVar1) {
        dStack_2f8 = dStack_140;
        local_300 = local_148;
        dStack_2e8 = dStack_130;
        local_2f0 = local_138;
        local_2e0 = local_300;
        dStack_2d8 = dStack_2f8;
        local_2d0 = local_2f0;
        dStack_2c8 = dStack_2e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,dStack_140,local_138,dStack_130,local_48,PTR_s_setFrame__026ca960);
      }
      if ((local_179 & 1) != 0) {
        _memcpy(auStack_330,auStack_178,0x30);
        lVar2 = local_48;
        _memcpy(auStack_360,auStack_330,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_360);
      }
      local_58 = 0;
    }
  }
  _objc_storeStrong(&local_48,0);
  return;
}

