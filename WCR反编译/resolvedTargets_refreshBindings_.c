// resolvedTargets:refreshBindings: @ 014bc3d8

/* Function Stack Size: 0x1c bytes */

ID WCRefineScheduledTask::resolvedTargets_refreshBindings_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  undefined *local_2a0;
  ulong local_278;
  ulong local_270;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ID local_1b0;
  undefined4 local_1a4;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined *local_150;
  byte local_141;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_141 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar1;
  _memset(auStack_198,0,0x40);
  uVar2 = local_140;
  FUN_014b56f0();
  _objc_retainAutoreleasedReturnValue();
  local_220 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != 0) {
    lVar5 = *local_188;
    local_228 = 0;
    do {
      do {
        if (*local_188 - lVar5 != 0) {
          _objc_enumerationMutation(*local_188 - lVar5,uVar2);
        }
        lVar6 = *(long *)(local_190 + local_228 * 8);
        local_158 = lVar6;
        FUN_014b5580();
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if (lVar6 == 0) {
          local_1a4 = 3;
        }
        else {
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isGroupTarget__026af4a8,local_1a0);
          IVar4 = local_130;
          if ((IVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0);
            local_1a4 = 3;
          }
          else {
            IVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_homeGroupIDFromTarget__026af4c8,local_1a0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_usernamesForHomeGroupID_refreshB_026af4c0,IVar3,local_141 & 1);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = IVar4;
            (*(code *)PTR__objc_release_02578630)(IVar3);
            _memset(auStack_1f8,0,0x40);
            IVar4 = local_1b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_270 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128
                       ,0x10);
            if (local_270 != 0) {
              lVar6 = *local_1e8;
              local_278 = 0;
              do {
                do {
                  if (*local_1e8 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e8 - lVar6,IVar4);
                  }
                  local_1b8 = *(undefined8 *)(local_1f0 + local_278 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_addObject__0269d180,local_1b8);
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                           auStack_128,0x10);
                local_278 = 0;
              } while (local_270 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar4);
            _objc_storeStrong(&local_1b0,0);
            local_1a4 = 0;
          }
        }
        _objc_storeStrong(&local_1a0,0);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_2a0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_2a0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_1a4 = 1;
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_2a0;
}

