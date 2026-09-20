// FUN_016ac790 @ 016ac790

void FUN_016ac790(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_1d8;
  undefined *local_190;
  undefined *local_188;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  int local_d8;
  long local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  local_b8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_b0 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    for (local_c8 = 0; local_c8 < 0xc && local_c0 != (undefined *)0x0; local_c8 = local_c8 + 1) {
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isKindOfClass__0269cd68,local_b8);
      puVar2 = local_c0;
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        local_d8 = 1;
        goto LAB_016acc7c;
      }
      puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) != 0) {
        _memset(auStack_120,0,0x40);
        puVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_188 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        if (local_188 != (undefined *)0x0) {
          lVar4 = *local_110;
          local_190 = (undefined *)0x0;
          do {
            do {
              if (*local_110 - lVar4 != 0) {
                _objc_enumerationMutation(*local_110 - lVar4,puVar3);
              }
              puVar5 = *(undefined **)(local_118 + (long)local_190 * 8);
              local_e0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,local_b8);
              puVar2 = local_e0;
              if (((ulong)puVar5 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar2;
                local_d8 = 1;
                goto LAB_016acb34;
              }
              local_190 = local_190 + 1;
            } while (local_190 < local_188);
            local_188 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8
                       ,0x10);
            local_190 = (undefined *)0x0;
          } while (local_188 != (undefined *)0x0);
        }
        local_d8 = 0;
LAB_016acb34:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_d8 != 0) goto LAB_016acc7c;
      }
      puVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_128 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = local_128;
      }
      _objc_storeStrong(&local_c0,local_1d8);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_b0 = (undefined *)0x0;
    local_d8 = 1;
LAB_016acc7c:
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

