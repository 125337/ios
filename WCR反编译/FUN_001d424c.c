// FUN_001d424c @ 001d424c

void FUN_001d424c(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *local_350;
  undefined *local_348;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  undefined *local_160;
  undefined4 local_154;
  long local_150;
  undefined8 local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  if (local_150 == 0) {
    local_148 = 0;
    local_154 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1b8,0,0x40);
    local_c0 = &cf_m_thumbImageView;
    local_b8 = &cf_thumbImageView;
    local_b0 = &cf_tmp_liftingImgView;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_2d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d8 != (undefined *)0x0) {
      lVar6 = *local_1a8;
      local_2e0 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar6,puVar3);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_2e0 * 8);
          lVar4 = local_150;
          FUN_001d5230(local_150,local_178);
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = lVar4;
          if ((lVar4 != 0) &&
             (puVar5 = local_160,
             (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsObject__0269cbb8,lVar4),
             ((ulong)puVar5 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1c0);
          }
          _objc_storeStrong(&local_1c0,0);
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < local_2d8);
        local_2d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_2e0 = (undefined *)0x0;
      } while (local_2d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar6 = local_150;
    FUN_001d4d18();
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = lVar6;
    FUN_001d1890();
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = lVar6;
    if ((lVar6 != 0) &&
       (puVar3 = local_160,
       (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsObject__0269cbb8,lVar6),
       ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1d0);
    }
    if ((local_1c8 != 0) &&
       (puVar3 = local_160,
       (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsObject__0269cbb8,local_1c8),
       ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1c8);
    }
    local_1d8 = 0;
    dVar8 = 0.0;
    local_1e0 = 0.0;
    _memset(auStack_228,0,0x40);
    puVar3 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_348 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_140,0x10);
    if (local_348 != (undefined *)0x0) {
      lVar6 = *local_218;
      local_350 = (undefined *)0x0;
      do {
        do {
          dVar9 = dVar8;
          if (*local_218 - lVar6 != 0) {
            _objc_enumerationMutation(*local_218 - lVar6,puVar3);
            dVar9 = dVar8;
          }
          uVar7 = *(ulong *)(local_220 + (long)local_350 * 8);
          bVar1 = true;
          dVar8 = dVar9;
          local_1e8 = uVar7;
          if (uVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
            bVar1 = true;
            dVar8 = dVar9;
            if ((uVar7 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_alpha_026ca4d8);
              bVar1 = true;
              dVar8 = dVar9;
              param_2 = DAT_02323cd0;
              if (DAT_02323cd0 < dVar9) {
                dVar10 = DAT_02323cd0;
                dVar8 = param_3;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_bounds_026ca548);
                dVar11 = 1.0;
                bVar1 = true;
                param_2 = dVar11;
                param_3 = dVar10;
                if (1.0 < dVar8) {
                  dVar8 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_bounds_026ca548);
                  param_2 = 1.0;
                  bVar1 = dVar8 <= 1.0;
                  param_3 = dVar11;
                }
              }
            }
          }
          if (!bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_bounds_026ca548);
            dVar9 = param_2;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_bounds_026ca548);
            dVar8 = param_3 * dVar8;
            param_2 = local_1e0;
            param_3 = dVar9;
            if (local_1e0 < dVar8) {
              local_1e0 = dVar8;
              _objc_storeStrong(&local_1d8,local_1e8);
              param_3 = dVar9;
            }
          }
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_140,
                   0x10);
        local_350 = (undefined *)0x0;
      } while (local_348 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = uVar2;
    local_154 = 1;
    _objc_storeStrong(&local_1d8);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_148);
  return;
}

