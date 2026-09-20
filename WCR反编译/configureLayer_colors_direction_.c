// configureLayer:colors:direction: @ 00f8e670

/* Function Stack Size: 0x28 bytes */

void WCRefineGradientPalette::configureLayer_colors_direction_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  ulong local_178;
  ulong local_170;
  undefined1 *local_140;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined1 *local_e0;
  undefined4 local_d4;
  long_long local_d0;
  ID local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = param_5;
  if (local_c0 == 0) {
    local_d4 = 1;
  }
  else {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_smoothedColors__026acca8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_c8;
    local_c8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    IVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar8 = *local_118;
      local_178 = 0;
      do {
        do {
          if (*local_118 - lVar8 != 0) {
            _objc_enumerationMutation(*local_118 - lVar8,IVar1);
          }
          uVar9 = *(ulong *)(local_120 + local_178 * 8);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_e8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar4 = local_e8;
          if ((uVar9 & 1) != 0) {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_CGColor_026ca470);
            puVar7 = local_e0;
            uVar9 = local_e8;
            if (uVar4 != 0) {
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180,uVar9);
            }
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    puVar7 = local_e0;
    if (puVar5 == (undefined1 *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar7 = local_e0;
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      puVar7 = local_e0;
      if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setColors__026ca8d0,local_e0);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_e0;
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    for (local_140 = (undefined1 *)0x0; puVar3 = local_130, local_140 < puVar7;
        local_140 = local_140 + 1) {
      dVar10 = (double)NEON_ucvtf(local_140);
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar10 / (double)(puVar7 + -1),PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setLocations__026accb0,local_130);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_applyDirection_toLayer__026accb8,local_d0,local_c0);
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

