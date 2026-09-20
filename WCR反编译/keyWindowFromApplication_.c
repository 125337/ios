// keyWindowFromApplication: @ 014af250

/* Function Stack Size: 0x18 bytes */

ID WCRefineRestar::keyWindowFromApplication_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_keyWindow_0269d308);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  if (uVar2 == 0) {
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_valueForKey__0269d128,&cf_connectedScenes);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    _memset(auStack_118,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_110 + local_160 * 8);
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_valueForKey__0269d128,&cf_activationState);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (uVar3 == 0) {
            uVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_valueForKeyPath__026a0b98,
                       &cf_delegate_window_windowScene_windows);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_120 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar3 & 1) == 0) ||
               (uVar3 = local_120,
               (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0), uVar3 == 0)) {
              bVar1 = false;
            }
            else {
              uVar6 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_c8;
              local_c8 = uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              bVar1 = true;
            }
            _objc_storeStrong(&local_120,0);
            if (bVar1) goto LAB_014af580;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
LAB_014af580:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_d0,0);
  }
  bVar1 = false;
  if (local_c8 == 0) {
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_windows_0269dde0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_windows_0269dde0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c8;
    local_c8 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

