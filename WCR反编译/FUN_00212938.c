// FUN_00212938 @ 00212938

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00212938(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  double dVar9;
  long lVar10;
  ulong local_450;
  ulong local_448;
  double local_3d0;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  ulong local_2c8;
  long local_2c0;
  long lStack_2b8;
  double local_2b0;
  double dStack_2a8;
  long local_2a0;
  long lStack_298;
  double local_290;
  double dStack_288;
  long local_280;
  long lStack_278;
  double local_270;
  double dStack_268;
  long local_258;
  long local_250;
  double local_248;
  double local_240;
  undefined1 auStack_238 [48];
  undefined1 auStack_208 [48];
  long local_1d8;
  long lStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
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
  double local_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_7);
  if (((local_b0 == 0) || (local_b8 == 0)) || (local_c0 == 0)) {
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    local_120 = param_1;
    dStack_118 = param_2;
    local_110 = param_3;
    uStack_108 = param_4;
    local_e8 = param_1;
    dStack_e0 = param_2;
    local_d8 = param_3;
    uStack_d0 = param_4;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dStack_148 = dStack_e0;
    local_150 = local_e8;
    uStack_138 = uStack_d0;
    local_140 = local_d8;
    dVar5 = local_e8;
    dVar9 = dStack_e0;
    local_100 = param_1;
    _CGRectGetHeight(local_e8,dStack_e0,local_d8,uStack_d0);
    local_128 = dVar5;
    if ((local_100 <= 0.0) || (dVar5 <= 0.0)) {
      local_c4 = 1;
    }
    else {
      FUN_00214040(local_c0);
      local_158 = dVar5;
      FUN_00214140(local_c0);
      local_160 = dVar5;
      FUN_00214240(local_c0);
      local_168 = dVar5;
      FUN_00214394(local_b0);
      local_180 = local_100;
      local_188 = local_128;
      if ((0.0 < dVar5) && (0.0 < dVar9)) {
        local_198 = local_100 / dVar5;
        local_1a0 = local_128 / dVar9;
        local_3d0 = local_198;
        if (local_198 < local_1a0) {
          local_3d0 = local_1a0;
        }
        local_1a8 = local_3d0;
        local_190 = local_3d0;
        local_180 = dVar5 * local_3d0;
        local_188 = dVar9 * local_3d0;
      }
      dVar6 = (double)(long)(local_180 * local_168);
      dVar7 = (double)(long)(local_188 * local_168);
      lVar8 = (long)(local_158 + (local_100 - dVar6) * 0.5);
      lVar10 = (long)((local_128 - dVar7) * 0.5 - local_160);
      local_1b8 = dVar7;
      local_1b0 = dVar6;
      local_178 = dVar5;
      local_170 = dVar9;
      FUN_001f91b8();
      local_1d8 = lVar8;
      lStack_1d0 = lVar10;
      local_1c8 = dVar6;
      dStack_1c0 = dVar7;
      _memcpy(auStack_208,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar4 = local_b0;
      _memcpy(auStack_238,auStack_208,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_238);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
      uVar1 = (uint)uVar4;
      lStack_278 = lStack_1d0;
      local_280 = local_1d8;
      dStack_268 = dStack_1c0;
      local_270 = local_1c8;
      local_258 = lVar8;
      local_250 = lVar10;
      local_248 = dVar6;
      local_240 = dVar7;
      FUN_00207ae0();
      if ((uVar1 & 1) == 0) {
        lStack_2b8 = lStack_1d0;
        local_2c0 = local_1d8;
        dStack_2a8 = dStack_1c0;
        local_2b0 = local_1c8;
        local_2a0 = local_2c0;
        lStack_298 = lStack_2b8;
        local_290 = local_2b0;
        dStack_288 = dStack_2a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFrame__026ca960);
      }
      _memset(auStack_308,0,0x40);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_448 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_a8,0x10);
      if (local_448 != 0) {
        lVar8 = *local_2f8;
        local_450 = 0;
        do {
          do {
            if (*local_2f8 - lVar8 != 0) {
              _objc_enumerationMutation(*local_2f8 - lVar8,uVar2);
            }
            uVar4 = *(ulong *)(local_300 + local_450 * 8);
            puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
            local_2c8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
              (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setFrame__026ca960);
            }
            local_450 = local_450 + 1;
          } while (local_450 < local_448);
          local_448 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_a8,
                     0x10);
          local_450 = 0;
        } while (local_448 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

