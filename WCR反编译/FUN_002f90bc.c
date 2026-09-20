// FUN_002f90bc @ 002f90bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_002f90bc(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  ulong local_188;
  ulong local_180;
  ulong local_148;
  ulong local_128;
  byte local_119;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  long local_c8;
  int local_bc;
  ulong local_b8;
  bool local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar3 = DAT_02323db0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  dVar9 = DAT_02323db0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = false;
    local_bc = 1;
    goto LAB_002f9700;
  }
  local_c8 = 0;
  _memset(auStack_110,0,0x40);
  uVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_180 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_180 != 0) {
    lVar6 = *local_100;
    local_188 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,uVar4);
        }
        uVar7 = *(ulong *)(local_108 + local_188 * 8);
        local_d0 = uVar7;
        FUN_002faeac();
        if ((uVar7 & 1) != 0) {
          local_c8 = local_c8 + 1;
          uVar7 = local_d0;
          _objc_getAssociatedObject(local_d0,&DAT_026dfdc8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar5 & 1) == 0) {
            local_a9 = false;
            local_bc = 1;
            goto LAB_002f9428;
          }
          uVar7 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isHidden_026ca768);
          local_119 = 0;
          bVar1 = true;
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_alpha_026ca4d8);
            bVar1 = true;
            if (dVar9 <= dVar3) {
              uVar7 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
              fVar8 = SUB84(dVar9,0);
              _objc_retainAutoreleasedReturnValue();
              local_119 = 1;
              local_118 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar9 = (double)fVar8;
              bVar1 = dVar3 < dVar9;
            }
          }
          if ((local_119 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          if (bVar1) {
            local_a9 = false;
            local_bc = 1;
            goto LAB_002f9428;
          }
        }
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  local_bc = 0;
LAB_002f9428:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (local_bc != 0) goto LAB_002f9700;
  local_128 = 0;
  uVar7 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_128;
  local_128 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if ((local_128 == 0) || (uVar4 = local_128, FUN_002faeac(), (uVar4 & 1) == 0)) {
LAB_002f96cc:
    local_a9 = local_c8 != 0;
  }
  else {
    local_c8 = local_c8 + 1;
    uVar4 = local_128;
    _objc_getAssociatedObject(local_128,&DAT_026dfdc8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar7 & 1) == 0) {
      local_a9 = false;
    }
    else {
      uVar4 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_isHidden_026ca768);
      bVar2 = false;
      bVar1 = true;
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_alpha_026ca4d8);
        bVar1 = true;
        if (dVar9 <= dVar3) {
          local_148 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layer_026ca788);
          fVar8 = SUB84(dVar9,0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = dVar3 < (double)fVar8;
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      if (!bVar1) goto LAB_002f96cc;
      local_a9 = false;
    }
  }
  local_bc = 1;
  _objc_storeStrong(&local_128,0);
LAB_002f9700:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

