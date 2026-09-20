// FUN_00785174 @ 00785174

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00785174(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,double *param_8,byte *param_9)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined4 local_d4;
  byte *local_d0;
  double *local_c8;
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
  local_d0 = param_9;
  local_c8 = param_8;
  local_c0 = param_7;
  if (((local_b0 == 0) || (local_b8 == 0)) || (10 < param_7)) {
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 != 0) {
      lVar7 = *local_110;
      local_2d8 = 0;
      do {
        do {
          if (*local_110 - lVar7 != 0) {
            _objc_enumerationMutation(*local_110 - lVar7,uVar4);
          }
          local_e0 = *(ulong *)(local_118 + local_2d8 * 8);
          uVar3 = (uint)local_e0;
          FUN_00785dec();
          if (((uVar3 & 1) == 0) &&
             (uVar5 = local_e0, FUN_00785f78(local_e0,local_b8), uVar6 = local_e0, (uVar5 & 1) == 0)
             ) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_convertRect_toView__0269ded8,local_b8)
            ;
            dVar9 = param_1;
            dVar10 = param_2;
            dVar12 = param_3;
            dVar8 = param_4;
            _CGRectGetWidth();
            dVar11 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
            _CGRectGetWidth(dVar11,dVar10,dVar12);
            dVar11 = dVar11 * DAT_023242b8;
            bVar2 = false;
            dVar10 = DAT_023242b8;
            if (dVar11 <= dVar9) {
              dVar9 = param_1;
              dVar10 = param_2;
              dVar12 = param_3;
              dVar8 = param_4;
              _CGRectGetHeight();
              dVar11 = dVar9;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
              _CGRectGetHeight(dVar11,dVar10,dVar12);
              dVar11 = dVar11 * DAT_023242b0;
              bVar2 = dVar11 <= dVar9;
              dVar10 = DAT_023242b0;
            }
            uVar6 = local_e0;
            FUN_00786650(local_e0,local_b8,1);
            bVar1 = false;
            if ((uVar6 & 1) != 0) {
              bVar1 = (bool)(bVar2 ^ 1);
            }
            if (bVar1) {
              if ((*local_d0 & 1) == 0) {
                local_c8[1] = param_2;
                *local_c8 = param_1;
                local_c8[3] = param_4;
                local_c8[2] = param_3;
                *local_d0 = 1;
                dVar9 = param_3;
              }
              else {
                dVar10 = local_c8[1];
                dVar8 = *local_c8;
                dVar11 = local_c8[3];
                dVar9 = local_c8[2];
                _CGRectUnion();
                local_c8[1] = dVar10;
                *local_c8 = dVar8;
                local_c8[3] = dVar11;
                local_c8[2] = dVar9;
                dVar11 = dVar9;
              }
            }
            param_4 = dVar8;
            param_3 = dVar10;
            param_2 = dVar11;
            param_1 = dVar9;
            bVar2 = true;
            if (bVar1) {
              uVar6 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar2 = uVar5 != 0;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            if (bVar2) {
              FUN_00785174(local_e0,local_b8,local_c0 + 1,local_c8,local_d0);
            }
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

