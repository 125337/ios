// FUN_001fd740 @ 001fd740

void FUN_001fd740(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_378;
  ulong local_370;
  ulong local_338;
  ulong local_330;
  ulong local_2e0;
  ulong local_2d8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  int local_1c8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  uVar2 = local_1b8;
  if (local_1b8 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_210,0,0x40);
      uVar2 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_2d8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2d8 != 0) {
        lVar4 = *local_200;
        local_2e0 = 0;
        do {
          do {
            if (*local_200 - lVar4 != 0) {
              _objc_enumerationMutation(*local_200 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_208 + local_2e0 * 8);
            local_1d0 = uVar5;
            FUN_001fbf38();
            uVar3 = local_1d0;
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar3;
              local_1c8 = 1;
              goto LAB_001fd9b0;
            }
            local_2e0 = local_2e0 + 1;
          } while (local_2e0 < local_2d8);
          local_2d8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,
                     0x10);
          local_2e0 = 0;
        } while (local_2d8 != 0);
      }
      local_1c8 = 0;
LAB_001fd9b0:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_1c8 == 0) {
        _memset(auStack_258,0,0x40);
        uVar2 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_330 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_330 != 0) {
          lVar4 = *local_248;
          local_338 = 0;
          do {
            do {
              if (*local_248 - lVar4 != 0) {
                _objc_enumerationMutation(*local_248 - lVar4,uVar2);
              }
              local_218 = *(ulong *)(local_250 + local_338 * 8);
              _memset(auStack_2a0,0,0x40);
              uVar3 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_370 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_370 != 0) {
                lVar6 = *local_290;
                local_378 = 0;
                do {
                  do {
                    if (*local_290 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_290 - lVar6,uVar3);
                    }
                    uVar7 = *(ulong *)(local_298 + local_378 * 8);
                    local_260 = uVar7;
                    FUN_001fbf38();
                    uVar5 = local_260;
                    if ((uVar7 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_1b0 = uVar5;
                      local_1c8 = 1;
                      goto LAB_001fdc74;
                    }
                    local_378 = local_378 + 1;
                  } while (local_378 < local_370);
                  local_370 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                             auStack_1a8,0x10);
                  local_378 = 0;
                } while (local_370 != 0);
              }
              local_1c8 = 0;
LAB_001fdc74:
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if (local_1c8 != 0) goto LAB_001fdd08;
              local_338 = local_338 + 1;
            } while (local_338 < local_330);
            local_330 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128
                       ,0x10);
            local_338 = 0;
          } while (local_330 != 0);
        }
        local_1c8 = 0;
LAB_001fdd08:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_1c8 == 0) {
          local_1b0 = 0;
          local_1c8 = 1;
        }
      }
      goto LAB_001fdd4c;
    }
  }
  local_1b0 = 0;
  local_1c8 = 1;
LAB_001fdd4c:
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

