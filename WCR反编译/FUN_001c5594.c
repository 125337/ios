// FUN_001c5594 @ 001c5594

void FUN_001c5594(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_3f8;
  ulong local_3f0;
  ulong local_378;
  ulong local_370;
  ulong local_318;
  ulong local_310;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  ulong local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  ulong local_1d8 [3];
  ulong local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*DAT_028c8c70)(param_1,param_2);
  FUN_00204478();
  if (((param_1 & 1) != 0) || (FUN_00204514(), (param_1 & 1) != 0)) {
    uVar2 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0,PTR_s_valueForKey__0269d128,&cf_currentPatBackgroundView);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = uVar2;
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        FUN_002045b0(local_1c0);
      }
    }
    uVar2 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0,PTR_s_valueForKey__0269d128,&cf_patBackgroundViews);
    _objc_retainAutoreleasedReturnValue();
    local_1d8[0] = uVar2;
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        uVar6 = local_1d8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8[0],PTR_s_count_0269cfe0);
        uVar2 = 0;
        if (uVar6 != 0) {
          _memset(auStack_220,0,0x40);
          uVar2 = local_1d8[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_310 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                     0x10);
          if (local_310 != 0) {
            lVar5 = *local_210;
            local_318 = 0;
            do {
              do {
                if (*local_210 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_210 - lVar5,uVar2);
                }
                uVar6 = *(ulong *)(local_218 + local_318 * 8);
                local_1e0 = uVar6;
                if (uVar6 != 0) {
                  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if ((uVar6 & 1) != 0) {
                    uVar6 = local_1e0;
                    FUN_002045b0();
                    uVar1 = (uint)uVar6;
                    FUN_00204514();
                    if ((uVar1 & 1) != 0) {
                      if (DAT_028c9180 == (cfstringStruct *)0x0) {
                        pcVar4 = &cf_UIVisualEffectView;
                        _NSClassFromString();
                        DAT_028c9180 = pcVar4;
                      }
                      if (DAT_028c9180 != (cfstringStruct *)0x0) {
                        _memset(auStack_268,0,0x40);
                        uVar6 = local_1e0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_subviews_026cab40);
                        _objc_retainAutoreleasedReturnValue();
                        local_370 = uVar6;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (local_370 != 0) {
                          lVar7 = *local_258;
                          local_378 = 0;
                          do {
                            do {
                              if (*local_258 - lVar7 != 0) {
                                _objc_enumerationMutation(*local_258 - lVar7,uVar6);
                              }
                              uVar8 = *(ulong *)(local_260 + local_378 * 8);
                              local_228 = uVar8;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar8,PTR_s_isKindOfClass__0269cd68,DAT_028c9180);
                              if (((uVar8 & 1) != 0) &&
                                 (uVar8 = local_228,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_228,PTR_s_isHidden_026ca768), (uVar8 & 1) == 0)) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_228,PTR_s_setHidden__026ca970,1);
                              }
                              local_378 = local_378 + 1;
                            } while (local_378 < local_370);
                            local_370 = uVar6;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_268,auStack_128,0x10);
                            local_378 = 0;
                          } while (local_370 != 0);
                        }
                        (*(code *)PTR__objc_release_02578630)(uVar6);
                      }
                    }
                  }
                }
                local_318 = local_318 + 1;
              } while (local_318 < local_310);
              local_310 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                         auStack_a8,0x10);
              local_318 = 0;
            } while (local_310 != 0);
          }
          (*(code *)PTR__objc_release_02578630)();
        }
      }
    }
    uVar1 = (uint)uVar2;
    FUN_00204514();
    uVar2 = local_1c0;
    if (((uVar1 & 1) != 0) && (local_1c0 != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        if (DAT_028c9180 == (cfstringStruct *)0x0) {
          pcVar4 = &cf_UIVisualEffectView;
          _NSClassFromString();
          DAT_028c9180 = pcVar4;
        }
        if (DAT_028c9180 != (cfstringStruct *)0x0) {
          _memset(auStack_2b0,0,0x40);
          uVar2 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_3f0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3f0 != 0) {
            lVar5 = *local_2a0;
            local_3f8 = 0;
            do {
              do {
                if (*local_2a0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_2a0 - lVar5,uVar2);
                }
                uVar6 = *(ulong *)(local_2a8 + local_3f8 * 8);
                local_270 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_isKindOfClass__0269cd68,DAT_028c9180);
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = local_270,
                   (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_isHidden_026ca768),
                   (uVar6 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setHidden__026ca970,1);
                }
                local_3f8 = local_3f8 + 1;
              } while (local_3f8 < local_3f0);
              local_3f0 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                         auStack_1a8,0x10);
              local_3f8 = 0;
            } while (local_3f0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
    }
    _objc_storeStrong(local_1d8);
    _objc_storeStrong(&local_1c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

