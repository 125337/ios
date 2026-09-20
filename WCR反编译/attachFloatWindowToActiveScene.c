// attachFloatWindowToActiveScene @ 00fe62cc

/* Function Stack Size: 0x10 bytes */

void WCRefineIconNameCaptureSupport::attachFloatWindowToActiveScene(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_1b0;
  undefined *local_1a8;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined1 local_119;
  long local_118;
  undefined4 local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  if (DAT_028e3090 != 0) {
    local_c0 = 0;
    _memset(auStack_108,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_1a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar6 = *local_f8;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar6,puVar4);
          }
          uVar7 = *(ulong *)(local_100 + (long)local_1b0 * 8);
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_c8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_activationState_026ca490),
             uVar7 == 0)) {
            _objc_storeStrong(&local_c0,local_c8);
            local_10c = 2;
            goto LAB_00fe6504;
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    local_10c = 0;
LAB_00fe6504:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_119 = 0;
    bVar2 = false;
    uVar1 = local_c0 != 0;
    if ((bool)uVar1) {
      lVar6 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_windowScene_026cabf8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar6 != local_c0;
      local_119 = uVar1;
      local_118 = lVar6;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      uVar1 = local_119;
    }
    local_119 = uVar1;
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setWindowScene__026caaf0,local_c0);
    }
    if (local_c0 != 0) {
      lVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_windows_0269dde0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_128 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      bVar2 = local_128 == 0;
      if (bVar2) {
        local_150 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_screen_0269f4f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_148 = in_d0;
        uStack_140 = in_d1;
        local_138 = in_d2;
        uStack_130 = in_d3;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
        local_148 = in_d0;
        uStack_140 = in_d1;
        local_138 = in_d2;
        uStack_130 = in_d3;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,uStack_140,local_138,uStack_130,DAT_028e3090,PTR_s_setFrame__026ca960);
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      _objc_storeStrong(&local_128,0);
    }
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

