// setPlugins: @ 0176df6c

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::setPlugins_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_170;
  ulong local_168;
  undefined *local_140;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (undefined *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar1);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
  local_d9 = 0;
  local_140 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_140 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_140;
  }
  local_d9 = puVar2 == (undefined *)0x0;
  _objc_storeStrong(local_b0 + 0x10,local_140);
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_128,0,0x40);
  uVar3 = *(ulong *)(local_b0 + 0x10);
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar6 = *local_118;
    local_170 = 0;
    do {
      do {
        if (*local_118 - lVar6 != 0) {
          _objc_enumerationMutation(*local_118 - lVar6,uVar3);
        }
        lVar7 = *(long *)(local_120 + local_170 * 8);
        local_e8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_identifier_026a4a88);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        if (lVar4 != 0) {
          IVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_sessionRegisteredIdentifiers_026b4390);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_identifier_026a4a88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_sync_exit(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_persistRegistrySnapshot_026b4398);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

