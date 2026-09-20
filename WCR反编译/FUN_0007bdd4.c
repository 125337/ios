// FUN_0007bdd4 @ 0007bdd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0007bdd4(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 ,double *param_6)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  long local_f8;
  undefined *local_f0;
  undefined1 local_e1;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  double *local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  puVar4 = PTR__CGRectZero_025782f0;
  if (param_6 != (double *)0x0) {
    dVar6 = *(double *)PTR__CGRectZero_025782f0;
    param_6[1] = *(double *)(PTR__CGRectZero_025782f0 + 8);
    *param_6 = dVar6;
    dVar6 = *(double *)(puVar4 + 0x10);
    param_6[3] = *(double *)(puVar4 + 0x18);
    param_6[2] = dVar6;
  }
  local_c0 = param_6;
  if ((local_b8 == 0) ||
     (uVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isViewLoaded_0269cde0),
     (uVar3 & 1) == 0)) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    bVar2 = true;
    uVar1 = uVar3 != 0;
    local_d8 = uVar3;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar3 == 0;
      local_e1 = uVar1;
      local_e0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar1 = local_e1;
    }
    local_e1 = uVar1;
    if (bVar2) {
      local_b0 = 0;
      local_d0 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar4;
      FUN_0007dc30(local_d8,local_d8,puVar4);
      puVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined *)0x0) {
        local_b0 = 0;
        local_d0 = 1;
      }
      else {
        local_f8 = 0;
        dStack_118 = *(double *)(PTR__CGRectZero_025782f0 + 8);
        local_120 = *(double *)PTR__CGRectZero_025782f0;
        dStack_108 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
        local_110 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        local_128 = -1.0;
        dVar6 = 1.7976931348623157e+308;
        local_130 = 1.7976931348623157e+308;
        _memset(auStack_178,0,0x40);
        puVar4 = local_f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_2f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        if (local_2f0 != (undefined *)0x0) {
          lVar5 = *local_168;
          local_2f8 = (undefined *)0x0;
          do {
            do {
              dVar7 = dVar6;
              dVar10 = param_2;
              dVar11 = param_3;
              dVar12 = param_4;
              if (*local_168 - lVar5 != 0) {
                _objc_enumerationMutation(*local_168 - lVar5,puVar4);
                dVar7 = dVar6;
                dVar10 = param_2;
                dVar11 = param_3;
                dVar12 = param_4;
              }
              local_138 = *(undefined8 *)(local_170 + (long)local_2f8 * 8);
              FUN_0007c690(local_138,local_d8);
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
              _CGRectIntersection();
              dVar8 = dVar7;
              _CGRectGetWidth(dVar7,dVar10,dVar11,dVar12);
              dVar6 = dVar7;
              _CGRectGetHeight(dVar7,dVar10,dVar11,dVar12);
              dVar8 = dVar8 * dVar6;
              dVar9 = dVar7;
              param_2 = dVar10;
              param_3 = dVar11;
              param_4 = dVar12;
              _CGRectGetMinY();
              if (local_f8 == 0) {
LAB_0007c324:
                _objc_storeStrong(&local_f8,local_138);
                dVar6 = dVar9;
                local_130 = dVar9;
                local_128 = dVar8;
                local_120 = dVar7;
                dStack_118 = dVar10;
                local_110 = dVar11;
                dStack_108 = dVar12;
              }
              else {
                param_3 = 0.5;
                param_2 = local_128 + 0.5;
                if (local_128 + 0.5 < dVar8) goto LAB_0007c324;
                dVar6 = ABS(dVar8 - local_128);
                param_2 = 0.5;
                if ((ABS(dVar8 - local_128) <= 0.5) &&
                   (dVar6 = dVar9, param_2 = local_130, dVar9 < local_130)) goto LAB_0007c324;
              }
              local_2f8 = local_2f8 + 1;
            } while (local_2f8 < local_2f0);
            local_2f0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8
                       ,0x10);
            local_2f8 = (undefined *)0x0;
          } while (local_2f0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_b0 = local_f8;
        if (local_c0 != (double *)0x0) {
          local_c0[1] = dStack_118;
          *local_c0 = local_120;
          local_c0[3] = dStack_108;
          local_c0[2] = local_110;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = 1;
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

