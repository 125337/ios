// reconcileRegistryWithCurrentSession @ 01770b14

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefinePluginHubManager::reconcileRegistryWithCurrentSession
          (WCRefinePluginHubManager *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_180;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined8 local_d0;
  ulong local_c8 [2];
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _CFAbsoluteTimeGetCurrent();
  puVar1 = local_b0;
  local_c8[0] = 0;
  local_d0 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(puVar1);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sessionRegisteredIdentifiers_026b4390);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e9 = 0;
  local_180 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_180 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_180;
  }
  local_e9 = puVar3 == (undefined *)0x0;
  _objc_storeStrong(local_c8,local_180);
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar3;
  _memset(auStack_148,0,0x40);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_plugins_026b43a8);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1b8 != (undefined *)0x0) {
    lVar5 = *local_138;
    local_1c0 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar5 != 0) {
          _objc_enumerationMutation(*local_138 - lVar5,puVar2);
        }
        uVar4 = local_c8[0];
        uVar6 = *(undefined8 *)(local_140 + (long)local_1c0 * 8);
        local_108 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_identifier_026a4a88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_108);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_108);
        }
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      local_1c0 = (undefined *)0x0;
    } while (local_1b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    _objc_storeStrong(local_b0 + 0x10,local_f8);
    _objc_storeStrong(&local_d0,local_100);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_sync_exit(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_persistRegistrySnapshot_026b4398);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_notifyChanged_026b43a0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

