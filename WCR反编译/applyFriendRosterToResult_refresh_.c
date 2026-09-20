// applyFriendRosterToResult:refresh: @ 014e4ce8

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsEngine::applyFriendRosterToResult_refresh_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *local_2d0;
  long *local_2c8;
  long *local_278;
  long *local_270;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  long *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  byte local_189;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined4 local_148;
  byte local_141;
  long local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar1 = &local_140;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(plVar1,param_3);
  local_141 = (byte)param_4;
  if (local_140 == 0) {
    local_148 = 1;
  }
  else {
    FUN_014e52d0();
    _objc_retainAutoreleasedReturnValue();
    local_150 = plVar1;
    (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_usrs);
    _objc_retainAutoreleasedReturnValue();
    local_158 = plVar1;
    FUN_014e5664();
    _objc_retainAutoreleasedReturnValue();
    local_160 = plVar1;
    if (((local_141 & 1) == 0) &&
       (plVar1 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0),
       plVar1 != (long *)0x0)) {
      local_189 = 0;
      _memset(auStack_1d8,0,0x40);
      plVar1 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_270 = plVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_270 != (long *)0x0) {
        lVar4 = *local_1c8;
        local_278 = (long *)0x0;
        do {
          do {
            if (*local_1c8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1c8 - lVar4,plVar1);
            }
            local_198 = *(undefined8 *)(local_1d0 + (long)local_278 * 8);
            plVar2 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_198);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (plVar2 == (long *)0x0) {
              plVar2 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_198);
              _objc_retainAutoreleasedReturnValue();
              plVar3 = plVar2;
              FUN_014e5c14();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,plVar3,local_198);
              (*(code *)PTR__objc_release_02578630)(plVar3);
              (*(code *)PTR__objc_release_02578630)(plVar2);
              local_189 = 1;
            }
            local_278 = (long *)((long)local_278 + 1);
          } while (local_278 < local_270);
          local_270 = plVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (plVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                     0x10);
          local_278 = (long *)0x0;
        } while (local_270 != (long *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(plVar1);
      plVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = plVar1;
      _memset(auStack_228,0,0x40);
      plVar1 = local_1e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c8 = plVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (plVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10
                );
      if (local_2c8 != (long *)0x0) {
        lVar4 = *local_218;
        local_2d0 = (long *)0x0;
        do {
          do {
            if (*local_218 - lVar4 != 0) {
              _objc_enumerationMutation(*local_218 - lVar4,plVar1);
            }
            local_1e8 = *(undefined8 *)(local_220 + (long)local_2d0 * 8);
            plVar2 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (plVar2 == (long *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_removeObjectForKey__0269d700,local_1e8);
              local_189 = 1;
            }
            local_2d0 = (long *)((long)local_2d0 + 1);
          } while (local_2d0 < local_2c8);
          local_2c8 = plVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (plVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                     0x10);
          local_2d0 = (long *)0x0;
        } while (local_2c8 != (long *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(plVar1);
      if ((local_189 & 1) != 0) {
        FUN_014e6040();
      }
      _objc_storeStrong(&local_1e0,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeAllObjects_0269d508);
      plVar2 = local_158;
      plVar1 = local_160;
      local_188 = PTR___NSConcreteGlobalBlock_02578658;
      local_180 = 0xd0800000;
      local_17c = 0;
      local_178 = FUN_014e5b50;
      local_170 = &DAT_02583738;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = plVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (plVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_188);
      FUN_014e6040();
      _objc_storeStrong(&local_168,0);
    }
    FUN_014e61fc(local_158,local_140);
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    local_148 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

