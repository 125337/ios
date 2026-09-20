// persistFullscreenEffectMemory @ 0166e258

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::persistFullscreenEffectMemory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ulong local_138;
  ulong local_130;
  ID local_118;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_restoringFullscreenEditorMemory_026b2578);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    _memset(auStack_108,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    local_118 = IVar2;
    if (IVar2 == 0) {
      local_118 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_130 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
              );
    if (local_130 != 0) {
      lVar3 = *local_f8;
      local_138 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,local_118);
          }
          uVar4 = *(ulong *)(local_100 + local_138 * 8);
          local_c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,&cf_watermark)
          ;
          if (((uVar4 & 1) != 0) ||
             (uVar4 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_shell), (uVar4 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
          }
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                   0x10);
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_118);
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

