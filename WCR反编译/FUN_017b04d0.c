// FUN_017b04d0 @ 017b04d0

void FUN_017b04d0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong local_298;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  ulong local_130;
  ulong local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != 0) {
      lVar4 = *local_100;
      local_1d0 = 0;
LAB_017b05cc:
      if (*local_100 - lVar4 != 0) {
        _objc_enumerationMutation(*local_100 - lVar4,uVar2);
      }
      uVar5 = *(ulong *)(local_108 + local_1d0 * 8);
      local_d0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      local_128[0] = uVar5;
      while (local_128[0] != 0) {
        if (local_128[0] == local_c0) {
          uVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar5;
          goto LAB_017b069c;
        }
        uVar3 = local_128[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_128[0];
        local_128[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_d0;
      FUN_017b04d0(local_d0,local_c0);
      _objc_retainAutoreleasedReturnValue();
      local_198 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar5;
      }
      local_c4 = (uint)(uVar5 != 0);
      _objc_storeStrong(&local_198,0);
      goto LAB_017b0a08;
    }
LAB_017b0a8c:
    local_c4 = 0;
LAB_017b0a94:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
LAB_017b069c:
  if (local_130 == 0 || local_130 == local_b8) goto LAB_017b08b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
  bVar1 = false;
  dVar7 = param_2;
  dVar9 = param_2;
  dVar8 = param_1;
  local_150 = param_1;
  local_148 = param_2;
  local_140 = param_3;
  local_138 = param_4;
  if (0.0 < param_2) {
    dVar8 = param_2;
    dVar7 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
    dVar6 = dVar7;
    dVar9 = param_3;
    local_170 = param_2;
    local_168 = param_3;
    local_160 = dVar8;
    local_158 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    param_3 = param_2;
    bVar1 = dVar7 < param_3;
    local_190 = dVar6;
    local_188 = dVar8;
    local_180 = dVar9;
    local_178 = param_3;
  }
  uVar5 = local_130;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar5;
    param_1 = dVar7;
    param_2 = param_3;
    param_3 = dVar9;
    param_4 = dVar8;
    goto LAB_017b0940;
  }
  uVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_130;
  local_130 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  param_1 = dVar7;
  param_2 = param_3;
  param_3 = dVar9;
  param_4 = dVar8;
  goto LAB_017b069c;
LAB_017b08b8:
  uVar5 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_298 = uVar5;
  if (uVar5 == 0) {
    local_298 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_298;
  (*(code *)PTR__objc_release_02578630)(uVar5);
LAB_017b0940:
  local_c4 = 1;
  _objc_storeStrong(&local_130,0);
LAB_017b0a08:
  _objc_storeStrong(local_128,0);
  if (local_c4 != 0) goto LAB_017b0a94;
  local_1d0 = local_1d0 + 1;
  if (local_1d0 < local_1c8) goto LAB_017b05cc;
  local_1c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  local_1d0 = 0;
  if (local_1c8 == 0) goto LAB_017b0a8c;
  goto LAB_017b05cc;
}

