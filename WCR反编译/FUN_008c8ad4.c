// FUN_008c8ad4 @ 008c8ad4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008c8ad4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined1 *local_168;
  undefined1 *local_160;
  int local_158;
  byte local_151;
  undefined1 *local_150;
  undefined *local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined1 *)0x0;
  _objc_storeStrong(&local_138,param_1);
  puVar3 = local_138;
  local_151 = 0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    bVar1 = puVar3 != (undefined1 *)0x0;
    local_150 = puVar3;
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  if (bVar1) {
    puVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_158 = 1;
    local_130 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    puVar4 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_connectedScenes_026ca590);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_268 != (undefined1 *)0x0) {
      lVar6 = *local_198;
      local_270 = (undefined1 *)0x0;
      do {
        do {
          if (*local_198 - lVar6 != 0) {
            _objc_enumerationMutation(*local_198 - lVar6,puVar4);
          }
          puVar9 = *(undefined1 **)(local_1a0 + (long)local_270 * 8);
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_168 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar5 = local_168;
          if (((ulong)puVar9 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activationState_026ca490);
            if ((puVar5 == (undefined1 *)0x0) ||
               (puVar5 = local_1b0,
               (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_activationState_026ca490),
               puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
              _memset(auStack_1f8,0,0x40);
              puVar5 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_windows_0269dde0);
              _objc_retainAutoreleasedReturnValue();
              local_2d8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_2d8 != (undefined1 *)0x0) {
                lVar7 = *local_1e8;
                local_2e0 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_1e8 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_1e8 - lVar7,puVar5);
                    }
                    puVar8 = *(undefined1 **)(local_1f0 + (long)local_2e0 * 8);
                    local_1b8 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isKeyWindow_0269cd70);
                    puVar9 = local_1b8;
                    if (((ulong)puVar8 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_130 = puVar9;
                      local_158 = 1;
                      goto LAB_008c9094;
                    }
                    local_2e0 = local_2e0 + 1;
                  } while (local_2e0 < local_2d8);
                  local_2d8 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                             auStack_128,0x10);
                  local_2e0 = (undefined1 *)0x0;
                } while (local_2d8 != (undefined1 *)0x0);
              }
              local_158 = 0;
LAB_008c9094:
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if (local_158 == 0) {
                puVar5 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_windows_0269dde0);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
                if (puVar9 == (undefined1 *)0x0) {
                  local_158 = 0;
                }
                else {
                  puVar5 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_windows_0269dde0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_130 = puVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  local_158 = 1;
                }
              }
            }
            else {
              local_158 = 3;
            }
            _objc_storeStrong(&local_1b0,0);
            if ((local_158 != 0) && (local_158 != 3)) goto LAB_008c92ac;
          }
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_270 = (undefined1 *)0x0;
      } while (local_268 != (undefined1 *)0x0);
    }
    local_158 = 0;
LAB_008c92ac:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_158 == 0) {
      puVar4 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_respondsToSelector__026ca818,PTR_s_keyWindow_0269d308);
      bVar1 = false;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_keyWindow_0269d308);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar4 != (undefined1 *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if (bVar1) {
        puVar4 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_keyWindow_0269d308);
        _objc_retainAutoreleasedReturnValue();
        local_158 = 1;
        local_130 = puVar4;
      }
      else {
        puVar4 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_windows_0269dde0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_130 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_158 = 1;
      }
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

