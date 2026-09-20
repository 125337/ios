// _WCRSuperFloatDispatchActionId @ 016279c4

byte _WCRSuperFloatDispatchActionId(undefined8 param_1)

{
  void *pvVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *local_260;
  void *local_258;
  void *local_200;
  void *local_1f8;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  int local_144;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar6 = local_138;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
  if (uVar6 == 0) {
    local_129 = 0;
    local_144 = 1;
  }
  else {
    uVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_open_menu);
    if ((uVar6 & 1) == 0) {
      pvVar1 = _memset(auStack_190,0,0x40);
      _WCRSuperFloatRefreshActions();
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = pvVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1f8 != (void *)0x0) {
        lVar5 = *local_180;
        local_200 = (void *)0x0;
        do {
          do {
            if (*local_180 - lVar5 != 0) {
              _objc_enumerationMutation(*local_180 - lVar5,pvVar1);
            }
            uVar6 = *(ulong *)(local_188 + (long)local_200 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_150 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar6;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar3);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((uVar4 & 1) != 0) {
                uVar6 = local_150;
                _WCRSuperFloatDispatch();
                local_129 = (byte)uVar6 & 1;
                local_144 = 1;
                goto LAB_01627c94;
              }
            }
            local_200 = (void *)((long)local_200 + 1);
          } while (local_200 < local_1f8);
          local_1f8 = pvVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                     0x10);
          local_200 = (void *)0x0;
        } while (local_1f8 != (void *)0x0);
      }
      local_144 = 0;
LAB_01627c94:
      (*(code *)PTR__objc_release_02578630)(pvVar1);
      if (local_144 == 0) {
        pvVar1 = _memset(auStack_1d8,0,0x40);
        _WCRSuperFloatEnabledActions();
        _objc_retainAutoreleasedReturnValue();
        local_258 = pvVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_258 != (void *)0x0) {
          lVar5 = *local_1c8;
          local_260 = (void *)0x0;
          do {
            do {
              if (*local_1c8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar5,pvVar1);
              }
              uVar6 = *(ulong *)(local_1d0 + (long)local_260 * 8);
              puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_198 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar6 & 1) != 0) {
                uVar6 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar6;
                FUN_01618794();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar3);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                if ((uVar4 & 1) != 0) {
                  uVar6 = local_198;
                  _WCRSuperFloatDispatch();
                  local_129 = (byte)uVar6 & 1;
                  local_144 = 1;
                  goto LAB_01627ec0;
                }
              }
              local_260 = (void *)((long)local_260 + 1);
            } while (local_260 < local_258);
            local_258 = pvVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                       auStack_128,0x10);
            local_260 = (void *)0x0;
          } while (local_258 != (void *)0x0);
        }
        local_144 = 0;
LAB_01627ec0:
        (*(code *)PTR__objc_release_02578630)(pvVar1);
        if (local_144 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RKbRR_O);
          local_129 = 0;
          local_144 = 1;
        }
      }
    }
    else {
      local_129 = 0;
      local_144 = 1;
    }
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

