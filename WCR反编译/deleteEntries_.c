// deleteEntries: @ 01f1c2c0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::deleteEntries_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_290;
  ulong local_288;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  byte local_151;
  undefined *local_150;
  undefined4 local_144;
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
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_144 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 0;
    local_150 = puVar2;
    _memset(auStack_1a0,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_218 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_218 != 0) {
      lVar6 = *local_190;
      local_220 = 0;
      do {
        do {
          if (*local_190 - lVar6 != 0) {
            _objc_enumerationMutation(*local_190 - lVar6,uVar1);
          }
          local_160 = *(long *)(local_198 + local_220 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_appendHistoryForEntry_eventType__026c8308,local_160,&cf_deleted
                    );
          lVar3 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_backend_026c7148);
          if (lVar3 == 0) {
            lVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_entryId_026c7430);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar3);
            puVar2 = local_150;
            if (lVar4 != 0) {
              lVar3 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_entryId_026c7430);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar3);
              local_151 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_removeOfficialItemForEntry__026c8310,local_160);
            IVar5 = local_130;
            lVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_entryId_026c7430);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_clearOfficialMetaForId__026c8348);
            (*(code *)PTR__objc_release_02578630)(lVar3);
          }
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_220 = 0;
      } while (local_218 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_151 & 1) != 0) {
      IVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_mutableLocalItems_026c82d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1a8 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar2;
      _memset(auStack_1f8,0,0x40);
      IVar5 = local_1a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_288 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      if (local_288 != 0) {
        lVar6 = *local_1e8;
        local_290 = 0;
        do {
          do {
            if (*local_1e8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar6,IVar5);
            }
            puVar2 = local_150;
            uVar7 = *(undefined8 *)(local_1f0 + local_290 * 8);
            local_1b8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_1b8);
            }
            local_290 = local_290 + 1;
          } while (local_290 < local_288);
          local_288 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          local_290 = 0;
        } while (local_288 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_saveLocalItems__026c82e0,local_1b0);
      _objc_storeStrong(&local_1b0);
      _objc_storeStrong(&local_1a8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_broadcastChanged_026c8298);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

