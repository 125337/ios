// FUN_0035a9c0 @ 0035a9c0

/* WARNING: Removing unreachable block (ram,0x0035ae6c) */

void FUN_0035a9c0(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *local_180;
  undefined *local_178;
  undefined *local_138;
  uint local_12c;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  ulong local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = local_c0;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar7;
  while (local_d0 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
    lVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_d0;
    local_d0 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar7);
  }
  _objc_storeStrong(&local_d0,0);
  uVar4 = local_b8;
  FUN_003612b8(local_b8,&cf_view);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d8);
  }
  _memset(auStack_120,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != (undefined *)0x0) {
    lVar7 = *local_110;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,puVar2);
        }
        puVar8 = *(undefined **)(local_118 + (long)local_180 * 8);
        local_e0 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        local_128 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          local_12c = 6;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_128;
          puVar5 = local_e0;
          local_138 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_traitCollection_026caba8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_resolvedColorWithTraitCollection_0269fc58);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_138;
          local_138 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar8 = local_138;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
          _CGColorGetAlpha();
          puVar8 = local_128;
          bVar1 = DAT_02323e38 < param_1;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar8;
          }
          local_12c = (uint)bVar1;
          _objc_storeStrong(&local_138,0);
        }
        _objc_storeStrong(&local_128,0);
        if ((local_12c != 0) && (local_12c != 6)) goto LAB_0035ae0c;
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  local_12c = 0;
LAB_0035ae0c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_12c == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGroupedBackgroundColor_0269e878);
    _objc_retainAutoreleasedReturnValue();
    local_12c = 1;
    local_b0 = puVar2;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

