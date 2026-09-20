// persist @ 01ad42ac

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineGroupManager::persist(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  undefined *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  uVar3 = *(ulong *)(local_b0 + 8);
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar4 = *local_f8;
    local_170 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar3);
        }
        puVar2 = local_c0;
        uVar1 = *(undefined8 *)(local_100 + local_170 * 8);
        local_c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_dictionaryRepresentation_026ae418);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,&cf_homeGroupingGroups);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_110);
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_class_0269cd60);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  DAT_028e4550 = DAT_028e4550 + 1;
  _objc_sync_exit(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

