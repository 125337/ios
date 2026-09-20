// migratePluginSearchDefaultOnIfNeeded @ 0211e330

/* Function Stack Size: 0x10 bytes */

void WCRefineConfig::migratePluginSearchDefaultOnIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *local_260;
  void *local_258;
  void *local_218;
  void *local_210;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  ID local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  byte local_146;
  byte local_145;
  int local_144;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineSearchPluginDefaultOnMigratedV1);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    local_145 = 0;
    local_146 = 0;
    pvVar2 = _memset(auStack_190,0,0x40);
    FUN_0211e8cc();
    _objc_retainAutoreleasedReturnValue();
    local_210 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_210 != (void *)0x0) {
      lVar4 = *local_180;
      local_218 = (void *)0x0;
      do {
        do {
          if (*local_180 - lVar4 != 0) {
            _objc_enumerationMutation(*local_180 - lVar4,pvVar2);
          }
          uVar5 = *(ulong *)(local_188 + (long)local_218 * 8);
          local_150 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_isEqualToString__0269ccc8,&cf_searchPluginWCRefine);
          if ((uVar5 & 1) == 0) {
            IVar1 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_objectForKey__0269e048,local_150);
            _objc_retainAutoreleasedReturnValue();
            local_198 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
            if ((IVar1 & 1) == 0) {
              local_144 = 3;
            }
            else {
              IVar1 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_boolValue_026ca540);
              if ((IVar1 & 1) == 0) {
                local_145 = 1;
                local_144 = 0;
              }
              else {
                local_146 = 1;
                local_144 = 2;
              }
            }
            _objc_storeStrong(&local_198,0);
            if ((local_144 != 0) && (local_144 != 3)) goto LAB_0211e61c;
          }
          local_218 = (void *)((long)local_218 + 1);
        } while (local_218 < local_210);
        local_210 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_218 = (void *)0x0;
      } while (local_210 != (void *)0x0);
    }
    local_144 = 0;
LAB_0211e61c:
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    if (((local_146 & 1) == 0) && ((local_145 & 1) != 0)) {
      pvVar2 = _memset(auStack_1e0,0,0x40);
      FUN_0211e8cc();
      _objc_retainAutoreleasedReturnValue();
      local_258 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_258 != (void *)0x0) {
        lVar4 = *local_1d0;
        local_260 = (void *)0x0;
        do {
          do {
            if (*local_1d0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1d0 - lVar4,pvVar2);
            }
            IVar1 = local_140;
            local_1a0 = *(undefined8 *)(local_1d8 + (long)local_260 * 8);
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,local_1a0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_260 = (void *)((long)local_260 + 1);
          } while (local_260 < local_258);
          local_258 = pvVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                     0x10);
          local_260 = (void *)0x0;
        } while (local_258 != (void *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pvVar2);
    }
    IVar1 = local_140;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,
               &cf_WCRefineSearchPluginDefaultOnMigratedV1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    local_144 = 0;
  }
  else {
    local_144 = 1;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

